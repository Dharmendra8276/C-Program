// C++ Program to Find GCD(Greatest Common Divisor)/HCF(Highest Common Factor)
/*
#include<iostream>
using namespace std;

int main()
{
    int n1, n2, gcd;
    cout<<"Enter Number 1: ";
    cin>>n1;
    cout<<"Enter Number 2: ";
    cin>>n2;

    if(n2>n1)
    {
        int temp = n2;
        n2 = n1;
        n1 = temp;
        cout<<"######## After Swaping ########"<<endl;
        cout<<"Number 1 => "<<n1<<endl;
        cout<<"Number 2 => "<<n2<<endl;
    }

    for(int i = 1;i<=n2;i++)
    {
        if((n1%i == 0) && (n2%i == 0))
        {
            gcd = i;
        }
    }
    cout<<"GCD => "<<gcd<<endl;

return 0;
}
*/


#include<iostream>
using namespace std;

class GCD
{
    int N1, N2;
public:
    void get()
    {
        cout<<"Enter N1: ";
        cin>>N1;
        cout<<"Enter N2: ";
        cin>>N2;
    }
    void display()
    {
        cout<<"GCD => "<<endl;
    } 
};


int main()
{
    
return 0;
}