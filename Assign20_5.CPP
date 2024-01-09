/* Accept division of student from user and depends on the division 
display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM*/


#include<iostream>
#include<stdbool.h>
using namespace std;

void  DisplaySchedule(char chr)
{
    if((chr == 'A' || chr == 'a'))
    {
        cout<<"Exam Time : 7AM ";
    }
    else if((chr == 'B' || chr == 'b'))
    {
        cout<<"Exam Time : 8:30 AM ";
    }
    else if((chr == 'C' || chr == 'c'))
    {
        cout<<"Exam Time : 9:20 AM ";
    }
    else if((chr == 'D' || chr == 'd'))
    {
        cout<<"Exam Time : 10:30 AM ";
    }
    else 
    {
        cout<<"Invalid Division Entered";
    }
    
}

int main()
{
    char cValue = '\0';
    cout << "Enter the Character: ";
    cin >> cValue;
    DisplaySchedule(cValue);
    return 0;
}
