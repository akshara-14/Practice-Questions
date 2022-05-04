#include <iostream>
using namespace std;

// Function to find the waiting time of the processes

void waitingTime(int processes[], int n, int burstTime[], int waitTime[], int quantum)
{
    int rem_bt[n];
    for (int i = 0; i < n; i++)
    {
        rem_bt[i] = burstTime[i];
    }
    int time = 0;
    while (1)
    {
        bool process_done = true;
        for (int i = 0; i < n; i++)
        {
            if (rem_bt[i] > 0)
            {
                process_done = false;
                if (rem_bt[i] > quantum)
                {
                    time += quantum;
                    rem_bt[i] -= quantum;
                }
                else
                {
                    time += rem_bt[i];
                    waitTime[i] = time - burstTime[i];
                    rem_bt[i] = 0;
                }
            }
        }
        if (process_done == true)
        {
            break;
        }
    }
}
