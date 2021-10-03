# POLICY BASED DATA STRUCTURE

##ORDERED_SETS
 
   **ABOUT**<br/>
    Ordered sets are policy based data structures which inserts only unique elements in sorted fashion.<br/>
    It is same like the Sets data structure in C++ STL and it has two extra functions also<br/>
    
    
   **REQUIRED HEADER FILES**<br/>
    #include<ext/pb_ds/assoc_container.hpp>   // It includes the containers for sets,maps.<br/>
    #include<ext/pb_ds/tree_policy.hpp>       // It is included for node updates<br/>
   
   
   **REQUIRED NAMESPACES**<br/>
    using namespace __gnu_pbds;               // It is the namespace for pbds<br/>
   
   
   **TYPES USED FOR DECLARATION**<br/>
    tree < int ,  null_type ,  less<int> ,  rb_tree_tag ,  tree_order_statistics_node_update ><br/>
    //  Here int is for the data-type. We can also use long long ,pair<int,int> instead it's place.<br/>
    // less<int> for integer data type.This can also be modified for different data types <br/>
  
  
   **FUNCTIONS**<br/>
    1.order_of_key(x) : Return number of elements less than the x *TC:O(log(n))*<br/>
    2.find_by_order(x) :Return the elements at xth position<br/>
    3.ALL THE FUNCTIONS USED IN SETS (STL) CAN BE USED HERE<br/> 
  
  
  
  **CODE FOR PBDS**<br/>
  
  
  ```
  #include<bits/stdc++.h>
  using namespace std;
  
  #include <ext/pb_ds/assoc_container.hpp>
  #include <ext/pb_ds/tree_policy.hpp>
  using namespace __gnu_pbds;
  typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>  ordered_set;
   
  
  int main()
  {
   ordered_set s;
  s.insert(1);    // Elements in the PBDS:          1 
  s.insert(5);     // Elements in the PBDS:        1,5 
  s.insert(5);      // Elements in the PBDS:      1 ,  5      5 cannot be inserted as insertion of unique elements is only done here
  s.insert(2);     // Elements in the PBDS:      1 , 2 ,5
  s.insert(6);    // Elements in the PBDS:      1 , 2, 5, 6
  s.insert(10);    // Elements in the PBDS:    1 , 2, 5, 6, 10
  s.insert(7);    // Elements in the PBDS:    1 , 2, 5, 6, 7, 10
  s.insert(9);    // Elements in the PBDS:   1 ,2 , 5, 6, 7, 9, 10
  cout<<s.size<<"\n";   // 7 
  cout<<*(s.find_by_order(0))<<"\n";  // It prints the first element as here indexing is 0- based
  cout<<(s.order_of_key(6))<<"\n"     // 3 as only 1,2,5, are less than 6 here  
  cout<<s.erase(2)<<"\n";// Elements in the PBDS: 1 , 5, 6, 7, 9, 10
  cout<<"CURRENT ELEMENTS\n";
  for(auto it:s)
  cout<<it<<" ";
  
  return 0;
  }
  ```
 **OUTPUT**
  
  ```
  7
  1
  3
  CURRENT ELEMENTS:
  1 5 6 7 9 10
  ```
   
