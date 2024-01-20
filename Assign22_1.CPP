/*Write a program which accept string from user and count number of 
capital characters.
Input : “Marvellous Multi OS”
Output : 4    */

#include<iostream>
#include<string>
using namespace std;


int CountCapitalLetters(char * Arr)
{
    int iCnt=0;
    while (*Arr != '\0')
    {
        if( *Arr >='A' && *Arr <='Z' )
        {
            iCnt++;
        }

        Arr++;
    }
    
    return iCnt;
}

int main()
{

    char Arr[200];
    int iRet=0;
    cout<<"Enter the String:"<<endl;
    std::cin.getline(Arr, sizeof(Arr));
    
    iRet=CountCapitalLetters(Arr);
    cout<<"Number of Capital Letters:"<<iRet<<endl;

    return 0;

}