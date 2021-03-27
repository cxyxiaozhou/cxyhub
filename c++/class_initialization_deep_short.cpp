#include<iostream>
using namespace std;

class Person
{
public:
	person()
	{
	cout<<"default"<<endl;
	}
	person(int age,int height)
	{
	m_Age=age;
	new int(height)
	cout<<"parameter:"<<endl;
	}
	~person()
	{
	cout<<"analyzing:"<<endl;
	}
	person(const int & age)
	{
	m_Age=age;
	}

	int m_Age;
	int * m_Height;
}

void test01()
{
     

}

int main()
{


     return 0;
}
