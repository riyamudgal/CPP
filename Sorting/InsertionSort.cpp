#include <iostream>
using namespace std;

 
void insertionSort(int arr[], int n)
{
    int i,temp,j;
    for (i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1] = temp;
    }
}
void display(int arr[], int n)
{
    int i;
    for (i=0;i<n;i++)
    cout<<arr[i]<<endl;
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
 
    cout<<"Array before sorting is";
    display(arr, n);

    insertionSort(arr, n);
    cout<<"Array after sorting is";
    display(arr, n);
 
    return 0;
}
