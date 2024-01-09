./* Accept Character from user and check whether it is alphabet or not 
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE*/


#include<iostream>
#include<stdbool.h>
using namespace std;

bool CheckAlpha(char chr)
{
    if((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'))
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

    bret = CheckAlpha(cValue);

    if(bret)
    {
        cout << "It is a Character" << endl;
    }
    else  
    {
        cout << "It is not a Character" << endl;
    }

    return 0;
}
