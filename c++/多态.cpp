#include<iostream>
using namespace std;
//this is surse is adress early bind 
//animal.speaker already bind adress
//setted:add virtual slow for it

class Animal
{

    public:
	    //adress last bind
	 virtual  void speak()
	    {
	        cout<<"tell:zeeo"<<endl;
	    
	    }
};
class Cat :public Animal
{
public:
	void speak()
	{
	     cout<<"tell:cat"<<endl;
	
	}

};

void doSpeak(Animal &animal)
{
     animal.speak();

}
void test01()
{
   Cat cat;
   doSpeak(cat);

}
int main()
{
test01();
return 0;
}
