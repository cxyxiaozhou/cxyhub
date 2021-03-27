//new is open stack region function

#include<iostream>
using namespace std;

int * func()
{
//in the stack creat data
int * p=new int(10);//new back point data
return p;
}

void test01()
{
int * p=func();
//NULL the before
cout<<*p<<endl;
cout<<*p<<endl;

//NULL the after
delete p;

cout<<*p<<endl;
}

void test02()
{
//creat array data in the stack
int * arr=new int[10];

for(int i=0;i<10;i++)
{
    arr[i]=i+100;

}
for(int i=0;i<10;i++)
{
    cout<<arr[i]<<endl;

}
//NULL array data
delete[] arr;

}
int main()
{

    test01();
    test02();
    return 0;


}
