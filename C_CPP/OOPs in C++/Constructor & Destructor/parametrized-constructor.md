# Parametrized Constructor

Like Functions, Constructors also take arguments. We can pass the desired value as the arguments or parameters in Parametrized Constructor. 

Here's an example below explaining the same:

```C++
#include<iostream>
using namespace std;
class girlscript
{
   private:
          int num1,num2;
   public:
         girlscript(int n1, int n2)
         {
            num1 = n1;
            num2 = n2;
         }
         
         int print_num1()
         {
            return num1;
         }
         int print_num2()
         {
            return num2;
         }
};
int main()
{
   girlscript g(21,22);
   cout << g.print_num1() << " + " << g.print_num2() << " = " << g.print_num1() + g.print_num2();
   return 0;
}


```

### Output

> 21 + 22 = 43

---

