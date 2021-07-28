// C++ Program to Calculate Sum of Natural Numbers

#include<iostream>
using namespace std;
int sum(int);

int main()
{
    int range;
    cout<<"Enter Range: ";
    cin>>range;

    int total = sum(range);

    cout<<"Total => "<<total<<endl;
return 0;
}

int sum(int n)
{
    if(n)
    {
        return (n+sum(n-1));          //Recursion
    }
}