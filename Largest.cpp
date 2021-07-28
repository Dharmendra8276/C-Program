// C++ Program to Find Largest Number Among Three Numbers

#include<iostream>
using namespace std;

class largest
{
    int a, b, c;
    int num;
public:
    void get()
    {
        cout<<"Enter 1st Number: ";
        cin>>a;
        cout<<"Enter 2nd Number: ";
        cin>>b;
        cout<<"Enter 3rd Number: ";
        cin>>c;
    }
    void display()
    {
        cout<<"Greatest Number => "<<num<<endl;
    }
    friend int larg(largest &L);
};

int larg(largest &L)
{
    if(L.a>L.b && L.a>L.c)
    {
        L.num = L.a;
        return (L.num);
    }
    else if(L.c>L.a && L.c>L.b)
    {
        L.num = L.c;
        return (L.num);
    }
    else
    {
        L.num = L.b;
        return (L.num);
    }
}

int main()
{
    largest L;
    L.get();
    larg(L);
    L.display();

return 0;
}