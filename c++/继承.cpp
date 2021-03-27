#include<iostream>
#include<string>
using namespace std;

class Java
{
public:
	void header()
	{
	
	     cout<<"head:"<<endl;

	}
	void footer()
	{
		cout<<"below:"<<endl;
	
	}
	void left()
	{
	
	     cout<<"Java.Python.C++"<<endl;
	}
	void content()
	{
	cout<<"java page:"<<endl;
	
	}


}
class C++:public Basepage
{


	cout<<"this is c++"<<endl;
}

class Basepage
{
public:
	void content()
	{
	     cout<<"c++"<<endl;
	
	}


};

void test01()
{
     Java ja;
     ja.header();
     ja.footer();
     ja.left();
     ja.content();


}

int main()
{


     return 0;
}

