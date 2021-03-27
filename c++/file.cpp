#include<iostream>
using namespace std;
#include<fstream>

//ofstream is write
//ifstream is read
//fstream is write and read

void test01()
{
//o=out;f=file
ofstream ofs;
//ios::out is write way
ofs.open("c++filetest.txt",ios::out);


ofs<<"name:dennis"<<endl;
ofs<<"sex:man"<<endl;
ofs<<"age:19"<<endl;


ofs.close();

}

int main()
{
test01();
cout<<"file default open way in the current dir"<<endl;
return 0;
}
