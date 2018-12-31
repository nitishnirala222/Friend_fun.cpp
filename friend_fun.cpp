#include<iostream>
using namespace std;
class A;
class B
{
int b;
public:
int setValue(int x)
{
b=x;
}
int getValue()
{
cout<<"The value of b is: "<<b<<endl;;
}
friend int Add(A,B);
};
class A
{
int a;
public:
int setValue2(int y)
{
a=y;
}
int getValue2()
{
cout<<"The value of b is: "<<a<<endl;
}
friend int Add(A,B);
};
int Add(A obj1,B obj2)
{
cout<<"Addition of a and b is : "<<obj1.a+obj2.b;
}
int main()
{
A a;
B b;
a.setValue2(100);
b.setValue(200);
a.getValue2();
b.getValue();
Add(a,b);
}
