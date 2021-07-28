// C++ Program to Check Leap Year

#include<iostream>
using namespace std;

class Leap
{
    int year;
public:
    void get()
    {
        cout<<"Enter Year: ";
        cin>>year;
    }
    friend void fun(Leap &L);
};

void fun(Leap &L)
{
    if(L.year%400 == 0 || L.year%100 == 0 && L.year%4 == 0)
    {
        cout<<L.year<<" is Leap Year"<<endl;
    }
    else
    {
        cout<<L.year<<" is Not Leap Year"<<endl;
    }
}

int main()
{
    Leap L;
    L.get();
    fun(L);
    
return 0;
}
