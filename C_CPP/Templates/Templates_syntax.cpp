#include<iostream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;
 
template <class T>
class vec
{
    public:
        T *arr;
        int size;
        vec(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vec &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    vec<float> v1(3); //vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vec<float> v2(3); //vector 2 with a float data type
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}