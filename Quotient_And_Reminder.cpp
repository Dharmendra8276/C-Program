// C++ Program to Find Quotient and Remainder

#include<iostream>
using namespace std;

int main()
{
    int dividend, divisor, quotient, reminder;

    cout<<"Enter Dividend: ";
    cin>>dividend;
    cout<<"Enter Divisor: ";
    cin>>divisor;

    quotient = dividend/divisor;
    cout<<"Quotient => "<<quotient<<endl;

    reminder = dividend%divisor;
    cout<<"Reminder => "<<reminder<<endl;

return 0;
}

/*
#include<iostream>
using namespace std;

class Number
{
    int dividend, divisor, quotient, reminder;
public:
    void set()
    {
        cout<<"Enter Dividend: ";
        cin>>dividend;

        cout<<"Enter Divisor: ";
        cin>>divisor;

    }
    friend void print(Number O);

};
void print(Number O)
{
    O.quotient = O.dividend / O.divisor;
    cout<<"Quotient => "<<O.quotient<<endl;

    O.reminder = O.dividend % O.divisor;
    cout<<"Reminder => "<<O.reminder<<endl;
}

int main()
{
    Number O;
    O.set();
    print(O);
    
return 0;
}
*/