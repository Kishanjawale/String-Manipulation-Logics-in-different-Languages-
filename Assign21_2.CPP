/*Accept character from user. If character is small display its 
corresponding capital character, and if it small then display its 
corresponding capital. In other cases display as it is.*/

#include<iostream>
using namespace std;

void display(char Cvalue)
{
    char NewcValue='\0';
    if(Cvalue >='A' && Cvalue <='Z')
    {   
        NewcValue = Cvalue + 32;
        cout<<"New:"<<NewcValue;
    }
    else if(Cvalue >= 'a' && Cvalue <= 'z' )
    {
        NewcValue = Cvalue - 32;
        cout<<"New:"<<NewcValue;
    }
    else
    {
        cout<<"Same as old:"<<Cvalue;
    }
}

int main()
{
    char cValue='\0';
    cout<<"Enter the Character:"<<endl;
    cin>>cValue;

    display(cValue);
    return 0;
}