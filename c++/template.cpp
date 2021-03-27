#include<iostream>
using namespace std;
void swapInt(int &a,int &b)
{

	int temp=a;
	a=b;
	b=temp;

}

void swapDouble(double &a,double &b)
{

	double temp=a;
	a=b;
	b=temp;

}

template<typename T>
//t is  int
void mySwap(T &a,T &b)
{

	T temp=a;
	a=b;
	b=temp;
}
void test01()
{

	int a=10;
	int b=20;
	mySwap(a,b);//int
	mySwap<int>(a,b);//typename T=int
	cout<<a<<endl;
	cout<<b<<endl;
}

template<typename T>//function mod
template<class T>//class mod

void mySwap(T &a,T &b)
{

	T temp=a;
	a=b;
	b=temp;
}

int main()
{


	return 0;
}
