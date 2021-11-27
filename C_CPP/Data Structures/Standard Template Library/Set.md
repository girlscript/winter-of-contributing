# Set in C++

### Set in C++ are STL ( Standard Template Library ) Containers.

#### 1. Set is used to store unique elements.
#### 2. All the elements in a set are stored in a sorted manner.
#### 3. If a value is added to the set it cannot be modified, But it is possible to remove and add the modified value of that element. 

### Set is included in ```#include<set>``` header file.


## Some Basic Methods of Set:-

1. insert()
2. begin()
3. end()
4. size()
5. max_size()
6. empty()
7. clear() 
8. find()

### 1. insert() - It is used to insert an element in the set.
### 2. begin() -  It returns an iterator to the first element in the set.
### 3. end() - It returns an iterator to the theoretical element that follows last element in the set.

### Code:-
```
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    // Inserting elements in the set
    s.insert(10);    
    s.insert(40);
    s.insert(26);
    s.insert(34);
    s.insert(44);

    cout<<"\n\nElements in the set are:\n\n";
    //Displaying elements
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
        
    return 0;
}
```

### Output:-
![image](https://user-images.githubusercontent.com/75535031/136424986-b52c7eb5-3fec-4431-9875-a0b78cdaf990.png)

### 4. size() - It returns the number of elements in the set.
### 5. max_size() - It returns the maximum elements that the set can hold.

### Code:-
```
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    // Inserting elements in the set
    s.insert(10);    
    s.insert(40);
    s.insert(26);
    s.insert(34);
    s.insert(44);

    cout<<"\n\nNumber of elements in the set are:"<<s.size();

    cout<<"\n\nMaximum Number of elements that the set can hold:"<<s.max_size();

    return 0;
}
```

### Output:-
![image](https://user-images.githubusercontent.com/75535031/136425542-5022629c-2208-47a8-9562-8fd2042adccd.png)

### 6. empty() - It returns "1" if the set is empty() else "0".
### 7. clear() - It removes all the elements from the set.

### Code:-
```
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    // Inserting elements in the set
    s.insert(10);    
    s.insert(40);
    s.insert(26);
    s.insert(34);
    s.insert(44);

    cout<<"\n\n1. If the set is empty() else 0 :"<<s.empty();

    s.clear(); //Deleting all elements of the set

    cout<<"\n\n1. If the set is empty() else 0 :"<<s.empty();

    return 0;
}
```

### Output:-
![image](https://user-images.githubusercontent.com/75535031/136426314-d10a757c-3200-47d3-9e24-c2b92f29ce89.png)

### 8. find() - It returns an iterator to the element which is searched in the set , If the element is not present in the set then it points to the position after the last element of the set.

### Code:-
```
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    // Inserting elements in the set
    s.insert(10);    
    s.insert(40);
    s.insert(26);
    s.insert(34);
    s.insert(44);

    auto x=s.find(26);  // searches for "26"

    cout<<endl;
    for(auto it=x;it!=s.end();it++)  // Displays all the elements are "26"
        cout<<*it<<" ";

    return 0;
}
```

### Output:-
![image](https://user-images.githubusercontent.com/75535031/136427318-bf012cd9-ff6d-4a26-9d73-1c9f227fb540.png)