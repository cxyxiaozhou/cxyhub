#include<iostream>
using namespace std;
#include<fstream>

int main()
{
	ifstream ifs;
	char ch;

	ifs>>ch;
	if(ifs.eof())
	{
		cout<<"file NULL:!"<<endl;
		
	
	}
	ifs.close();

return 0;
}
