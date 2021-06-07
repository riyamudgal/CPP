#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String"<<endl;
    cin>>str;
    cout<<"String Before reversing is ->"<<endl<<str<<endl;
    int i,index=0;
    string temp=str;                                                   
    for(i=str.length()-1;i>=0;i--)
    {
        str[index]=temp[i];
        index++;
    }
    cout<<"String After Reversing is ->"<<endl;
    cout<<str;

    return 0;
}
