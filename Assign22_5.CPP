/*Write a program which accept string from user and display it inn 
reverse order.
Input : “MarvellouS”
Output : “SuollevraM” */

#include<iostream>
#include<string>
using namespace std;

int Xstrlen(char *Arr)
{
    int iLength = 0; 
    while (*Arr != '\0')
    {
        iLength++;
        Arr++;
    }
    return iLength;
}

void revString(char *Arr)
{
    int Arr_Length = Xstrlen(Arr);

    for(int iCnt = Arr_Length-1; iCnt >= 0; iCnt--)
    {
        cout << Arr[iCnt];
    }
}

int main()
{
    char Arr[200];
    cout << "Enter the String:" << endl;
    cin.getline(Arr, sizeof(Arr));

    revString(Arr);
    return 0;
}
