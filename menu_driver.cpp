////////////////////////////////////////////////////////////////
////////////////////////// Suvraneel Bhuin
//////////////////////////////// Class Roll - 19
////////////////////////// T91/CSE/194032
////////////////////////////////////////////////////////////////
#include "algorithm_defn.cpp"


////////////////////////////////////////////////////////////////
//////////////////////////////// Main Driver Code
////////////////////////////////////////////////////////////////
int main(void){
    int f, N, pgNum, algo, memAccessTime = -1, pgFaultTime = -1;

    ///////////////////////////// Input ---> Frame Size & Page References
    cout << "Enter no of frames:\t";
    cin >> f;
    Frame *frm = new Frame(f);
    cout << "Enter no. of page references:\t";
    cin >> N;
    int page_ref[N];
    cout << "Enter page references respectively:\t";
    for(int i=0; i < N; i++)
        cin >> page_ref[i];

    ///////////////////////////// Main Menu UI
    cout << "Page Replacement Algorithms:\n1.\tFirst In First Out\n2.\tLeast Recently Used\n3.\tOptimal\n4.\tFind Effective Access Time for all 3 algorithms\n\nEnter Choice :\t";  
    cin >> algo;

    ///////////////////////////// Switch for Main Menu
    switch (algo){
        case 1:
            calc_EAT(N, fifo(frm, f, page_ref, N), memAccessTime, pgFaultTime, f, false);
            break;

        case 2:
            calc_EAT(N, lru(frm, f, page_ref, N), memAccessTime, pgFaultTime, f, false);
            break;

        case 3:
            calc_EAT(N, optimal(frm, f, page_ref, N), memAccessTime, pgFaultTime, f, false);
            break;

        case 4:
            cout << "Enter Memory Access Time:\t";
            cin >> memAccessTime;
            cout << "Enter Page Fault Time:\t";
            cin >> pgFaultTime;
            calc_EAT(N, fifo(frm, f, page_ref, N), memAccessTime, pgFaultTime, f, true);
            frm->resetFrame();
            calc_EAT(N, lru(frm, f, page_ref, N), memAccessTime, pgFaultTime, f, true);
            frm->resetFrame();
            calc_EAT(N, optimal(frm, f, page_ref, N), memAccessTime, pgFaultTime, f, true);
            break;

        default:
            cout << "Invalid choice entered.";
            break;
    }
    return 0;
}