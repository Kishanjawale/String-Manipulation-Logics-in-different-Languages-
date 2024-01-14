#include<iostream>
using namespace std;

// Use boolean values directly instead of BOOL
#define TRUE true
#define FALSE false

bool ChkSpecial(char ch)
{
    // Use single quotes for characters
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return true;
    }
    return false;
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    // Use double quotes for string literals
    cout << "Enter the character: ";
    cin >> cValue;

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        cout << "It is a special character";
    }
    else
    {
        cout << "It is not a special character";
    }

    return 0;
}
