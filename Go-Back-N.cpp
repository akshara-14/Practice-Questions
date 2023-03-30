#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int MAX_PACKET_SIZE = 1024;
const int MAX_SEQUENCE_NUMBER = 7;
const int WINDOW_SIZE = 4;

struct packet
{
    int sequence_number;
    char data[MAX_PACKET_SIZE];
};

int base = 0;
int next_sequence_number = 0;
packet window[WINDOW_SIZE];

void sender()
{
    packet p;
    while (true)
    {
        // Read data from input
        cin.getline(p.data, MAX_PACKET_SIZE);
        int len = strlen(p.data);
        if (len == 0)
            break;

        // Fill packet fields
        p.sequence_number = next_sequence_number;
        next_sequence_number = (next_sequence_number + 1) % (MAX_SEQUENCE_NUMBER + 1);

        // Send packet
        print_packet(p);
        window[p.sequence_number % WINDOW_SIZE] = p;
        if ((p.sequence_number - base) % (MAX_SEQUENCE_NUMBER + 1) == WINDOW_SIZE - 1)
        {
            // Window is full, wait for acks
            while (true)
            {
                packet ack;
                // Receive ack
                print_packet(ack);
                if (ack.sequence_number == (base + WINDOW_SIZE - 1) % (MAX_SEQUENCE_NUMBER + 1))
                {
                    // Ack is for last packet in window
                    base = (base + WINDOW_SIZE) % (MAX_SEQUENCE_NUMBER + 1);
                    
                    for (int i = 0; i < WINDOW_SIZE; i++)
                    {
                        int index = (base + i) % (MAX_SEQUENCE_NUMBER + 1);
                        print_packet(window[index]);
                        if (index == next_sequence_number)
                            break;
                    }
                    break;
                }
            }
        }
    }
}

void receiver()
{
    while (true)
    { 
        packet p;
        // Receive packet
        if (p.sequence_number == base)
        {
            // Packet is expected, send ack
            print_packet(p);
            base = (base + 1) % (MAX_SEQUENCE_NUMBER + 1);
        }
        else
        {
            // Packet is unexpected, ignore
        }
    }
}

void print_packet(const packet &p)
{
    cout << "Sequence number: " << p.sequence_number << endl;
    cout << "Data: " << p.data << endl;
}

int main()
{
    sender();
    return 0;
}
