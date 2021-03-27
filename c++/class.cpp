#include<iostream>
using namespace std;
#include<string>
const double PI=3.14;

class Circle
{
//pubulic is inside and outside can visit authority
//protected 
//private
public:
	int m_r;

	double calculateZc()
	{
	return 2 * PI * m_r;
	}

    

};

class Student
{
public:
	string m_Name;
	int m_Id;



	void showStudent()
	{
	    cout<<"name"<<m_Name<"ID:"<<m_Id<<endl;
	
	}
	void setName(string name)
	{
	    m_Name=name;
	}


};

class Person
{
public:
	string m_Name;
protected:
	string m_Car;
private:
	int  m_Password;
public:
	void func()
	{
	m_Name="dennis';
	m_Car="bmb";
	m_Password=5616156;
	}


};

int main()
{
     Circle cl;
     cl.m_r=10;
    cout<<"Circle:"<<cl.calculateZc()<<endl;
    Student s1;
    s1.m_Name="dennis";
    s1.setName("bob");
    s1.m_Id=1;
    s1.showStudent();

    Person p1;
    p1.m_Name="bob";//ccreact is public
    //p1.m_Car="nbjn"; this is wrong,there are projected authority

     return 0;

}
