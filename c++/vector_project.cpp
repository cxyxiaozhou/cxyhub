#include<iostream>
using namespace std;
#include<string>
#include<vector>

class Person
{
public:
	Person(string name,int age)
	{
	
		this->m_Name=name;
		this->m_Age=age;
	}




	string m_Name;
	int m_Age;
};

void test01()
{
template<class T>//T=Person,v=vector v
class vector

	vector<Person> v;
	Person p1("dennis",10);
	Person p2("alice",20);
	Person p3("suki",30);
	Person p4("joanna",40);
	Person p5("bob",50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
	{
	
		cout<<"name:"<<(*it).m_Name<<"Age:"<<(*it).m_Age<<endl;
	}
}
void test02()
{


}

int main()
{

	return 0;
}
