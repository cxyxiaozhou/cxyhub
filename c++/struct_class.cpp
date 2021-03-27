#include<iostream>
using namespace std;

class C1
{
    int m_A;//default authority is private
};

struct C2
{
 
    int m_A;//default authority is public
};

int main()
{
    C1 c1;
    c1.m_A=100;//wrong class in the outside don't visit

    C2 c2;
    c2.m_A=100;//corrcet is public
    return 0;
}
