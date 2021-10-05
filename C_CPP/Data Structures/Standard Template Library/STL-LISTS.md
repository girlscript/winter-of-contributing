# STL LIST
<p> List is a sequence container that allows insertion and deletion operations in constant time from any place in the sequence and can iterate in both directions forward and backward but traversing is bit slower. </p>

<p> Declaration of list in stl</p>

```
list < int > li = {100,20,30,30,50};
```
## Iterator of list :
<p> Iterator is like the pointer which is to traverse the list and also used to insert or delete any element from any position.</p>

```
list <int> :: iterator it;
```
<p> Code for list important functions </p>

```c++
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

//function for printing the elements in a list
void displayList(list <int> li)
{
	list <int> :: iterator it;
	for(it = li.begin(); it != li.end(); it++) {
	cout << "\t" << *it;
     }
	cout << '\n';
}

int main()
{

	list <int> l1, l2;


	for (int i = 0; i < 10; ++i)
	{
		l1.push_back(i);
		l2.push_front(i * 3);
	}
	cout << "\n List 1 (l1) is : ";
	displayList(l1);

	cout << "\nList 2 (l2) is : ";
	displayList(l2);

	cout << "\n l1.front() : " << l1.front();
	cout << "\n l1.back() : " << l1.back();

	cout << "\n l1.pop_front() : ";
	l1.pop_front();
	displayList(l1);

	cout << "\n l2.pop_back() : ";
	l2.pop_back();
	displayList(l2);

	cout << "\n l1.reverse() : ";
	l1.reverse();
	displayList(l1);

	cout << "\n l2.sort(): ";
	l2.sort();
	displayList(l2);

	return 0;

}
```
Output
```
 List 1 (l1) is : 	0	1	2	3	4	5	6	7	8	9

 List 2 (l2) is : 	27	24	21	18	15	12	9	6	3	0

 l1.front() : 0
 l1.back() : 9
 l1.pop_front() : 	1	2	3	4	5	6	7	8	9

 l2.pop_back() : 	27	24	21	18	15	12	9	6	3

 l1.reverse() : 	9	8	7	6	5	4	3	2	1

 l2.sort(): 	3	6	9	12	15	18	21	24	27

```

## Functions Used With List

1.  front ( ) : It actually returns the value of first element.
```
int ele = li.front ( );

// ele have value 100
```
2. back ( ) : It actually returns the value of last element.
```
int ele1 = li.back ( );

// ele will have value 50
```

3. push_front ( ) : It's work is to push elements from the begining of the list.
```
li.push_front(30) ;

// now list will be 30 100 30 30 50
```

4. push_back ( ) : It's work is to push elements from the ending of the list.
```
li.push_back(40);

// now list will be 30 100 30 30 50 40
```

5. pop_front ( ) : It is used when we have to pop the elements from the begining of list.
```
li.pop_front();

// 30 will be popped out
```

6. pop_back ( ) :  It is used when we have to pop the elements from the ending of list.
```
li.pop_back() ;

// 40 will be popped out
```

7. list::begin ( ) : This function returns the iterator pointing to the first element of list.
```
li.begin();

// iterator pointing to the first element 100
```

8. list::end ( ) : This function returns the iterator pointing to the last element of list.
```
li.end();

// iterator pointing to the last element 50
```

9. list::rbegin ( ) : This function returns the reverse iterator pointing to the end element of list.
```
li.rbegin();

// iterator pointing to the last element 50
```

10. list::rend ( ) : This function returns the reverse iterator pointing to the position before the first element of list.
```
li.rend();

// iterator pointing to the first element 100
```

11. empty ( ) : It returns whether the list is empty or not , if empty ( return 1 ) otherwise return ( 0 ).
```
li.empty();

// returns 0
```

12. insert ( ) : It actually inserts new elements in the list before the element which is at a specified position.
```
list <int>:: iterator it; // iterator initialization
it=li.begin();
li.insert(it,2,7); 

// 'it' reprents position , '2' represents how many the number will be present , ' 7 ' is the number   
```

13. erase ( ) : It is used we have to remove  single element or a range of elements from the list.
```
li.erase(20);

// 20 will be erased from the list
```

14. assign ( ) : It typically assigns new elements into the list by actually replacing the current elements and it also resizes the list according to the elements.
```
li.assign(5,100); 

// In this number 100 assigned 5 times in the list.
```

15. remove ( ) : It removes all the occurence of element which is specified by user from the list.
```
li.remove(100);

// 100 will be removed
```

16. remove_if ( ) : It is used to remove all the occurences from the list that are satisfying condition given as parameter to the function.
```
bool odd(const int& value) {
    return (value%2)!=0
}
li.remove_if(odd);

// no element will be popped because no element is odd
```

17. reverse ( ) : basically reverses the list.
```
li.reverse() ;

// now list is 50,30,30,20,100
```

18. size ( ) : returns the size of the list.
```
li.size() ;

// returns 5 as size of list
```

19. sort ( ) : Sorts the list elements.
```
li.sort() ;

// now list is 20 30 30 50 100
```

20. list resize ( ) : It is Used when we have to resize a list container.
```
li.resize(2); 

// now the size of list is 2.
```

21. max_size ( ) : returns the max number of elements that can hold by the list container.
```
li.max_size() ;

// returns max size
```

22. unique ( ) : It is used to remove all duplicate consecutive elements from the list.
```
li.unique () ;

// now list is 50 30 20 100
```

23. clear ( ) : This function is used to remove all the elements from list container and making list size 0.
```
li.clear () ;

// now list is all clear with no elements
```

24. swap ( ) :  It is used when we have to swap the contents of one list with another list of same type and size.
```
list<int>li_2 = {10,20,30} ;

li.swap(li_2);

// li will have 10 20 30
// li_2 will have 50 30 30 20 100
```

25. splice ( ) : It is Used to transfer elements from one list to another.
```
list <int> li2 ;
li.splice(li.begin(), li2);
```

26. merge ( ) : It basically merges two lists.
```
list<int>li_2 = {10,20,30} ;
li.merge(li_2);

// now list is li is 50 30 30 20 100 10 20 30
```

27. emplace ( ) : It typically extends list by inserting the new element at a given position given by user.
```
list<int>:: iterator it;
it=li.end();
li.emplace(it, 10);

// now list is 50 30 30 20 100 10
```

28. emplace_front ( ) and emplace_back ( ) : emplace_front ( ) function is used when we have to  insert a new element into the list at begining . emplace_back ( ) function is used to insert a new element into the list container at the ending.

```
li.emplace_front(1);
li.emplace_back(2);

// now list is 1 50 30 30 20 100 2
```

29. list::operator = : This operator is used when we have to assign new contents to the container by replacing the existing elements. 
```
list<int> li_2;
li_2 = li;

// now all elements from li are copied to li_2
// now li_2 elements are 50 30 30 20 100
```
