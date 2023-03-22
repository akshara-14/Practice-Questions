#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Sender class
class Sender
{
public:
    int message;
    bool ackReceived;

    Sender(int m) : message(m), ackReceived(false) {}
    bool isAckReceived() { return ackReceived; }
    void send()
    {
        cout << "Sender: Sending message " << message << endl;
        srand(time(0));
        int chance = rand() % 2; // 0 or 1
        if (chance)
        {
            cout << "Receiver: Message received." << endl;
            ackReceived = true;
        }
        else
        {
            cout << "Receiver: Message lost." << endl;
            ackReceived = false;
        }
    }
};

// Receiver class
class Receiver
{
public:
    int message;
    bool ackSent;

    Receiver() : message(0), ackSent(false) {}
    void receive(Sender &sender)
    {
        cout << "Receiver: Receiving message." << endl;
        message = sender.isAckReceived() ? sender.message + 1 : sender.message;
        cout << "Receiver: Sending acknowledgement." << endl;
        ackSent = true;
    }
    bool isAckSent() { return ackSent; }
};

int main()
{
    Sender sender(1);
    Receiver receiver;

    while (true)
    {
        sender.send();
        receiver.receive(sender);
        if (receiver.isAckSent() && sender.isAckReceived())
        {
            cout << "Sender: Acknowledgement received." << endl;
            break;
        }
        else
        {
            cout << "Sender: Resending message." << endl;
        }
    }

    return 0;
}
