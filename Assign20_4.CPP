/*Accept Character from user and check whether it is small latter  or not 
(a-z).
Input : F
Output : FALSE
Input : d
Output : TRUE*/


#include<iostream>
#include<stdbool.h>
using namespace std;

bool CheckSmallLetter(char chr)
{
    if((chr >= 'a' && chr <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bret = false;

    cout << "Enter the Character: ";
    cin >> cValue;

    bret = CheckSmallLetter(cValue);

    if(bret)
    {
        cout << "It is a Small letter" << endl;
    }
    else  
    {
        cout << "It is not a small letter" << endl;
    }

    return 0;
}
