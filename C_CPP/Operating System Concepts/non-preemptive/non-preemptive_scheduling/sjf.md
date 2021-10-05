# SHORTEST JOB FIRST ALGORITHM

        #include <bits/stdc++.h>
        using namespace std;

        struct Process
        {
            int pid, arrivalTime, burstTime, waitTime, turnAroundTime, ResponseTime, completionTime;
        };

        //compare function
        bool cmp(Process &a, Process &b)
        {
            if (a.arrivalTime == b.arrivalTime)
                return a.burstTime < b.burstTime;
            return a.arrivalTime < b.arrivalTime;
        }

        void complete(vector<Process> &p)
        {
            int n = p.size();
            int time = 0;
            for (int i = 0; i < n; i++)
            {
                int k = -1;
                int minTime = 1e9;  //setting minimum time to a large value
                for (int j = i; j < n; j++)
                {
                    if (p[j].arrivalTime <= time && p[j].burstTime < minTime)
                    {
                        k = j;
                        minTime = p[j].burstTime;
                    }
                }
                if (k == -1)
                {
                    time = p[i].arrivalTime;
                    i--;
                    continue;
                }

                //calculating completion, response, waiting and turnaround times

                p[k].completionTime = time + p[k].burstTime;
                p[k].turnAroundTime = p[k].completionTime - p[k].arrivalTime;
                p[k].waitTime = p[k].turnAroundTime - p[k].burstTime;
                p[k].ResponseTime = time - p[k].arrivalTime;
                time = p[k].completionTime;
                swap(p[k], p[i]);
            }
        }


        //calculating averages
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


        int main()
        {
            int n;
            cout << "enter the number of processes : ";
            cin >> n;
            cout << "enter arrival time and burst time\n";
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

            complete(p);

            //displaying the output

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
        }

## OUTPUT

    enter the number of processes : 4
    enter arrival time and burst time
    For process 1 : 1 3
    For process 2 : 1 1
    For process 3 : 2 3
    For process 4 : 3 1
        processId    ArrivalTime      burstTime completionTime     TurnAround       WaitTime   ResponseTime
                2              1              1              2              1              0              0
                1              1              3              5              4              1              1
                4              3              1              6              3              2              2
                3              2              3              9              7              4              4

    Average Turn Around Time : 3.75
    Average waiting time : 1.75
    Average response time : 1.75
