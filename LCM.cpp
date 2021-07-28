// C++ Program to Find LCM(Lowest Common Multiple)
#include<iostream>
using namespace std;

class LCM
{
    int m, n, MAX;
public:
    void get()
    {
        cout<<"Enter m And n: "<<endl;;
        cin>>m>>n;
    }
    void Find_LCM()
    {
        MAX = (m>n) ? m : n;
        do
        {
            if(MAX%m == 0 && MAX%n == 0)
            {
                cout<<"LCM => "<<MAX<<endl;
                break;
            }
            else
            {
                MAX++;
            }
        } while (1);
        
    }
};


int main()
{
    LCM OBJ;
    OBJ.get();
    OBJ.Find_LCM();
    
return 0;
}