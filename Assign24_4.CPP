/*
Write a program which accept string from user and accept one 
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 11
*/


#include<iostream>
using namespace std;

const int NOT_FOUND = -1;

int  CharacterLastOccurence(char *str, char ch)
{
    int iCnt =0;
    int lastOccurence=NOT_FOUND;
    while (*str != '\0')  // Use '\0' instead of NULL
    {
        if (*str == ch)
        {
            lastOccurence = iCnt;
        }
        str++;
        iCnt++;
    }
    return lastOccurence;
}

int main()
{
    char Arr[200];
    int iReturns;
    char ch = '\0';

    cout << "Enter the String:" << endl;
    cin.getline(Arr, sizeof(Arr));

    cout << "Enter the character:" << endl;
    cin >> ch;
    
    iReturns=CharacterLastOccurence(Arr,ch);
    if(iReturns == NOT_FOUND)
    {
        cout<<"ERROR: Character is not presenrt in the string."<<endl;
        
    }
    else
    {
         cout<<"Entered charater's Last Occurence is at position "<<iReturns<<endl;
    }
   
    return 0;
}

