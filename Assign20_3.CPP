/*
Accept Character from user and check whether it is digit or not 
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/
#include<iostream>
#include<stdbool.h>
using namespace std;

bool CheckDigit(char chr)
{
    if((chr >= '0' && chr <= '9'))
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

    bret = CheckDigit(cValue);

    if(bret)
    {
        cout << "It is a Digit" << endl;
    }
    else  
    {
        cout << "It is not a Digit" << endl;
    }

    return 0;
}
