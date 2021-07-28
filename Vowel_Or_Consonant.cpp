// C++ Program to Check Whether a character is Vowel or Consonant.

#include<iostream>
using namespace std;

class Check
{
    char ch, lowercase_vowel, uppercase_vowel;
public:
    void get()
    {
        cout<<"Enter Char: ";
        cin>>ch;
    }
    void character()
    {
        lowercase_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
        uppercase_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
        if(lowercase_vowel || uppercase_vowel)
        {
            cout<<"vowel"<<endl;
        }
        else
        {
            cout<<"consonant"<<endl;
        }
    }
};

int main()
{
    Check O;
    O.get();
    O.character();
    
return 0;
}