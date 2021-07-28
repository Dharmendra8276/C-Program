// C++ Program to Add Two Numbers

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int c = a+b;
    cout<<"Sum => "<<c;

return 0;
}


/*
#include<iostream>
using namespace std;

class ADD
{
    int a, b;
public:
    //Default Constructor
    ADD():a(0), b(0)
    {
        //a = 0; b = 0;
    }
    //Parameterized Constructor
    ADD(int x, int y):a(x), b(y)
    {
        //a = x;   b = y;
    }
    //copy constructor
    ADD(ADD & O)
    {
        a = O.a;
        b = O.b;
    }
    int sum();
    void display()
    {
        cout<<"SUM => "<<sum()<<endl;
    }
};

//if We declare function sum as void then error is generated in line no 42
int ADD::sum()
{
    int c = a + b;
}

int main()
{
    ADD o1, o2(12, 20), o3(o2);
    o1.display();
    o2.display();
    o3.display();
    
return 0;
}
*/