#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    cin>>str;
    int i;
    for(i=0;i<str.length();i++)
    {
        if (str[i] >= 65 || str[i+1] <= 90)
        {
            cout<<"Yes";
            break;
        }
        else 
        {
            cout<<"No";
            break;
        }
    }
    return 0;
}
