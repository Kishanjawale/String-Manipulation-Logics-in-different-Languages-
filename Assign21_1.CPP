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