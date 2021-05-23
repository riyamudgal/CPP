#include<iostream>
using namespace std;
 
 int main()
 {
     int n;
     cin>>n;
     int arr[n], min,max,i;
     for(i=0;i<n;i++)
     {
        cin>>arr[i]; 
     }
     if(arr[0]<arr[1])
     {
         max=arr[1];
         min=arr[0];
     }
     else
     {
         max=arr[0];
         min=arr[1];
     }
     for(i=2;i<n;i++)
     {
         if(arr[i]>max)
         {
             max=arr[i];
         }
         
         if(arr[i]<min)
         {
             min=arr[i];
         }
     }
     cout<<"Maximum= "<<max;
     cout<<endl;
     cout<<"Minimum= "<<min;
 }
