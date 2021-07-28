// C++ Program to Check Whether Number is Even or Odd

#include<iostream>
using namespace std;

class Check
{
    int num;
public:
    void get();
    friend void check(Check &c);
};

void Check::get()
{
    cout<<"Enter Number: ";
    cin>>num;
}

void check(Check &c)
{
    if(c.num%2 == 0)
    {
        cout<<c.num<<" is Even"<<endl;
    }
    else
    {
        cout<<c.num<<" is Odd"<<endl;
        
    }
}

int main()
{
    Check C;
    C.get();
    check(C);    

return 0;
}