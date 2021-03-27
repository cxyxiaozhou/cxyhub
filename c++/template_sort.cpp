#include<iostream>
using namespace std;

//T is person of type
template<>bool myCompare(Person &p1,Person &p2)
{

	if(p1.name==p2.name && p1.age=p2.age)
	{
	return true;
	}
	else
	{
	return false;
	}
}
void myPrint(int a,int b)
{

	cout<<""<<endl;
}

template<typename T>
void myPrint(T a,T b)
{

	cout<<"T"<<endl;
}

int myAdd01(int a,int b)
{
	return a+b;

}
template<typename T>
T myAdd02(T a,T b)
{

	return a+b;
}


template<typename T>
void mySwap(T &a,T &b)
{

	T temp=a;
	a=b;
	b=temp;
}


template<typename T>
void mySort(T arr[],int len)
{
	for(int i=0;i<len;i++)
	{
	
		int max=i;//first max
		for(int j=i+1;j<len;j++)
		{
		//if first max than repeat 9 max small
		//so the best huge is arr[j]
			if(arr[max]<arr[j])
			{
			//the first max
				max=j;
			}
		}
		if(max!=i)
		{
		
			mySwap(arr[max],arr[i]);
		}
	}

}

template<typename T>
void printArray(T arr[],int len)
{

	for(int i=0;i<len;i++)
	{
	cout<<arr[i]<<"";
	}
	cout<<endl;
}

void test01()
{

	char charArr[]="badcfe";
	int num=sizeof(charArr) / sizeof(char);
	mySort(charArr,num)
	printArray(charArr,num);
}
void test02()
{

	int intArr[]={1,8,6,2,4,7,5,9,3};
	int num=sizeof(intArr) / sizeof(int);
	mySort(intArr,len);
	printArray(intArr,num);

}

void test03()
{

	int a=10;
	int b=20;
	char c='c'
	cout<<myAdd(a,b)<<endl;//a=int b=int
	cout<<myAdd(a,c)<<endl;//c:Ascll:99=10+99=109;c=(int)
	cout<<myAdd02(a,b)<<endl;//a+b
	cout<<myAdd02(a,c)<<endl;//wrong
	cout<<myAdd02<int>(a,c)<<endl;//109,C=int

}

void test04()
{

	int a=10;
	int b=20;
	myPrint(a,b);//general function
	myPrint<>(a,b);//mod function
}

int main()
{

	return 0;
}
