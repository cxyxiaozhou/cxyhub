#include<iostream>
using namespace std;
#include<fstream>
class Person 
{
public:
	char m_Name[64];
	int m_Age;

};

void test01()
{
ofstream ofs;
ofs.open("Person.txt",ios::out|ios::binary);
Person p={"dennis",18};
//ASCLL is write ofs<<content<<endl;
//BINARY is write ofs.write((const char *)&varible,data size));
ofs.write((const char *)&p,sizeof(Person));
ofs.close();

}

void test02()
{
ifstream ifs;

ifs.open("Person.txt",ios::in|ios::binary);

bool ret=ifs.is_open() ? : true ; false;
cout<<ret<<endl;
Person p;

ifs.read((char *)&p,sizeof(Person));
cout<<"name"<<p.m_Name<<p.m_Age<<endl;

ifs.close();


}

int main()
{

test01();
test02();
return 0;
}
