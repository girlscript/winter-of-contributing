#include <bits/stdc++.h>
using namespace std;

struct Process
{
    int pid, arrivalTime, burstTime, waitTime, turnAroundTime, ResponseTime, completionTime, priority;
};

bool cmp(Process &a, Process &b)
{
    if (a.arrivalTime == b.arrivalTime)
        return a.priority < b.priority;
    return a.arrivalTime < b.arrivalTime;
}

void complete(vector<Process> &p)
{
    int n = p.size();
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        int k = -1;
        int priority = 1e9;
        for (int j = i; j < n; j++)
        {
            if (p[j].arrivalTime <= time && p[j].priority < priority)
            {
                k = j;
                priority = p[j].priority;
            }
        }
        if (k == -1)
        {
            time = p[i].arrivalTime;
            i--;
            continue;
        }
        p[k].completionTime = time + p[k].burstTime;
        p[k].turnAroundTime = p[k].completionTime - p[k].arrivalTime;
        p[k].waitTime = p[k].turnAroundTime - p[k].burstTime;
        p[k].ResponseTime = time - p[k].arrivalTime;
        time = p[k].completionTime;
        swap(p[k], p[i]);
    }
}

double AvgTurn(vector<Process> &p)
{
    int n = p.size();
    double sum = 0;
    for (auto it : p)
    {
        sum += it.turnAroundTime;
    }
    return sum / n;
}

double AvgWait(vector<Process> &p)
{
    int n = p.size();
    double sum = 0;
    for (auto it : p)
    {
        sum += it.waitTime;
    }
    return sum / n;
}

double avgResponse(vector<Process> &p)
{
    int n = p.size();
    double sum = 0;
    for (auto it : p)
    {
        sum += it.ResponseTime;
    }
    return sum / n;
}

double CPUUtilization(vector<Process> &p)
{
    double sum = 0;
    int n = p.size();
    for (auto it : p)
    {
        sum += it.burstTime;
    }
    return sum / p.back().completionTime * 100;
}

int main()
{
    int n;
    cout << "enter the number of processes : ";
    cin >> n;
    cout << "enter priority,arrival time and burst time\n";
    vector<Process> p(n);
    for (int i = 0; i < n; i++)
    {
        cout << "For process " << i + 1 << " : ";
        p[i].pid = i + 1;
        cin >> p[i].priority;
        cin >> p[i].arrivalTime;
        cin >> p[i].burstTime;
    }

    sort(p.begin(), p.end(), cmp);
    int time = 0;

    complete(p);

    cout << setw(15) << "processId" << setw(15) << "ArrivalTime" << setw(15) << "burstTime" << setw(15) << "completionTime" << setw(15) << "TurnAround" << setw(15) << "WaitTime"
         << setw(15) << "ResponseTime" << endl;

    for (auto it : p)
    {
        cout << setw(15) << it.pid << setw(15) << it.arrivalTime << setw(15) << it.burstTime << setw(15) << it.completionTime << setw(15) << it.turnAroundTime << setw(15) << it.waitTime
             << setw(15) << it.ResponseTime << endl;
    }
    cout << endl;
    cout << "Average Turn Around Time : " << AvgTurn(p) << endl;
    cout << "Average waiting time : " << AvgWait(p) << endl;
    cout << "Average response time : " << avgResponse(p) << endl;
    cout << "CPU UTILIZATION " << CPUUtilization(p) << endl;
}
