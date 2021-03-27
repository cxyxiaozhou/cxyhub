#include<iostream>
using namespace std;

int func(int a,int b,int c)
{
return a+b+c;
}
//if function declared have  default parameter ,
//that function practice haven't  default parameter
//int abs(int a=10,int b=10);int abs(int a=10,int b=10){} this is wrong


//crreact
int abs(int b=20,int a=10);
int abs(int b,int a)
{
return b+a;
}
int v_Sd(char b,char a);
int v_SD(char b="z",char a="d"){
return b;
}



//function stood position parameter
void func(int a,int)
{
cout<<"this is func"<<endl;
}


//function loading again
void func()
{
cout<<"func1;"<<endl;
}
void func(int a)
{
cout<<"func2:"<<endl;
}


int main()
{

	cout<<func(10,20,30)<<endl;
	func(10,10);//a is avialable ,b is not
	func();//func1
	func(10);//func2
	
	return 0;
}
