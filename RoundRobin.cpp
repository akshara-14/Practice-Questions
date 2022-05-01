#include <iostream>
using namespace std;
class Round_robin
{
public:
    int i, time, remain, temps = 0, time_quantum;
    int avwt, avtat = 0;
    ;
    void findavgTime(int processes[], int n, int bt[], int at[])
    {
        int wt[n];
        int tat[n];
        int rt[n];
        for (i = 0; i < n; i++)
        {
            rt[i] = bt[i];
        }
        cout << "Enter the value of time QUANTUM:" << endl;
        cin >> time_quantum;
        cout << "Processes "
             << " Turn around time "
             << " Waiting time\n";
        for (int time = 0, i = 0; remain != 0;)
        {
            if (rt[i] <= time_quantum && rt[i] > 0)
            {
                time += rt[i];

                rt[i] = 0;
                temps = 1;
            }

            else if (rt[i] > 0)
            {
                rt[i] -= time_quantum;

                time += time_quantum;
            }
            for (int i = 0; i < n; i++)
            {
                wt[i] = time - at[i] - bt[i];
                tat[i] = time - at[i];
            }
            if (rt[i] == 0 && temps == 1)
            {
                remain--;
                printf("Process{%d}\t\t%d\t\t%d\n", i + 1, time - at[i], time - at[i] - bt[i]);
                avwt += time - at[i] - bt[i];
                avtat += time - at[i];
                temps = 0;
            }
            if (i == n - 1)
                i = 0;
            else if (at[i + 1] <= time)
                i++;
            else
                i = 0;
        }
        cout << "\n\nAverage waiting time =" << avwt / n;
        cout << " \nAverage Turnaround time =" << avtat / n << endl;
    }
};

int main()
{
    int processes[100] = {11, 2, 5};
    int burst_time[100] = {4, 3, 5};
    int arrival_time[100] = {0, 4, 3};

    Round_robin process;
    process.findavgTime(processes, 100, burst_time, arrival_time);
    return 0;
}
