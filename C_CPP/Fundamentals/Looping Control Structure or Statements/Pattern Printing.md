# Pattern printing questions

## Half Pyramids of stars

```CPP
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return (0);
}
```

## OUTPUT
```CPP
*
**
*** 
****
*****
```

```CPP
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return (0);
}
```

## OUTPUT
```CPP
*****
****
***
**
*
```

```CPP
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=n-i;k>0;k--)
        cout<<" ";
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return (0);
}
```

## OUTPUT
```CPP
    *
   **
  ***
 ****
*****
```

```CPP
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int k=n-i;k>0;k--)
        cout<<" ";
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return (0);
}
```

## OUTPUT
```CPP
*****
 ****
  ***
   **
    *
```
