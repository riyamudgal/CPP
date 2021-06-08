#include <iostream>
#include <string>
using namespace std;

int main()
{
  //accessing string Characters
  string myString = "Hello";
  cout << myString[0];
  
  //Changing string character
  string str = "Week";
  str[2] = 'a';
  cout << str;
  
 //string concatenation 
 string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName;
  
//
 string x = "10";
int y = "20";
string z = x + y;
  cout<<z;
  
  return 0;
}
