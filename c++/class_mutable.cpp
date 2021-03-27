#include<iostream>
using namespace std;

class Person
{
public:
	void showPerson() const//this const * m_A//const this const * m_A
//this:Person * const this;this-const:const Person *const this;
	{
	m_A=100;//this->m_A;
	this->m_B=100;//wrong const don't change
	this->m_C=100;//crreact add mutable
	}
	int m_A;
	mutable int m_B;
};

void test01()
{
    Person p1;
    p1.showPerson();
}

int main()
{

    return 0;
}
