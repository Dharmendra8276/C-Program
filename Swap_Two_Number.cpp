// C++ Program to Swap Two Numbers

#include<iostream>
using namespace std;

class Swap
{
    int m, n;
public:
    void get()
    {
        cout<<"Enter 1st Number: ";
        cin>>m;
        cout<<"Enter 2st Number: ";
        cin>>n;
        swap(m, n);           //Call by reference
    }
    void print()
    {
        cout<<"1st Number => "<<m<<endl;
        cout<<"2nd Number => "<<n<<endl;
    }
    void swap(int &a, int &b);
};

void Swap::swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    Swap S;
    Swap *P;
    P = &S;           
    P->get();           //Member selection 
    cout<<"$$$$$$$$$$$$ After Swap $$$$$$$$$$$$$"<<endl;
    P->print();
    
return 0;
}