# **Celebrity Problem**

## **Method 1: Brute Force**

In this approach we will check if there exists a celebrity who knows no one but is known by every other person.

<br>

### **Algorithm for above approach:**

  -  Initialize an integer variable `CELEBRITY` = -1.
  -  Run a loop where `i` ranges from `0` to `N – 1`, and check whether the person  `i` is a celebrity or not. This can be done as follow :  
     - Initialise two boolean variables, `KNOWANY` and `KNOWNTOALL`.  
     - Run a loop where `j` ranges from `0` to `N – 1`. If `knows(i, j)` returns false for all `j`,  then set `KNOWANY`= false  
     - Again run a loop where `j` ranges from `0` to `N – 1` and if  `knows(j, i)` return true for all `j` except when `j` = `i`, then set  `KNOWNTOALL`= true  
     - If `KNOWAN` is `false` and `KNOWNTOALL` is `true`, then assign `CELEBRITY`= `i` and break the loop.  
  -  Return `CELEBRITY`.
  - If `CELEBRITY` = -1 then no celebrity exixts else there exists a celebrity with `id = i`;  

<br>

### **Implementation of the above approach :** 

```cpp
    #include <bits/stdc++.h>
    using namespace std;

    // Max no of persons in the party
    #define N 4

    bool person[N][N] = {{0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}};  

    bool knows(int A, int B)
    {
        return person[A][B];
    }

    int findCelebrity(int n)
    {

        int celebrity = -1;

        // Check one by one whether the person is a celebrity or not.
        for (int i = 0; i < n; i++)
        {
            bool knowAny = false, knownToAll = true;

            // Check whether person with id 'i' knows any other person.
            for (int j = 0; j < n; j++)
            {
                if (knows(i, j))
                {
                    knowAny = true;
                    break;
                }
            }

            // Check whether person with id 'i' is known to all the other person.
            for (int j = 0; j < n; j++)
            {
                if (i != j and !knows(j, i))
                {
                    knownToAll = false;
                    break;
                }
            }

            if (!knowAny && knownToAll)
            {
                celebrity = i;
                break;
            }
        }

        return celebrity;
    }

    int main()
    {
        int n = 4;
        int id = findCelebrity(n);
        if (id == -1)
            cout << "No celebrity";
        else
            cout << "Celebrity ID " << id ;
        return 0;
    }
```    

<br>

## **Time Complexity**  

>O(N*N), where `N` is the number of people at the party.  

The outer loop will run `N` times and two inner loops both will run `N` times but note they are not nested so overall complexity will be O(N*(N+N))= O(2N*N) = O(N*N)

<br>

## **Space Complexity**  

>O(1). No extra space is used here.

<br>

## **Method 2: Using Graph**

This problem can be modelled as a graph problem. Consider a directed graph having `N` nodes numbered from 0 to `N` – 1.  If the helper function `knows(i, j)` returns true, then it means that there is a directed edge from node `i` to node `j`.  We can observe that if the celebrity is present, it is represented by a global sink i.e node that has indegree n-1 and outdegree 0.  

<br>

### **Algorithm for above approach:**

-  Make two integer arrays, `INDEGREE` and  `OUTDEGREE` of size `N`. And fill both of them by 0. These arrays will represent the indegree and outdegree of each node.
- Run a nested loop where the outer loop `i` ranges from 0 to `N` – 1 and the inner loop `j` ranges from 0 to `N` – 1,  and for each pair (i, j) if `knows(i, j)` return true, then increment `OUTDEGREE[i]` by 1 and `INDEGREE[j]` by 1.
- Initialize an integer variable `CELEBRITY` = -1.
- Run a loop where `i` ranges from 0 to `N` – 1, and find `i` for which `INDEGREE[i]` is `N` – 1 and `OUTDEGREE[i]` is 0 if such `i` exist then assign `CELEBRITY`= `i`, otherwise keep the value of `CELEBRITY` as -1.
- Return `CELEBRITY`.

<br>

### **Implementation of the above approach :**    

```cpp
    #include <bits/stdc++.h>
    using namespace std;

    // Max no of persons in the party
    #define N 4

    bool MATRIX[N][N] = {{0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}};

    // Returns True if A knows B else return False
    bool knows(int A, int B)
    {
        return MATRIX[A][B];
    }

    int findCelebrity(int n)
    {

        // Calculating indegree and outdegree of each nodes.
        vector<int> indegree(n), outdegree(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (knows(i, j))
                {
                    indegree[j]++;
                    outdegree[i]++;
                }
            }
        }

        int celebrity = -1;

        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == n - 1 && outdegree[i] == 0)
            {
                celebrity = i;
                break;
            }
        }

        return celebrity;
    }

    int main()
    {
        int n = 4;
        int id = findCelebrity(n);
        if (id == -1)
            cout << "No celebrity";
        else
            cout << "Celebrity ID " << id ;
        return 0;
    }
``` 

<br>

## **Time Complexity**  

>O(N*N), where `N` is the number of people at the party.  
Reason: Because the nested loop will take the time of the order of N*N. 

<br>

## **Space Complexity**  

