#include<iostream>
using namespace std;

class Phone
{
	char name;
	int number;
}

class Person
{
public:
	Person()
	{
		cout<<"default:"<<endl;
		Phone pn;//first Phone class
	}
	Person() :m_A(10),m_B(20),m_C(30)
	{
	m_Age=age;
	}

	~Person()
	{
	cout<<"-"<<endl;
	Phone pn;//first Person class

	}
	//clone make_function write for way
	Person(const Person &p)
	{
	m_Age=p.m_Age;
	}
	int m_Age;
	int m_A;
	int m_B;
	int m_C;

}
void test01()
{
     
	
	Person p1(20);
	Person p2(p1);
	cout<<"p2"<<p2.m_Age<<endl

	//Person p3(p2);
}
void doWork(Person p)
{
}

void test02()
{
     Person p;
     doWork(p);
}

Person doWork2()
{
    Person p1;
    return p1;
}
void test03()
{
    Person p=doWork2();

}

int main()
{

    return 0;
}
