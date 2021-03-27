#include<iostream>
using namespace std;

class Person
{
public:
	static void func()
	{
	cout<<"static:"<<endl;
	m_A=100;
	//m_B=200;wrong
	}
	
	static int m_A;
	int m_B;
};

int Person::m_A=0;//carrcet

void test01()
{
Person p;
p.func();

// visit by class name
Person::func();
}
int main()
{


    return 0;
}
