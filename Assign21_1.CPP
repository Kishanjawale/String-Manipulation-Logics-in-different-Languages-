/*Write a program which displays ASCII table. Table contains symbol, 
Decimal, Hexadecimal and Octal representation of every member from 
0 to 255 */
#include<iostream>
#include<cstdio>
using namespace std;

void DisplayAsciiTable()
{
    int iCnt=0;
    cout<<"ASCII TABLE:"<<endl;
    cout<<"Symbol   Decimal     Hexadecimal     Octal  "<<endl;

    for(iCnt=0;iCnt<=255;iCnt++)
    {
        char Symbol = static_cast<char>(iCnt);
        printf("%c           %d           %x             %o\n",Symbol,iCnt,iCnt,iCnt);
    }
}
int main()
{
    DisplayAsciiTable();
    return 0;

}
