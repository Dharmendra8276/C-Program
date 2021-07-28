// C++ Program to Print Number Entered by User

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter Number: ";
    cin>>a;

    cout<<"Number => "<<a;

return 0;
}

/*
#include<iostream>
using namespace std;

class Number
{
    int a;
public:
    Number()
    {
        a = 0;
    }
    Number(int i)
    {
        a = i;
    }
    void display()
    {
        cout<<"Number => "<<a<<endl;
    }
};

int main()
{
    Number O1, O2(15);
    O1.display();
    O2.display();

return 0;
}
*/