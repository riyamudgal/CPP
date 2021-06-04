#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct student 
{
    int age;
    string first_name;
    string last_name;
    int std;
};
int main()
{
    struct student st;
    cin>>st.age;
    cin>>st.first_name;
    cin>>st.last_name;
    cin>>st.std;
    
    
    cout<<st.age<<" "<<st.first_name<<" "<<st.last_name<< " "<<st.std;
    return 0;
}
