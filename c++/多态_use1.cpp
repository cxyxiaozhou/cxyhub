#include<iostream>
using namespace std;
#include<string>

class CPU
{
public:
	virtual void calculate()=0;

};
class VideoCard
{
public:
	virtual void display()=0;

}
class Memory
{
public:
	virtual void storage()=0;

};

class Computer
{
public://computer *Cpu =class Computer pointer,back Computer
	//CPU *Cpu =class Cpu pointer,back CPU
	//computer=new creat a memory in the pointer
	//CPU =cpu so this is use cpu classmate
	//CPU have calculate function
	//computer haven't calculate function
	//Computer(Computer *Cpu,Computer *VedioCard,Computer *Memory)is worng;
	Computer(CPU *Cpu,VideoCard *vc,Memory *mem)
	{
	
		m_cpu=Cpu;
		m_vc=vc;
		m_mem=mem;

	}

	void doWork()
	{
		m_cpu->calculate();//calculate function in the class CPU{};
		m_vc->display();
		m_mem->storage();
	}

	virtual ~Computer()
	{
		if(m_cpu!=NULL)
		{
			delete m_cpu;
			m_cpu=NULL;
		}
	 
	}

private:
	CPU *m_cpu;
	VideoCard *m_vc;
	Memory *m_mem;


};

class IntelCPU :public CPU
{

public:
	virtual void caculate()
	{
	    cout<<"cpu start work"<<endl;
	 
	}
};
void test01()
{
	//intelCPu null,Intercpu virtual cover CPU virtual 
    CPU * intelCpu=new IntelCPU;//creat cpu
   
    Computer * computer1=new Computer(intelCpu);//install cpu
    computer1->work();//run cpu
    delete computer1;

}

int main()
{

	return 0;
}
