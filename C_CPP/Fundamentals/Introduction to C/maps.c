#include<stdio.h>
#include<string.h>
#define Max 101

//struct defining the map
typedef struct Map{
    long long int tel;
    char name[7];
}Map;

//hash table 
unsigned hashtable[Max];

//hash function
unsigned hash(long long k)
{
    int result;
    result = (k%Max)+1;

    return result;
}

//inserts values into the map
void InsertValue(Map *a, int entryNo)
{
    int key;

    printf("Enter phone no %d : ",entryNo+1);
    scanf("%lld",&a[entryNo].tel);
    printf("Enter name %d (Max 7 char): ",entryNo+1);
    scanf("%s",&a[entryNo].name);
    key = hash(a[entryNo].tel);
    
    if(hashtable[key]==-1)
        hashtable[key] = entryNo;
    
    else if(hashtable[key]!=-1)
        hashtable[key+1] = entryNo;
}

//function for searching a telNo
void lookUp(Map *a, long long telNo)
{
    if(hashtable[hash(telNo)]!=-1)
    {
        printf("Phone no : %lld\n",a[hashtable[hash(telNo)]].tel);
        printf("Name : "); 
        puts(a[hashtable[hash(telNo)]].name);
    }
    
    else
        printf("\nEntry not found.\n");
    
}

int main()
{
    int n;
    long long f;
    printf("Enter no. of entries ( < 101) : ");//less than max size else the hashtable overflows
    scanf("%d",&n);

    Map map[n];

    for(int i=0;i<Max;i++) //initialising hashtable
        hashtable[i] = -1;

    for(int i=0;i<n;i++)
        InsertValue(map,i); //entering values into map

    int choice = 0;

    do //looping for continuous search
    {
        printf("\nEnter phone no to search : ");
        scanf("%lld",&f);

        lookUp(map,f);

        printf("\nContinue ? (press 1)\tExit ? (press 0) : ");
        scanf("%d",&choice);

    }while(choice!=0);

    return 0;
}