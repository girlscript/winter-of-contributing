# Pre-Defined Manipulators

Manipulators are functions that are used to modify input/output operations. To use manipulators in programs, we need to include a header file 'iomanip'.

```C++
<iomanip>
```
<br />

Here are some commonly used manipulators:
  
- ## _setw(int width)_:
  
  - This is used to set the field width to 'width'. The output is always right justified.
  - Here's an example below explaining the same:
  
  ```C++
  #include<iostream>
  #include<iomanip>
  using namespace std;
  int main()
  {
     cout << setw(5) << 42 <<endl;
     cout << setw(-5) << 42 << endl;
     return 0;
  }
  ```
 

  ### Output

  <div align = 'center'>
    
    |   |   |   | 4 | 2 |
    |---|---|---|---|---|
    | 4 | 2 |   |   |   |
  </div>
  
<br />
  
  
- ## _setprecision(int p)_:
  
  - This manipulator is used to set the floating point precision to 'p'.
  - Here's an example below explaining the same:
  
  ```C++
  #include<iostream>
  #include<iomanip>
  #include<iomath>
  
  using namespace std;
  int main()
  {
     cout << setprecision(2) << sqrt(3) << endl;
     cout << setprecision(3) << sqrt(3) << endl;
     cout << setprecision(4) << sqrt(3) << endl;
     return 0;
  }
  ```
  
  
  ### Output
  
  > 1.73  
  > 1.732  
  > 1.7321
  
<br />

  
- ## _setfill(int f)_:
  
  - This manipulator is used to fill the empty column that are obtained after using 'setw' manipulator.
  - Here's an example below explaining the same:
  
  ```C++
  #include<iostream>
  #include<iomanip>
  using namespace std;
  int main()
  {
     cout << setfill('&') << setw(5) << 18 << endl;
     cout << setfill('*') << setw(5) << 720 << endl;
  }
  
  
 ### Output
  
  <div align = 'center'>
  
  | & | & | & | 1 | 8 |
  |---|---|---|---|---|
  | * | * | 7 | 2 | 0 |
    
  </div>
  
  <br />
  
  
- ## _setiosflags(long flag)_:
  
  - This manipulator set the format flag to flag
  - This includes 'ios::showpoint', 'ios::showpos', 'ios::scientific'
  - Here's an example below explaining the same:
  
  ```C++
  #include<iostream>
  #include<iomanip>
  using namespace std;
  int main()
  {
     cout << setiosflag(ios::showpos) << 12 << endl;
     cout << setprecision(5) << 12.23 << endl;
     cout << setiosflag(ios::showpoint) << 12.23 << endl;
     return 0;
  }
  
 
 ### Output
  
  > +12  
  > 12.23  
  > 12.23000
  
  
  <br />
  
- ## _resetiosflag(long flag)_:
  
  - This manipulator clear the format flag specified by flags
  - Here's an example below explaining the same:
  
  ```C++
  #include<iostream>
  #include<iomanip>
  using namespace std;
  int main()
  {
     cout << setprecision(5) << 9.82 << endl;
     cout << setiosflag(ios::showpoint) << 9.82 <<endl;
     cout << resetiosflag(ios::showpos) << 9.82 << endl;
     return 0;
  }
  
  ```
  
 ### Output
  
  > 9.82  
  > 9.82000  
  > +9.82
   
   
 <br />
  
- ## _endl_:
  
  - This manipulator is used to insert a newline character.
  - This manipulator works even if you dont't mention the header file 'iomanip'.
  - Here's an example below explaining the same:
  
  ```C++
  
  #include<iostream>
  using namespace std;
  int main()
  {
     cout << "This file is inside Girlscript repository" << endl;
     return 0;
  }
  
  ```
  
 ### Output
  
  > This file is inside Girlscript repository
  
  

<br />


---
  
  
  
  
 
