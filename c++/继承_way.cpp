#include<iostream>
using namespace std;


class Base1
{
public:
	static int m_A;
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};
int Base1::m_A==100;

class Son1 :public Base1
{
public:
	static int m_A;
	void func()
	{
	     m_A=10;//public authority
             m_B=10;//protected authority	     
	    // m_C=10;//wrong ,private authority don't visit
	}

};

int Son1::m_A=200;
void test01()
{
    Son1 s1;
    s1.m_A=100;
    //s1.m_B=100;in the son class m_B is protected authority don't visit
    cout<<"son:"<<s1.m_A<endl;
    cout<<"base:"<<s1.Base1::m_A<<endl;
    //function alike
    //cout<<"son:"<<s1.func()<<endl;
    //cout<<"base:"<<s1.Base1::func()<<endl;
}

int main()
{


     return 0;
}
