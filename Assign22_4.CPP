/*Write a program which accept string from user and check whether 
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE */


#include<iostream>
#include<string>
using namespace std;

bool ChkVovel(char *Arr)
{
    int iCntCapital=0;
    int iCntSmall=0;
    while (*Arr != '\0')
    {

        if( *Arr =='a' || *Arr =='e'
            ||*Arr =='i'||*Arr =='o'
            ||*Arr =='u'||*Arr =='A'
            ||*Arr =='E'|| *Arr =='I'
            ||*Arr =='O'||*Arr =='U' )
        
        {
            return true;
            
        }
        Arr++;
    }
    
    return false;
}

int main()
{

    char Arr[200];
    bool bRet=true;

    cout<<"Enter the String:"<<endl;
    std::cin.getline(Arr, sizeof(Arr));
    
    bRet=ChkVovel(Arr);
    if(bRet==true)
    {
        cout<<"Above String Contains a Vowel"<<endl;
    }
    else
    {
        cout<<"Above String Do Not Contains a Vowel"<<endl;
    }
    return 0;

}