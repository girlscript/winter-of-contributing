# Quadratic probing using hash tables

- A hash table is a data structure used to store a number of keywords. 
- A hash function is used by a hash table to calculate the index in which an item will be added or searched. 
- Quadratic probing is a way to resolve conflicts in Open Addressed Hash tables. 
- It works by taking the first hash index and adding consecutive arbitrary quadratic polynomial values until an open space is found. In Quadratic Probing we find a new Position using a formula
New Position = Old Position + (i ^ 2) Where, i is a natural number. So in the example above we get a position 1 in 14 but 1 has already been taken which is why we count a new position, New Position = 1 + (1 ^ 2) = 2, Now we check whether the position has been taken or not, if position 2 is empty and keep 14 in second place, otherwise we calculate the new position by taking i as 2, New Position = 1 + (2 ^ 2) = 5, We keep repeating this until we get a new position. 
- Quadratic testing is the same as queuing with a line difference only the interval used for testing. As the name suggests, this method uses an indirect or quadratic distance to take up spaces in the event of a collision instead of a line distance. In quadratic investigations, the interval between spaces is calculated by adding the wrong polynomial value to the already accelerated index. This process reduces the primary integration to a significant degree but does not improve on the second integration.

#### Code

```cpp
/*
 * implementing quadratic probing using hash tables
 */
#include <iostream>
#include <cstdlib>
#define MIN_TABLE_SIZE 10
using namespace std;
/*
 *node type declaration
 */
enum EntryType {Legitimate, Empty, Deleted};
/*
 *node declaration
 */
struct HashNode
{
    int element;
    enum EntryType info;
};
struct HashTable
{
    int size;
    HashNode *table;
};
/*
 * confirms if n is prime or not
 */
bool isPrime (int n)
{
    if (n == 2 || n == 3)
        return true;
    if (n == 1 || n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}
/*
 * find immediate prime size of the table
 */
int nextPrime(int n)
{
    if (n <= 0)
        n=3;
    if (n % 2 == 0)
        n++;
    for (; !isPrime( n ); n += 2);
    return n;
}
/*
 * generation of hash function
 */
int HashFunc(int key, int size)
{
    return key % size;
}
/*
 * initialising function using table
 */
HashTable *initializeTable(int size)
{
    HashTable *htable;
    if (size < MIN_TABLE_SIZE)
    {
        cout<<"Table Size Too Small"<<endl;
        return NULL;
    }
    htable = new HashTable;
    if (htable == NULL)
    {
        cout<<"Out of Space"<<endl;
        return NULL;
    }
    htable->size = nextPrime(size);
    htable->table = new HashNode [htable->size];
    if (htable->table == NULL)
    {
        cout<<"Table Size Too Small"<<endl;
        return NULL;
    }
    for (int i = 0; i < htable->size; i++)
    {
        htable->table[i].info = Empty;
        htable->table[i].element=NULL;
    }
    return htable;
}
/*
 * finding element at key
 */
int Find(int key, HashTable *htable)
{
    int pos = HashFunc(key, htable->size);
    int collisions = 0;
    while (htable->table[pos].info != Empty &&
           htable->table[pos].element != key)
    {
        pos = pos + 2 * ++collisions -1;
        if (pos >= htable->size)
            pos = pos - htable->size;
    }
    return pos;
}
/*
 * inserting element in a key
 */
void Insert(int key, HashTable *htable)
{
    int pos = Find(key, htable);
    if (htable->table[pos].info != Legitimate)
    {
        htable->table[pos].info = Legitimate;
        htable->table[pos].element = key;
    }
}
/*
 * rehashing table
 */
HashTable *Rehash(HashTable *htable)
{
    int size = htable->size;
    HashNode *table = htable->table;
    htable = initializeTable(2 * size);
    for (int i = 0; i < size; i++)
    {
        if (table[i].info == Legitimate)
            Insert(table[i].element, htable);
    }
    free(table);
    return htable;
}
/*
 * retrieving hash table
 */
void Retrieve(HashTable *htable)
{
    for (int i = 0; i < htable->size; i++)
    {
        int value = htable->table[i].element;
        if (!value)
            cout<<"Position: "<<i + 1<<" Element: Null"<<endl;
        else
            cout<<"Position: "<<i + 1<<" Element: "<<value<<endl;
    }
 
}
int main()
{
    int value, size, pos, i = 1;
    int choice;
    HashTable *htable;
    while(1)
    {
        cout<<"1.size initialisation of the table"<<endl;
        cout<<"2.Inserting element into the table"<<endl;
        cout<<"3.Display Hash Table"<<endl;
        cout<<"4.Rehash Table"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter size of Hash Table: ";
            cin>>size;
            htable = initializeTable(size);
            cout<<"Size of Hash Table: "<<nextPrime(size);
            break;
        case 2:
            if (i > htable->size)
            {
                cout<<"Table is Full, Rehash the table"<<endl;
                continue;
            }
            cout<<"Enter the element to be inserted: ";
            cin>>value;
            Insert(value, htable);
            i++;
            break;
        case 3:
            Retrieve(htable);
            break;
        case 4:
            htable = Rehash(htable);
            break;
        case 5:
            exit(1);
        default:
           cout<<"\nEnter correct option\n";
       }
    }
    return 0;
}
```

## Happy Coding !!