# Super Ascii String Checker - CODEVITA

**Approach :**

**Step 1:**
Initialize an array to store the frequency count of each character of the string.

**Step 2:**
Traverse the string S and increment the frequency count of each character by 1.

**Step 3:**
Again, traverse the string S and check if any character has non-zero frequency and is not equal to its ASCII value then print “No”.

**Step 4:**
After the above steps if there doesn’t any such character in the above step then print “Yes”.

```
//Super Ascii String Checker - CODEVITA
//Priyanka Kothari

#include <stdio.h>
#include <string.h>

int main()
{
    int t,k=0;
    scanf("%d",&t);
    char arr[100];
    int ans[100]={0};
    while(t--){
        int index[100]={0};
        int flag=1;
        scanf("%s",arr);
        
        for(int i=0;i<strlen(arr);i++){
            int idx=arr[i]-'a'+1;
            index[idx-1]++;
        }
        
        for(int i=0;i<strlen(arr);i++){
            int reidx=arr[i]-'a'+1;
            if(index[reidx-1]!=reidx){
                flag=0;
                break;
            }
        }
        ans[k]=flag;
        k++;
    }
        
    for(int i=0;i<k;i++){
        if(ans[i]==0){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    return 0;
}

```

**Input:**

2

abba

abbccc

**Output:**

No 

Yes

**Time-Complexity:**

For T number of test cases while loop will run T times and in the while loop
loops are running for the size of the string which can be maximum upto N. So, the time complexity will be O(T*N).

**Space-Complexity:**

For storing the answer we use a answer array. So space complexity will be O(N).