// C++ Program to Generate Multiplication Table

#include<iostream>
using namespace std;

class Multiplication
{
    int n;
public:
    Multiplication(int n)
    {
        cout<<"Constructor Called"<<endl;
        do
        {        
            for(int i=1;i<=10;i++)
            {
                cout<<n<<"*"<<i<<" = "<<n*i<<endl;
            }
            cout<<endl;
            n--;
        }while(n>0);
    }
    ~Multiplication()
    {
        cout<<"Destructor Called"<<endl;
    }
};

int main()
{
    int a;
    cout<<"Enter Number: ";
    cin>>a;
    Multiplication M(a);

return 0;
}