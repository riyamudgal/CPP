#include <bits/stdc++.h>
using namespace std;
 
int partition (int arr[], int lb, int ub)
{
    int pivot=arr[ub]; 
    int i=(lb-1); 
 
    for (int j =lb;j<=ub-1;j++)
    {
        if (arr[j] < pivot)
        {
            i++; 
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[ub]);
    return (i+1);
}
 

void quickSort(int arr[], int lb, int ub)
{
    if (lb<ub)
    {
        int pi = partition(arr,lb,ub);
 
        quickSort(arr,lb,pi-1);
        quickSort(arr,pi+1,ub);
    }
}
 
void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i]<<endl;
}
 

int main()
{
    int n;
    cout<<"Size of Array";
    cin>>n;
    int arr[n];
    cout<<"Array elements are->"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before sorting is :"<<endl;
    display(arr,n);
    
    quickSort(arr, 0, n - 1);
    cout<<"Sorted array: "<<endl;
    display(arr,n);
    return 0;
}
