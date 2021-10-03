#include <bits/stdc++.h>
using namespace std;

struct Process
{
    int pid, arrivalTime, burstTime, waitTime, turnAroundTime, ResponseTime, completionTime;
};
 
bool cmp(Process &a, Process &b)
{
    if (a.arrivalTime == b.arrivalTime)
        return a.burstTime < b.burstTime;
    return a.arrivalTime < b.arrivalTime;
}

int main()
{
    int n;
    cout << "Enter the number of processes : ";
    cin >> n;
    cout << "Enter arrival and burst times\n";
    vector<Process> p(n);
    for (int i = 0; i < n; i++)
    {
        cout << "For process " << i + 1 << " : ";
        p[i].pid = i + 1;
        cin >> p[i].arrivalTime;
        cin >> p[i].burstTime;
    }
    sort(p.begin(), p.end(), cmp);
    int time = 0;
    float avgTurnAround = 0, avgWaiting = 0, avgResponse = 0, CPUUtilization, burst;
    for (auto &it : p)
    {
        if (it.arrivalTime < time)
        {
            it.completionTime = time + it.burstTime;
            it.ResponseTime = time - it.arrivalTime;
            time += it.burstTime;
            it.turnAroundTime = time - it.arrivalTime;
            it.waitTime = it.turnAroundTime - it.burstTime;
        }
        else
        {
            it.completionTime = it.arrivalTime + it.burstTime;
            it.ResponseTime = 0;
            time = it.arrivalTime + it.burstTime;
            it.turnAroundTime = it.burstTime;
            it.waitTime = 0;
        }

        avgTurnAround += it.turnAroundTime;
        avgWaiting += it.waitTime;
        avgResponse += it.ResponseTime;
        burst += it.burstTime;
    }
    avgTurnAround /= n;
    avgWaiting /= n;
    avgResponse /= n;
    CPUUtilization = burst / time * 100;
    cout << setw(15) << "processId" << setw(15) << "ArrivalTime" << setw(15) << "burstTime" << setw(15) << "completionTime" << setw(15) << "TurnAround" << setw(15) << "WaitTime"
         << setw(15) << "ResponseTime" << endl;

    for (auto it : p)
    {
        cout << setw(15) << it.pid << setw(15) << it.arrivalTime << setw(15) << it.burstTime << setw(15) << it.completionTime << setw(15) << it.turnAroundTime << setw(15) << it.waitTime
             << setw(15) << it.ResponseTime << endl;
    }
    cout << endl;
    cout << "Average Turn Around Time : " << avgTurnAround << endl;
    cout << "Average waiting time : " << avgWaiting << endl;
    cout << "Average response time : " << avgResponse << endl;
    cout << "CPU UTILIZATION " << CPUUtilization << endl;
}
