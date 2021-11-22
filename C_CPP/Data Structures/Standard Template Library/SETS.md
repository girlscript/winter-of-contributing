#  SETS , UNORDERED_SETS AND MULTISETS

  **SETS**<br/>
  Sets are a type of containers in C++ where all the elements present are unique 
     or you could say it inserts only unique elements<br/>
    All the elements are present in a sorted manner.(by default ascending order) 
   
   *Inbuit functions in Sets*
   <br/>
    1.insert(x) - used to insert a new element   /// **TC: O(log(n))** <br/>
    2. begin()- Used to get the first element in set /// **TC: O(1)**<br/>
    3. end()- used to get the end of the set /// **TC: O(1)**<br/>
    4. size()- used to get the size of set /// **TC: O(1)**<br/>
    5. empty() - used to tell whether set is empty or not /// **TC: O(1)**<br/>
    6. erase(x)- used to delete the element x if it is present in the set /// **TC: O(log(n))**<br/>
    7. lower_bound(x) - used to get the element that is equal to x or is greater than x /// **TC: O(log(n))**<br/>
    8. upper_bound(x)- used to get the element that is greater than x /// **TC: O(log(n))**<br/>
    '''
      
    
    
    
    
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    set<int>s;    // set of integers
    s.insert(1);   // current elements: 1
    s.insert(2) ;  // current elements: 1 2
    s.insert(3) ;  // current elements: 1 2 3
    s.insert(1) ;  // current elements: 1 2 3  
    // 1 cannot be inserted as it is not unique among all the numbers present in set s
    auto it=s.begin(); // returns iterator to the first element
    cout<<*(it)<<"\n";  // prints 1 
    auto it1=s.end();  // returns iterator to the end of the last element in set
    cout<<(*(--it));   // prints 3 last element
    cout<<s.size();     // prints 3 size of the set
    cout<<s.empty();    // prints 0 i.e. set is not empty
    s.erase(1);        // delete 1 from the set
    s.insert(4);
    s.insert(5);
                         // Current elements: 2 3 4 5
    cout<<*(s.lower_bound(3));// answer is 3
    cout<<*(s.lower_bound(1));// answer is 2
    cout<<*(s.upper_bound(1));// answer is 2
    cout<<*(s.upper_bound(3));// answer is 4
      
  
    
    
    
    return 0;
    }
 
   
   **UNORDERED_SETS**<br/>
     It stores unique elements but uses hashing technique <br/>
     Due to which here all the functions take o(1) time but due to hashing collisions it may take linear O(N) time<br/>
     Elements are present in any random manner. 
   
   *Inbuit functions in unordered_Sets*
   <br/>
    1.insert(x) - used to insert a new element   /// **TC: O(1)**  <br/>
    2. size()- used to get the size of unorderd set  /// **TC: O(1)**<br/>
    3. empty() - used to tell whether unordered set is empty or not /// **TC: O(1)**<br/>
    4. erase(x)- used to delete the element x if it is present in the set /// **TC: O(1)**<br/>
    5.find(x) -used to find an element in unordered_set /// **TC: O(1)**<br/>
      
    
    
    
    '''
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    unordered_set<int>s;    // set of integers
    s.insert(1);   // current elements: 1
    s.insert(2) ;  // current elements: 1 2
    s.insert(3) ;  // current elements: 2 1 3
    s.insert(1) ;  // current elements: 2 1 3  
    // 1 cannot be inserted as it is not unique among all the numbers present in set s
    cout<<s.size();     // prints 3 size of the set
    cout<<s.empty();    // prints 0 i.e. set is not empty
    s.erase(1);        // delete 1 from the set
    auto it=s.find(3);   // returns an iterator
    if(it!=s.end())
    cout<<"Found";         // prints found 
    else
    cout<<"Not Found";
    
    
    
     return 0;
    }
 
   
   **MULTISETS**<br/>
     It is a  type of associative container which is same as set but unlike set it all includes multiple occurence of a element<br/>
     Elements are present in any random manner. 
   
   *Inbuit functions in multiset*
   <br/>
    1. insert(x) - used to insert a new element   /// **TC: O(log(n))** <br/>
    2. begin()- Used to get the first element in multiset /// **TC: O(1)**<br/>
    3. end()- used to get the end of the multiset /// **TC: O(1)**<br/>
    4. size()- used to get the size of multiset /// **TC: O(1)**<br/>
    5. empty() - used to tell whether multiset is empty or not /// **TC: O(1)**<br/>
    6. erase(x)- used to delete the all the occurence of element x if it is present in the set /// **TC: O(log(n))**<br/>
    7. erase(s.find(x))- used to delete the first occurence of element x if it is present in the set /// **TC: O(log(n))**<br/>
    8. lower_bound(x) - used to get the first element that is equal to x or is greater than x /// **TC: O(log(n))**<br/>
    9. upper_bound(x)- used to get the first element that is greater than x /// **TC: O(log(n))**<br/>
    '''
      
    
    
    
    
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    multiset<int>s;    // set of integers
    s.insert(1);   // current elements: 1
    s.insert(2) ;  // current elements: 1 2
    s.insert(3) ;  // current elements: 1 2 3
    s.insert(1) ;  // current elements: 1 1 2 3  
    auto it=s.begin(); // returns iterator to the first element
    cout<<*(it)<<"\n";  // prints 1 
    auto it1=s.end();  // returns iterator to the end of the last element in set
    cout<<(*(--it));   // prints 3 last element
    cout<<s.size();     // prints 4 size of the set
    cout<<s.empty();    // prints 0 i.e. multiset is not empty
    s.erase(1);        // delete all 1's from the set
                        // current element 2 3
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
                         // Current elements: 2 3 4 5 5 6 6
    cout<<*(s.lower_bound(3));// answer is 3
    cout<<*(s.lower_bound(4));// answer is 4
    cout<<*(s.upper_bound(5));// answer is 5
    cout<<*(s.upper_bound(5));// answer is 6
      
  
    
    
    
    return 0;
    }
    
    
   '''
    
    
    
    
    
   
     
     
