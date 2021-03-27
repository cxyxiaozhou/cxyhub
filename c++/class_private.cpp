#include<iostream>
using namespace std;
#include<string>
class Person
{
public:
	void setName(string name)
	{
	    m_Name=name;
	}
	string getName()
	{
	    return m_Name;
	}
	int getAge()
	{
	    m_Age=0;
	    return m_Age;
	}
private:
	string name;
	int m_Age;
	string m_Lover;


};

int main()
{

    Person p;
    p.setName("dennis");

    return 0;
}
