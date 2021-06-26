#sort function
#unique function
#distance function
#Erase function
#Clear function

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   vector<int> vec;
   vec.push_back(56);
   vec.push_back(5);
   vec.push_back(16);
   vec.push_back(87);
   vec.push_back(90);
   vec.push_back(12);
   vec.push_back(34);
  vec.push_back(87);
   vec.push_back(34);
   vec.push_back(16);
   vec.push_back(56);
   vec.push_back(5);
   vec.push_back(87);
   vec.push_back(34);
   vec.push_back(16);

   
   for( int i =0;i<vec.size();i++)
   {
       cout<<vec[i]<<endl;
   }
   sort(vec.begin(), vec.end());
   cout<<"Vector after applying sort function->"<<endl;
    for( int i =0;i<vec.size();i++)
   {
       cout<<vec[i]<<endl;
   }
   
   cout<<"Removing duplicates from vector->"<<endl;
   sort(vec.begin(), vec.end());
    vector<int>::iterator ip;
  
    ip = unique(vec.begin(), vec.end());
    vec.resize(distance(vec.begin(), ip));
   for (ip=vec.begin();ip!=vec.end();ip++)
   {
       cout<<*ip<<endl;
   }

vector<int> v;
   v.push_back(12);
   v.push_back(32);
   v.push_back(87);
   v.push_back(54);
   v.push_back(10);
   
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i];
       cout<<endl;
   }
   cout<<"clear() function is used to remove all the elements of the vector container, thus making it size 0. ";
   v.clear();
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i];
       cout<<"No output";
       break;
   }
   cout<<endl<<v.size();
   

vector<int> v1;
   v1.push_back(10);
   v1.push_back(34);
   v1.push_back(80);
   v1.push_back(62);
   v1.push_back(87);
   v1.push_back(77);
   v1.push_back(28);
   
   cout<<endl<<"Second vector"<<endl;
   for(int i=0;i<v1.size();i++)
   {
       cout<<v1[i]<<endl;
   }
   cout<<"erase() function is used to remove elements from a container from the specified position or range.";
   cout<<"Removing the first element";
   v1.erase(v1.begin());
   cout<<"New vector"<<endl;
   for(int i=0;i<v1.size();i++)
   {
       cout<<v1[i]<<endl;
   }
    
    cout<<"Removing the last element";
   v1.erase(v1.end());
   cout<<"New vector"<<endl;
   for(int i=0;i<v1.size();i++)
   {
       cout<<v1[i]<<endl;
   }

   
   return 0;
}
   return 0;
}
