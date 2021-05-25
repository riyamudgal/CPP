#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i,j,temp;
    for (i = 0; i < n-1; i++)    
    {
    for (j = 0; j < n-i-1; j++)
    {
        if (arr[j] > arr[j+1])
        {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;

    }
    }
    }
}
void display(int arr[], int n)
{
    int i;
    for (i=0;i<n;i++)
    cout << arr[i]<<endl;
}

int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    int arr[n],i;
    cout<<"Enter array elements";
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<"Array before sorting ->";
    display(arr,n);
    bubbleSort(arr, n);
    cout<<"Array after sorting ->";
    display(arr, n);
    return 0;
}
