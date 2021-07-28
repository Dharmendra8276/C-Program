// C++ Program to Find All Roots of a Quadratic Equation

#include<iostream>
#include<cmath>
using namespace std;

class Root
{
protected:
    float a, b, c, discriminant, X1, X2, real_part;
public: 
    Root()
    {
        cin>>a>>b>>c;
        discriminant = b*b - 4*a*c;
    }
};

class Root1 : public Root
{
public:
    Root1():Root()
    {
        if(discriminant > 0)
        {
            X1 = (-b + sqrt(discriminant)) / (2*a);
            X2 = (-b - sqrt(discriminant)) / (2*a);
            cout<<"Roots Are Real And Different."<<endl;
            cout<<"Root X1 => "<<X1<<endl;
            cout<<"Root X2 => "<<X2<<endl;
        }

        else if(discriminant == 0)
        {
            X1 = (-b/(2*a));
            cout<<"Roots Are Real And Equl."<<endl;
            cout<<"X1 = X2 => "<<X1<<endl;
        }

        else
        {
            real_part = -b/(2*a);
            cout<<"Roots Are Complex And Different."<<endl;
            cout<<"Root X1 => "<<real_part<<" + (sqrt("<<discriminant<<")/"<<2*a<<")i"<<endl;
            cout<<"Root X2 => "<<real_part<<" - (sqrt("<<discriminant<<")/"<<2*a<<")i"<<endl;
        }
    }
};

int main()
{
    Root1 R;
    
return 0;
}