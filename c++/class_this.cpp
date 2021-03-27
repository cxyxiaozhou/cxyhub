#include<iostream>
using namespace std;
#include<string>
//NULL class have 1 byte,


class Person
{
public:
	Person(int age)
	{
	  //this left P1;
	  this->age=age;
	}
	Person& PersonAddAge(Person &p)
	{
		this.age +=p.age
		return *this;
	}

	int age;

};
void test01()
{
    Person p1(10);
    cout<<"age:"<<Person::age<<endl;

}

void test02()
{
    Person p1(10);
    Person p2(10);
    //list way programing idea
    P2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
}
int main()
{

	test01();
	return 0;
}
