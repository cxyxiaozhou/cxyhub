#include<iostream>
using namespace std;
//this is duojicheng

class Animal{
	public:
		int m_Age;


};

//虚继承virtual,Animal class:虚基class
//vbptr,virtual,base,pointer,
//virtual can apart 2 vbptr save age 0+8=4+4=8->age=28
class Sheep :virtual public Animal{};

class Camel :virtual public Animal{};

class Alpaca :public Sheep,Camel{};



void test01()
{
	Alpaca st;
	st.Camel::m_Age=18;
	st.Sheep::m_Age=28;


}

int main()
{


    return 0;
}
