#include<iostream>
using namespace std;
#include<string>
#include<fstream>
void test01()
{
ifstream ifs;
//ios::in is read
ifs.open("c++filetest.txt",ios::in);

if (!ifs.is_open())
{
	cout<<"filire"<<endl;
	return;
}
//READ1
char buf[1024]={0};
while(ifs>>buf)
{
cout<<buf<<endl;
}

//READ2
char buf[1024]={0};
while(ifs.getline(buf,sizeof(buf)))
{
cout<<buf<<endl;
}

//READ3
string buf;
while(getline(ifs,buf))
{
cout<<buf<<endl;
}

//READ4
char c;
//get is a byte read
while((c=ifs.get())!=EOF)
{
cout<<c;
}



ifs.close();

}


int main()
{
test01();
return 0;
}
