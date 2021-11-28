# Object slicing in inheritance

Inheritance is a feature of C++ by which we can derive a new class (derived class) from an already existing class (base class). In this way, the derived class can inherit the data members and member functions of the base class, depending upon the access mode used. <br/>
Object slicing happens when an object of a derived class is assigned to an object of a base class and therefore, some of the additional attributes in the derived class object are "sliced" off. This happens because the data members of the derived class are not present in its corresponding base class.
Hence, this does not happen when an object of a base class is assigned to an object of a derived class because the data members of a base class are already inherently present in the derived class.

## Example

```cpp
#include<iostream>
using namespace std;

class GirlScript{
    public:
    int members;
    GirlScript(int x)
    {
        members = x;
    }
    virtual void participate()
    {
        cout<<"I am a part of GirlScript!\n";
    }
};
class GWOC : public GirlScript{
    public:
    int mentors;
    int contributors;
    GWOC(int x, int m, int c) : GirlScript(x)
    {
        mentors = m;
        contributors = c;
    }
    void participate()
    {
        cout<<"I am a part of GWOC!\n";
    }
};
int main()
{
	GWOC obj1(100, 20, 30);
	//values - contributors(20) and mentors(30) of derived class would be sliced off when object assigned from obj1 to obj2
	GirlScript obj2 = obj1;
	obj2.participate();
	cout<<"No. of members = "<<obj2.members<<endl;
	obj1.participate();
	cout<<"No. of members = "<<obj1.members<<" , No. of contributors = "<<obj1.contributors;
	return(0);
}
```

Output :

```
I am a part of GirlScript!
No. of members = 100
I am a part of GWOC!
No. of members = 100 , No. of contributors = 30
```

## How to avoid object slicing?

### 1. Using pure virtual methods

As we know, if we add atleast one pure virtual function to a class, it makes it an abstract class. Since it is not possible to make an object of an abstract class, therefore this disallows the object slicing behavior. Hence, we can add pure virtual keywords into our functions of the base class and avoid object slicing.

### 2. Using references or pointers

The above-demonstrated behavior of object slicing can be avoided with the help of references or pointers also. References or pointers of any given type take the same amount of memory. Therefore, when references or pointers to the object are passed, no slicing of data members would be seen. Hence, preventing object slicing. Following is the example showing avoidance of object slicing using pointers.

#### Example

```cpp
#include <iostream>
using namespace std;
class Vehicle{
  protected:
  int price;
  public:
  Vehicle(int x)
  {
      price = x;
  }
  virtual void show()
  {
      cout<<"I am driving a vehicle of price = Rs. "<<price<<endl;
  }
};
class Car : public Vehicle{
  protected:
  int modelNo;
  public:
  Car(int x, int y) : Vehicle(x)
  {
      modelNo = y;
  }
  void show()
  {
      cout<<"I am driving a car of price = Rs. "<<price<<" and model number = "<<modelNo<<endl;
  }
};
//Method demonstrating how object slicing will be avoided
void sliceFunc(Vehicle *obj)
{
    obj->show();
}
int main() {
	Vehicle *obj1 = new Vehicle(12000);
	Car *obj2 = new Car(800000, 125);
	sliceFunc(obj1);
	//No object slicing when derived class object obj2 assigned to base class object obj
	sliceFunc(obj2);
	return 0;
}
```

Output :

```
I am driving a vehicle of price = Rs. 12000
I am driving a car of price = Rs. 800000 and model number = 125
```
