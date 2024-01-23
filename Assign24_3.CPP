/*3.Write a program which accept string from user and accept one 
character. Return index of first occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 0*/

#include<iostream>
using namespace std;

const int NOT_FOUND =-1;
int  CharacterFirstOccurence(char *str, char ch)
{
    int iCnt =0;
    while (*str != '\0')  // Use '\0' instead of NULL
    {
        if (*str == ch)
        {
            return iCnt;
        }
        str++;
        iCnt++;
    }
    return NOT_FOUND;
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
    
    iReturns=CharacterFirstOccurence(Arr,ch);
    if(iReturns==NOT_FOUND)
    {
        cout<<"ERROR: Character is not presenrt in the string."<<endl;

    }
    else
    {
        cout<<"Entered charater's First Occurence is at position "<<iReturns<<endl;
    }
   
    return 0;
}

