# Round Robin Scheduling 

- Round Robin Scheduling : This algorithm schedules the process in an impartial manner by providing a specified time quantum/ time slice to each process. In this type of algorithm process gets interrupted if it does not get completed within time quantum by next process.</br> Hence ,eliminates the process starvation problem.
  
 - FEATURES</br>
 1. Algorithm is cyclic in nature , hence no starvation.
 2. We cannot give priority to any process.
 3. Quantum time decides throughput.

 - ALGORITHM </br>
 1. Choose the process which comes first and execute it for time quantum.
 2. Keep on checking the process request. If it is found when a process is already executing, add the new process to the ready queue.
 3. When time quantum is finished, check for remaining processes in ready queue.If queue is empty, continue the current process. If not, and current process is not completed then add it to the end of the queue.
 4. Keep on taking the processes from queue until it becomes empty.
 5. Repeat steps 2-4 until all the process gets completed and queue becomes empty.

 ![image](https://www.gatevidyalay.com/wp-content/uploads/2018/10/Round-Robin-Scheduling.png)</br>
Image Source : [Gate Vidyalay](https://www.gatevidyalay.com/wp-content/uploads/2018/10/Round-Robin-Scheduling.png)
 - C++ PROGRAM FOR ROUND ROBIN SCHEDULING
 ```cpp
 #include <bits/stdc++.h>

using namespace std;
struct proc {
  int pid ;        //process ID
  int at ;         // arrival time
  int bt ;         //burst time
  int wt ;         //waiting time
  int tat ;        //turnaround time
};
class Scheduler      //class
{
    proc* p;
    int n;
    int *rt;
    int slice;
public :  Scheduler(int n)
    {
        this->n = n;
        p = new proc[n];
        rt = new int[n];
    }
    void feed()
    {
        cout<<"\nEnter PID\tEnter AT\tEnter BT\n";
        for(int i=0;i<n;i++)
        {
          int a,b,c ;
          cin>>a>>b>>c;
          p[i].pid = a;
          p[i].at = b;
          p[i].bt = c;
        }
       cout<<"\nEnter Slice Time\n";
       cin>>this->slice;
    }
    void calcWT()    //calculating waiting time
    {
        int complete=0;
        int l =-1;
        int t=0;
        bool check = false ;
        queue<int>q ;
        int lastschedule =-1;
        while(complete!=n)    //until all the process gets completed
        {
            for(int j=0;j<n;j++)    //checking for the new process
            {
                if(p[j].at>l && p[j].at <= t)
                {
                    check = true ;
                    q.push(j);
                }
            }
            l = t ;
            if(q.size()==0 && lastschedule == -1)  //if queue is empty,schedule current process again
            {
                t++;
                continue;
            }
            if(lastschedule != -1) q.push(lastschedule);
            if(rt[q.front()] > slice)        //updating the remaining time of the current process
            {
                t = t+ slice;
                rt[q.front()] -= slice;
                lastschedule = q.front();
                q.pop();
            }
            else if(rt[q.front()]<=slice)
            {
                t = t+ rt[q.front()];
                rt[q.front()]=0;
                complete++;
                p[q.front()].wt= t -  p[q.front()].at -  p[q.front()].bt ;
                q.pop();
                lastschedule =-1;
            }
        }
    }
    void calcTAT()   //calculating turnaround time
    {
        for(int i=0;i<n;i++)
        {
            p[i].tat = p[i].bt + p[i].wt;
        }
    }
    void printInfo()   //displaying 
    {
        cout<<"\nPID\tAT\tBT\tWT\tTAT\n";
        for(int i=0;i<n;i++)
        {
            cout<<p[i].pid<<"\t"<<p[i].at<<"\t"<<p[i].bt<<"\t"<<p[i].wt<<"\t"<<p[i].tat<<endl;
        }
    }
    void RRTF()
    {
        for(int i=0;i<this->n;i++)
        {
           rt[i]= this->p[i].bt;
        }
        calcWT();
        calcTAT();
        printInfo();
    }
};

int main()
{   int n ;
    cout<<"\nEnter the number of processes\n";
    cin>>n ;
    Scheduler ob(n);  // taken from the user
    ob.feed();       // input arrival time , burst time and time quantum
    ob.RRTF();       // perform round robin scheduling on processes

    return 0;
}
```
- Input
```
Enter the number of processes
4

Enter PID	Enter AT	Enter BT
0 0 5
1 1 4
2 2 2
3 3 1

Enter Slice Time
2
```
- Output
```
PID	AT	BT	WT	TAT
0	0	5	7	12
1	1	4	6	10
2	2	2	2	4
3	3	1	5	6
```