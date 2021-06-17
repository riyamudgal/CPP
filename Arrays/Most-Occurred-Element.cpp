//if an element is there in list that occurs more than 1 time, then that element will be returned, otherwise the whole array
#include<iostream>
using namespace std;

void occurrence(int arr[], int n)
{
  int max_count = 0;
  cout<<"Most occurred number: ";
  for(int i=0;i<n;i++)
  {
   int count=1;
   for (int j=i+1;j<n;j++)
       if (arr[i]==arr[j])
           count++;
   if (count>max_count)
      max_count=count;
  }

  for (int i=0;i<n;i++)
  {
   int count=1;
   for (int j=i+1;j<n;j++)
       if (arr[i]==arr[j])
           count++;
   if (count==max_count)
       cout<<arr[i] << endl;
  }
 }
 
int main()
{   
  int n;
  cin>>n;
   int arr[n],i;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
    occurrence(arr, n);
  return 0;
}
