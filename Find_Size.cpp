// C++ Program to Find Size of int, float, double and char in Your System

#include<iostream>
using namespace std;

int main()
{
    cout<<"Size Of Char => "<<sizeof(char)<<endl;
    cout<<"Size Of int => "<<sizeof(int)<<endl;
    cout<<"Size Of float => "<<sizeof(float)<<endl;
    cout<<"Size Of double => "<<sizeof(double)<<endl;

return 0;
}

/*
#include<iostream>
using namespace std;

class Size
{
    int a;
    float b;
    char c;
    double d;
public:
    void display()
    {
        cout<<"Size Of int => "<<sizeof(a)<<endl;
        cout<<"Size Of float => "<<sizeof(b)<<endl;
        cout<<"Size Of Char => "<<sizeof(c)<<endl;
        cout<<"Size Of double => "<<sizeof(d)<<endl;
    }
};

int main()
{
    Size S;
    S.display();

return 0;
}
*/