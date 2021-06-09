#include<iostream>
#include<string> 
using namespace std;
int main()
{
    string str,str2;
  
    getline(cin,str);                               // Taking string input using getline()
    cout<<"The initial string is -> ";
    cout<<str<<endl;
   
    str.push_back('s');                                  // Using push_back() to insert a character at end
    cout<<"The string after push_back operation is -> ";
    cout<<str<<endl;
 
    str.pop_back();                                 // Using pop_back() to delete a character from end
    cout<<"The string after pop_back operation is -> ";
    cout<<str<<endl;
  
    cout<<"The length of the string is :"<<str.length()<<endl;
  
    char ch[80];
  
    str1.copy(ch,13,0);                                   //// using copy() to copy elements into char array, 13 is length to be copied, 0 is position in string to start copying

    cout<<"The new copied character array is -> ";
    cout<<ch;
    
    cout<<"The 1st string before swapping is : ";
    cout<<str<<endl;
    cout<<"The 2nd string before swapping is : ";
    cout<<str2<<endl;
  
    str.swap(str2);
 
    cout<<"The 1st string after swapping is : ";
    cout<<str<<endl;
    cout<<"The 2nd string after swapping is : ";
    cout<<str2<<endl;
 
    return 0;
 
}
