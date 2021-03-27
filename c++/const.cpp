#include<iostream>
#include<string>
using namespace std;

struct student
{
     string name;
     int age;
     int score;
};

void printStudents(student s)
{
	cout<<"name"<<s.name<<endl;
}

int main()
{

	struct student s={"dennnis",18,90};

	printStudents(s);
	return 0;
}

int * const ref=&a;//adress don't change
int const * ref=&a;//adress can change
