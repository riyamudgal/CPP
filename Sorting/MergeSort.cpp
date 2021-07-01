#include<iostream>
using namespace std;


void merge(int a[], int lb, int mid, int ub)
{   
    int b[10];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];  
    }  
}
    
void mergeSort(int a[], int lb, int ub)
{
    if (lb>=ub)
        return;
  
    int mid = (lb+ub)/2;
    mergeSort(a,lb, mid);
    mergeSort(a, mid + 1,ub);
    merge(a,lb, mid, ub);
}
void print(int a[], int size)
{
    for (int i=0;i<size;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int arr[10];
    cout<<"Enter array elements : "<<endl;
    
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    int size =10;
    cout<<"Given array is :"<<endl;
    print(arr,size);
  
    mergeSort(arr,0,size-1);

    cout<<endl<<"Sorted array is :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
