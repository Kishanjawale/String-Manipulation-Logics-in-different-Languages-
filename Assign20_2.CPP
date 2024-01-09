/*Accept Character from user and check whether it is capital or not 
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE*/


#include<iostream>
#include<stdbool.h>
using namespace std;

bool CheckCapital(char chr)
{
    if((chr >= 'A' && chr <= 'Z'))
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

    bret = CheckCapital(cValue);

    if(bret)
    {
        cout << "It is a Capital letter" << endl;
    }
    else  
    {
        cout << "It is not a Capital letter" << endl;
    }

    return 0;
}
