/*Write a program which accept string from user and count number of 
small characters.
Input : “Marvellous”
Output : 9    */


#include<iostream>
#include<string>
using namespace std;


int CountSmallLetters(char * Arr)
{
    int iCnt=0;
    while (*Arr != '\0')
    {
        if( *Arr >='a' && *Arr <='z' )
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
    
    iRet=CountSmallLetters(Arr);
    cout<<"Number of Small Letters:"<<iRet<<endl;

    return 0;

}