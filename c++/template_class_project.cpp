#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
	
		this->m_Capacity=capacity;
		this->m_Size=0;
		this->pAddress=new T[this->m_Capacity];
	}
	
	MyArray(const MyArray& arr)
	{
	
		this->m_Capacity=arr.m_Capacity;
		this->m_Size=arr.m_Size;

		this->pAddress=new T[arr.m_Capacity];

		for(int i=0;i<this->m_Size;i++)
		{
		
			this->pAddress[i]=arr.pAddress[i];
		}
	}

	MyArray& operator=(const MyArray& arr)
	{
	
		if(this->pAddress!=NULL)
		{
		
			delete[] this->pAddress;
			this->pAddress=NULL;
			this->m_Capacity=0;
			this->m_Size=0;
		}
		
		this->m_Capacity=arr.m_Capacity;
		this->m_Size=arr.m_Size;
		this->pAddress=new T[this->m_Capacity];

		for(int i=0;i<this->m_Size;i++)
		{
		
			this->pAddress[i]=arr.pAddress[i];
		}
		return *this;
	}
	


	void Push_Back(const T & val)
	{
	
		if(this->m_Capacity==this->m_Size)
		{
		
			return;
		}
		this->pAddress[this->m_Size]=val;
		this->m_Size++;
	}

	void Pop_Back()
	{
	
		if(this->m_Size==0)
		{
			return;
		}
		this->m_Size--;
	}

	T& operator[](int index)
	{
	
		return this->pAddress[index];
	}

	int getCapacity()
	{
	
		return this->m_Capacity;
	}
	int getSize()
	{
	
		return this->m_Size;
	}

	~MyArray()
	{
	
		if(this->pAddress!=NULL)
		{
		
			delete [] this->pAddress;
			this->pAddress=NULL;
		}
	}

private:
       T * pAddress;
       int m_Capacity;
       int m_Size;
};
void printIntArray(MyArray <int>& arr)
{
	for(int i=0;i<arr.getSize();i++)
	{
		cout<<arr[i]<<endl;
	}

}

void test01()
{

	MyArray<int>arr1(5);
	MyArray<int>arr2(arr1);
	MyArray<int>arr3(100);
	arr3=arr1;
	for(int i=0;i<5;i++)
	{
	
		arr1.Push_Back(i);
	}
	cout<<"arr1:"<<endl;
	printIntArray(arr1);
	cout<<"arr capacity"<<arr1.getCapacity()<<endl;
	cout<<"arr size"<<arr1.getSize()<<endl;

}
int main()
{
	test01();


	return 0;
}
