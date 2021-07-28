#include<iostream>
using namespace std;

class Reverse
{
    int num, reminder, RN = 0;     //RN = Reverse Number
public:
    void get()
    {
        cout<<"Enter a Number Which you want to reverse Number: ";
        cin>>num;
    }
    friend void reverse(Reverse R);
};

void reverse(Reverse R)
{
    while(R.num != 0)
    {
        R.reminder = R.num%10;
        R.RN = R.RN*10 + R.reminder;
        R.num /= 10;
    }
    cout<<"Reversed Number => "<<R.RN<<endl;
}

int main()
{
    Reverse R;
    R.get();
    reverse(R);
    
return 0;
}