>O(N), where `N` is the number of people at the party.  
Reason: The size of the array `INDEGREE` and `OUTDEGREE` will be of the order of `N`.  

<br>

## **Method 3: Using Recursion** 

Is it possible to find the solution to n if the ‘potential celebrity’ of n-1 persons is known?   
After eliminating n-1 people, a potential celebrity is the only one remaining.
The following approach is used to eliminate n-1 people:  
A cannot be a celebrity if A knows B, although B may be.  
Else B cannot be a celebrity if B knows A. However, A might be the celebrity.  
The intuition described above employs Recursion to find a potential celebrity among n people, recursively calling n-1 people until the base case of 0 people is reached.  
When there are no people, the value -1 is returned, indicating that there are no potential celebrities.   
The ith person and (i-1)th person are compared in the ith stage of recursion to see if one of them knows the other. The potential celebrity is then returned to the (i+1)th stage using the logic outlined above.  
When the recursive function has finished its loop, it will return an id. We check to see if this id is unknown to anyone else, but everyone knows it. If this is correct, this ID will be the celebrity. 

<br>

### **Algorithm for above approach:**

- Make a recursive function that takes an integer n as input.
- Check the base case; if n is 0, return -1.
- Invoke the recursive function to extract the ID of the potential celebrity from the first n-1 elements.
- If the id is -1, then n is the potential celebrity and the value is returned.
- Return n-1 if the potential celebrity of the first n-1 elements knows n-1 (0 based indexing)
- If the celebrity of the first n-1 elements does not know n-1, return the celebrity of the n-1 elements’ id (0 based indexing)
- Otherwise, return -1.
- Create a function and determine whether the id returned by the function is surely that of the celebrity.  

<br>

### **Implementation of the above approach :** 

```cpp
    #include <bits/stdc++.h>
    using namespace std;

    // Max no of persons in the party
    #define N 4

    bool MATRIX[N][N] = {{0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}};

    bool knows(int A, int B)
    {
        return MATRIX[A][B];
    }

    // Returns -1 if a 'potential celebrity'
    // is not present. If present,
    // returns id (value from 0 to n-1).
    int findCelebrity(int n)
    {
        // base case - when n reaches 0 , returns -1
        // since n represents the number of people,
        // 0 people implies no celebrity(= -1)
        if (n == 0)
            return -1;

        // find the celebrity with n-1
        // persons
        int id = findCelebrity(n - 1);

        // if there are no celebrities
        if (id == -1)
            return n - 1;

        // if the id knows the nth person
        // then the id cannot be a celebrity, but nth person
        // could be one
        else if (knows(id, n - 1))
        {
            return n - 1;
        }
        // if the nth person knows the id,
        // then the nth person cannot be a celebrity and the id
        // could be one
        else if (knows(n - 1, id))
        {
            return id;
        }

        // if there is no celebrity
        return -1;
    }

    // Returns -1 if celebrity
    // is not present. If present,
    // returns id (value from 0 to n-1).
    // a wrapper over findCelebrity
    int Celebrity(int n)
    {
        // find the celebrity
        int id = findCelebrity(n);

        // check if the celebrity found
        // is really the celebrity
        if (id == -1)
            return id;
        else
        {
            int c1 = 0, c2 = 0;

            // check the id is really the
            // celebrity
            for (int i = 0; i < n; i++)
                if (i != id)
                {
                    c1 += knows(id, i);
                    c2 += knows(i, id);
                }

            // if the person is known to
            // everyone.
            if (c1 == 0 && c2 == n - 1)
                return id;

            return -1;
        }
    }

    int main()
    {
        int n = 4;
        int id = Celebrity(n);
        if (id == -1)
            cout << "No celebrity";
        else
            cout << "Celebrity ID " << id;
        return 0;
    }
```  

<br>

## **Time Complexity :**

>O(n).The recursive function is called n times, so the time complexity is O(n).

<br>

## **Space Complexity :**

>O(1). As no extra space is required.  

<br>

## **Method 4: Using Stack**  

If for any pair (i, j)  such that `i`!= `j`, if  `knows(i, j)` returns true, then it implies that the person having id `i` cannot be a celebrity as it knows the person having id `j`. Similarly, if `knows(i, j)` returns false, then it implies that the person having id `j` cannot be a celebrity as it is not known by a person having id `i`. We can use this observation to solve this problem.

<br>

### **Algorithm for above approach:**  

- Create a stack and push all ids in it.
- Run a loop while there are more than one element in the stack and in each iteration do the following-:
    - Pop two elements from the stack. Let these elements be ‘id1’ and ‘id2’.
    - If the person with ‘id1’ knows the person with ‘id2,’ i.e. ‘knows(id1, id2)’ return true, then the person with ‘id1’ cannot be a celebrity, so push ‘id2’ in the stack.
    - Otherwise, if the person with ‘id1’ doesn’t know the person with ‘id2,’ i.e. knows(id1, id2) return false, then the person with ‘id2’ cannot be a celebrity, so push ‘id1’ in the stack.
