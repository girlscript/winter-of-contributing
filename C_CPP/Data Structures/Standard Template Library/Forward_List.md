# Forward List
Forward Lists is same as the list in STL ( Standard Template Library ) , But it differs in one aspect that in this element only keep the track of next element not of previous but in list the element keep track of both next and previous element .


![Pictorial Representation of Forward List](https://user-images.githubusercontent.com/86917304/139671015-96c3c713-d25d-4d18-aa70-7380a894a9da.png)

## Advantages Over List
1. Less space required for accomodation .
2. Operation like insertion , removal , deletion takes place in constant time complexity .
3. Faster than the list .

## Disadvantages 
1. Backward Traversing is not possible .
2. Individual element can't be accessible directly.

## Applications 
1. Used to do chaining in hashing .
2. Used to represent adajacency list of graph .

```cpp
#include<iostream>
#include<forward_list>
using namespace std;
 
int main()
{
    // Declaring forward list
    forward_list<int> l1;
    
    // Defining iterator to iterate in the list .
    forward_list<int>::iterator itr;
    
    // Assigning values using assign()
    l1.assign({10 , 30 , 50});

    cout<<"The Forward list created is : ";
    // Displaying the forward list
    for(itr=l1.begin();itr!=l1.end();itr++){
        cout<<(*itr)<<" ";
    }
}

```
Output :
```
The Forward list created is : 10 30 50
```
## Functions Used 
1. **assign** : assign function is used when we have to assign the value to list , we can also assign repeated value by this function .
```cpp
// Assigning values to the list using assign() function
	list_1.assign({5, 4, 7});

// Pushing 3 elements with value 40
	list_2.assign(3,4);
```

2. **push_front** : It is used to push the element in the starting of the list .
```cpp
// Pushing the element in front of the list
	list_1.push_front(0);
```

3. **pop_front** : It's work is to delete the element at the beginning of the list or we can say deletion of the first element.
```cpp
// front element deleted .
	list_1.pop_front();
```

4. **emplace_front** : It also Pushing element in front of list but in efficient way , It is efficient because no copying of element take place and element is created directly before the first element of the forward list .
```cpp
// It also Pushing element in front of list but in efficient way . 
	list_1.emplace_front(-1);
```

5. **erase_after** : erase after is used to delete elements from a specific position in the forward list .
```cpp
// Deleting element after the specific position here itr1 is another iterator .
	itr1 = list_2.erase_after(itr1);
```

6. **insert_after** : This function is used to insert elements at any position in forward list.
```c++
// Pushing element after any specific position 
	itr1 =  list_2.insert_after(list_2.begin(), {3, 2, 1});
```

7. **emplace_after** : It is also used to insert element after any position but it do this task in efficient way than insert_after function .
```cpp
// Pushing element after any specific position but in efficient way.
	itr1 = list_2.emplace_after(itr1,50);
```

8. **remove** : This function removes the all occurences of element from the forward list which given in argument .
```cpp
// It removes all occurences of 4 in the list
	list_2.remove(4);
```

9. **remove_if** : This function removes all the element which are not following the condition which are specified in argument .
```cpp
// Removing all occurences which are less than 30
	list_2.remove_if([](int a){ return a<30;});
```

10. **splice_after** : splice_after function transfers all elements from one forward list to other forward list .
```cpp
// It is shifting all elements from list2 to list1 .
	list_1.splice_after(list_2.begin(),list_1);
```
