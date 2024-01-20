/*Write a program which accept string from user and return 
difference between frequency of small characters and frequency of 
capital characters.
Input : “MarvellouS”
Output : 6 (8-2) */


#include<iostream>
#include<string>
using namespace std;

int difference(char *Arr)
{
    int iCntCapital=0;
    int iCntSmall=0;
    while (*Arr != '\0')
    {
        if( *Arr >='a' && *Arr <='z' )
        {
            iCntSmall++;
            
        }
        else if(*Arr >='a' && *Arr <='z')
        {
                iCntCapital++;
        }    
        Arr++;
    }
    
    return iCntSmall-iCntCapital;
}

int main()
{

    char Arr[200];
    int iRet=0;
    cout<<"Enter the String:"<<endl;
    std::cin.getline(Arr, sizeof(Arr));
    
    iRet=difference(Arr);
    cout<<"Difference Between Number of capital and Small  Letters:"<<iRet<<endl;

    return 0;

}