#include<iostream>
using namespace std;

int main()
{
 int * arr=new int[10];

 cout<<*arr<<endl;
 
 for(int i=0;i<10;i++)
 {
    arr[i]=i+1;
    cout<<arr[i]<<endl;
 }
 cout<<*arr<<endl;
 return 0;

}
