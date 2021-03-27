#include<iostream>
using namespace std;
#include<string>
//虚析构函数，必须写实现，在多态编写时，父类释放子类没有释放完时，可以使用虚析构函数
class  Calculator()
{

public:
	int getResult(string oper)
	{
	    if(oper=="+")
	    {
	    	return m_Num1+m_Num2;
	    }
	    else if(oper=="-")
	    {
	    	return m_Num1-m_Num2;
	    }
	    else if (oper=="*")
	    {
	    	return m_Num1*m_Num2;
	    }
	
	}
	int m_Num1;
	int m_Num2;

};
void test01()
{
	Calculator c;
	c.m_Num1=10;
	c.m_Num2=20;

	cout<<c.m_Num1<<endl;


}

class AbstractCalculator
{
	public://virtual int getResult()=0;纯虚函数
	//子类必须重写父类的虚函数
	//use:父类指针，指向子内，
	virtual int getResult()
	{
		
		return 0;
	}

	int m_Num1;
	int m_Num2;

};

class AddCalculator :public AbstractCalculator
{
public:
	 int getResult()
	 {
	     return m_Num1+m_Num2;
	 
	 }

};

void test02()
{
     AbstractCalculator * a1=new AddCalculator;
     a1->m_Num1=10;
     a1->m_Num2=20;

}


int main()
{


return 0;
}
