#include<iostream>
#include<string>
using namespace std;

class Technology
{
public:
	Technology(const Technology &Cy);
	void visit();
	void tower();

private:
	Building * building;
	string name;
}

class Building
{
	friend class Technology;
	friend void Technology::visit();
	friend void hacker(Building &building);
public:
	Building()
	{
	    my_tcbook="hacker_book";
	    m_code="Dennis Reatch";
	}
public:
	mutable string m_tcbook;

private:
	 string m_code;
};
void people(Building *building) const
{
	cout<<"people:"<<building->m_tcbook<<endl;
	
}
void hacker(Building &building) const
{
	cout<<"hacker:"<<building.my_tcbook<<endl;
	cout<<"book"<<building.m_code<<endl;
	this->my_tcbook="hacker_Technology";
	
}

void bluetooth_attack()
{
	Building building;
	people(&building);
	hacker(building);

}
void Technology::Technology()
{
    char xcxy[50];
    cout<<"pelase chose your version"<<endl;
    cin>>xcxy;
    Cy.name=xcxy;
    building=new Building;

}
void Technology::visit()
{
    cout<<"go"<<buliding->my_tcbook<<endl;
    cout<<"and"<<building->m_code<<endl;

}
void Technology::tower()
{
     cout<<"go"<<building->my_tcbook<<endl;

}
int main()
{
    Technology hacker;
    Technology::Technology(hacker);
    bluetooth_attack();
    return 0;
}
