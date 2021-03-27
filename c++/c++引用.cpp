//initialization almust for quote
//don't ravise initialization be after 
//can:b=20;&a=b;c=20;b=c
//don't:b=20;&a=b;&b=c;

#include<iostream>
using namespace std;

//qoute in the function parameter
//exchange function
//void mySwap02(int *a,int *b)
//void mySwap02(int a,int b)
void mySwap01(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
}

int& test02()
{

    static int a=20;
    return 0;

}

const int & ref=10;//const operation int temp=10,int &ref=temp
ref=20;//don't revise in the add const after



int main()
{

int a=20;
int &b=a;//b=a it's can operation memorys
cout<<a<<endl;//20
cout<<b<<endl;//20

b=100;	
cout<<a<<endl;//100
cout<<b<<endl;//100
int c=10;
int z=20;
test02=1000;//int& is quote ,back function parameter so test02=1000 is return 0=1000 is give 0 ravise

mySwap(c,z);//&a=c,&a=z;

return 0;
}
