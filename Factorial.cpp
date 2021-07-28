// C++ Program to Find Factorial

#include<iostream>
using namespace std;
int fact(int num);

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
   
    cout<<"Factorial => "<<fact(n)<<endl;

return 0;
}

int fact(int num)
{
    if(num == 0)
    {
        return 1;
    }
    else
    {
        return (num*fact(num-1));
    }
}

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    long factorial = 1;

    cout<<"Enter Number: ";
    cin>>n;

    if(n<0)
    {
        cout<<"Factorial is not possible"<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            factorial *= i;
        }
        cout<<"Factorial Of "<<n<<" = "<<factorial<<endl;
    }

return 0;
}
*/