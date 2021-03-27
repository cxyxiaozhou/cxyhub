//this is + repeated load
#include<iostream>
#include<string>
using namespace std;
//copy function
//() repeat ()

class MyPrint
{
public:
	void operator()(string test)
	{
	
	    cout<<test<<endl
	}

}

class  MyInteger
{
public:
	MyInteger()
	{
	    m_Num=0;
	
	}
	//++varible
	MyInteger& operator++()
	{
	    m_Num++;
	    return *this;
	
	}
	//varible++
	MyInteger operator++(int)
	{
	      MyInteger temp=*this;
	      m_Num++;
	      return temp
	}
	MyInteger& operator--()
	{
	    m_Num--;
	    return *this;
	}
	MyINteger operator--(int)
	{
	    MyInteger temp=*this;
	    m_Num--;
	    return temp;
	}

private:
	int m_Num;
}


class Person
{
public:
	Person operator+(Person &p)
	{
	    Person temp;
	    temp.m_A=this->m_A+p.m_A;
	    temp.m_B=this->m_B+p.m_B;
	    return temp;
	
	}
//__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream cout,*_Ptr_cout;
	Person(int age)
	{
	      m_Age=new int(age);
	}

	Person& operator=(Person &p)
	{
	    if(m_Age!=NULL)
	    {
	    delete m_Age;
	    m_Age=NULL;
	    
	    }
	    m_Age=new int (*p.m_Age);
	return *this
	}


	int *m_Age;
	int m_A;
	int m_B;

};
//repeat load <<
ostream & operator<<(ostream &cout,Person &p,MyInteger myint)
{
	//cout classnumber==ostream
	cout<<"m_A="<<p.m_A<<"m_B"<<p.m_B<<endl;
	cout<<myint.m_Num;
	return cout;
}

void test01()
{
   Person p1;
   p1.m_A=10;
   p1.m_B=20;
   Person p2;
   p2.m_A=10;
   p2.m_B=10;
   Person p3=p1+p2;//p1.operator+(p1,p2);



}
void test02()
{
   Person p;
   p.m_A=10;
   p.m_B=10;

   cout<<p.m_A<<endl;


}

void test03()
{
      MyInteger myint;
      cout<<myint<<endl;

}
using namespace std;

int main()
{

	test01();
	return 0;
}
