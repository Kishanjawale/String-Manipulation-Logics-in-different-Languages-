/*
Write a program which accept string from user and accept one 
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
*/


#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckChar(char *str, char ch)
{
    while (*str != '\0')  // Use '\0' instead of NULL
    {
        if (*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char Arr[200];
    BOOL bRet = FALSE;  // Use BOOL instead of bool
    char ch = '\0';

    cout << "Enter the String:" << endl;
    cin.getline(Arr, sizeof(Arr));

    cout << "Enter the character:" << endl;
    cin >> ch;

    bRet = CheckChar(Arr, ch);
    if (bRet == TRUE)
    {
        cout << "Character is present..." << endl;
    }
    else
    {
        cout << "Character is not present..." << endl;
    }
    return 0;
}
