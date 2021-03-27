#include<iostream>
using namespace std;

template<class NameType,class AgeType>
class Person
{

public:
	Person(NameType name,AgeType age)
	{
		this->m_Name=name;
		this->m_Age=age;

	}
	NameType m_Name;
	AgeType m_Age;

};
void test01()
{

	Person<string,int>p1("dennis",20);
}
int main()
{

	return 0;
}
