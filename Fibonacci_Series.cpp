// C++ Program to Display Fibonacci Series

#include<iostream>
using namespace std;

class Fibonacci
{
    int n, T1 = 0, T2 = 1, NT = 0;
public:
    void get()
    {
        cout<<"Enter Fibonacci Series Range: ";
        cin>>n;
    }
    void series()
    {
        cout<<"Fibonacci Series: ";
        cout<<T1<<", "<<T2<<", ";
        while(NT < n)
        {
            NT = T1 + T2;
            if(NT <= n)
            {
                cout<<NT<<", ";            
                T1 = T2;
                T2 = NT;
            }
            
        }
    }
};

int main()
{
    Fibonacci obj;
    obj.get();
    obj.series();
    
return 0;
}


/*#include<iostream>
using namespace std;

int main()
{
    int n, T1 = 0, T2 = 1, NT;

    cout<<"Enter Number Of Terms: ";
    cin>>n;

    cout<<"Fibonacci Series: ";

    for(int i=1;i<=n;i++)
    {
        if(i == 1)
        {
            cout<<T1<<", ";
            continue;
        }

        if(i == 2)
        {
            cout<<T2<<", ";
            continue;
        }

        NT = T1 + T2;
        T1 = T2;
        T2 = NT;

        cout<<NT<<", ";

    }
return 0;
}*/
