/*Write a program which accept string from user and accept one 
character. Return frequency of that character.
Input : “Marvellous Multi OS”
M
Output : 2*/

#include<iostream>
using namespace std;

int  CounCharacter(char *str, char ch)
{
    int iCnt =0;

    while (*str != '\0')  // Use '\0' instead of NULL
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[200];
    int iReturns=0;
    char ch = '\0';

    cout << "Enter the String:" << endl;
    cin.getline(Arr, sizeof(Arr));

    cout << "Enter the character:" << endl;
    cin >> ch;

    iReturns= CounCharacter(Arr, ch);
    if(iReturns==0)
    {
        cout<<"Error: Entered Character is not present in entered String."<<endl;
    }
    else
    {
        cout<<ch<<" Chacter is present in string "<<iReturns<< " times"<<endl;
    }
    return 0;
}

