/*Accept character from user. If it is capital then display all the 
characters from the input characters till Z. If input character is small 
then print all the characters in reverse order till a. In other cases 
return directly..*/

#include<iostream>
using namespace std;

void display(char Cvalue)
{
    char CCnt='\0';
    if(Cvalue >='A' && Cvalue <='Z')
    {   
        for(CCnt=Cvalue;CCnt <='Z';CCnt++)
        {
            cout<<"\t"<<CCnt;
        }
        
    }
    else if(Cvalue >= 'a' && Cvalue <= 'z' )
    {
       for(CCnt=Cvalue;CCnt >='a';CCnt--)
        {
            cout<<"\t"<<CCnt;
        }
    }
    else
    {
        cout<<"Invalid Input..."<<endl;
        return;
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