- Only one id remains in the stack; you need to check whether the person having this id is a celebrity or not, this can be done by running two loops. One checks whether this person is known to everyone or not, and another loop will check whether this person knows anyone or not.
- If this person is a celebrity, return his id; otherwise, return -1.

<br>

### **Implementation of the above approach :** 

```cpp
    #include <bits/stdc++.h>
    using namespace std;

    // Max no of persons in the party
    #define N 4

    bool MATRIX[N][N] = {{0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}};

    bool knows(int A, int B)
    {
        return MATRIX[A][B];
    }

    int findCelebrity(int n)
    {

        // Create a stack and push all ids in it.
        stack<int> ids;
        for (int i = 0; i < n; i++)
        {
            ids.push(i);
        }

        // Finding celebrity.
        while (ids.size() > 1)
        {
            int id1 = ids.top();
            ids.pop();
            int id2 = ids.top();
            ids.pop();

            if (knows(id1, id2))
            {
                // Because person with id1 can not be celebrity.
                ids.push(id2);
            }
            else
            {
                // Because person with id2 can not be celebrity.
                ids.push(id1);
            }
        }

        int celebrity = ids.top();
        bool knowAny = false, knownToAll = true;

        // Verify whether the celebrity knows any other person.
        for (int i = 0; i < n; i++)
        {
            if (knows(celebrity, i))
            {
                knowAny = true;
                break;
            }
        }

        // Verify whether the celebrity is known to all the other person.
        for (int i = 0; i < n; i++)
        {
            if (i != celebrity and !knows(i, celebrity))
            {
                knownToAll = false;
                break;
            }
        }

        if (knowAny or !knownToAll)
        {
            // If verificatin failed, then it means there is no celebrity at the party.
            celebrity = -1;
        }

        return celebrity;
    }

    int main()
    {
        int n = 4;
        int id = findCelebrity(n);
        if (id == -1)
            cout << "No celebrity";
        else
            cout << "Celebrity ID " << id;
        return 0;
    }
```  

<br>

## **Time Complexity**

>O(N), where ‘N’ is the number of people at the party.
The number of push and pop operations performed on the stack will be of order ‘N’.

<br>

## **Space Complexity**

>O(N), where ‘N’ is the number of people at the party. The size of the stack will be of the order of ‘N’.

<br>

## **Method 5: Using Two Pointers**

If for any pair (‘i’, ‘j’)  such that `i` != `j`, If `knows(i, j)` returns true, then it implies that the person having id `i` cannot be a celebrity as it knows the person having id `j`. Similarly, if `knows(i, j)` returns false, then it implies that the person having id `j` cannot be a celebrity as it is not known by a person having id.  

<br>

### **Algorithm for above approach:** 

- Initialize two integer variables ‘P’:= 0 and ‘Q’:= ‘N’ – 1. ‘P’  and ‘Q’ will be two pointers pointing at the start and end of search space respectively.
- Run a while loop till ‘P’ < ‘Q’, and in each iteration, do the following.
    - If ‘knows(P, Q)’ returns true, then increment ‘P’ by 1.
    - If ‘knows(P, Q)’ returns false, then decrement ‘Q’ by 1.
- Check whether the person having id ‘P’ is a celebrity or not, this can be done by running two loops. One checks whether this person is known to everyone or not, and another loop will check whether this person knows anyone or not.
- If a person with id ‘P’ is a celebrity, return ‘P’. Otherwise, return -1.  

<br>

### **Implementation of the above approach :**  

```cpp
    #include <bits/stdc++.h>
    using namespace std;

    // Max no of persons in the party
    #define N 4

    bool MATRIX[N][N] = {{0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}};

    bool knows(int A, int B)
    {
        return MATRIX[A][B];
    }

    int findCelebrity(int n)
    {

        // Two pointers pointing at start and end of search space.
        int p = 0, q = n - 1;

        // Finding celebrity.
        while (p < q)
        {
            if (knows(p, q))
            {
                // This means p cannot be celebrity.
                p++;
            }
            else
            {
                // This means q cannot be celebrity.
                q--;
            }
        }

        int celebrity = p;
        bool knowAny = false, knownToAll = true;

        // Verify whether the celebrity knows any other person.
        for (int i = 0; i < n; i++)
        {
            if (knows(celebrity, i))
            {
                knowAny = true;
                break;
            }
        }

        // Verify whether the celebrity is known to all the other person.
        for (int i = 0; i < n; i++)
        {
            if (i != celebrity and !knows(i, celebrity))
            {
                knownToAll = false;
                break;
            }
        }

        if (knowAny or !knownToAll)
        {
            // If verificatin failed, then it means there is no celebrity at the party.
            celebrity = -1;
        }

        return celebrity;
    }

    int main()
    {
        int n = 4;
        int id = findCelebrity(n);
        if (id == -1)
            cout << "No celebrity";
        else
            cout << "Celebrity ID " << id;
        return 0;
    }
```  

<br>

## **Time Complexity**

>O(N), where ‘N’ is the number of people at the party.
The number of queries from the matrix ‘M’ will be of order ‘N’.  

<br>

## **Space Complexity**

>O(1). No extra space is used here.  

<br>
