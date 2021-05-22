#include<iostream>
using namespace std;
void display(int *arr, int n)
{
   for(int i = 0; i<n; i++)
      cout << arr[i] << " ";

}
void selectionSort(int *arr, int n) 
{
   int i, j, min,temp;
   for(i = 0; i<n-1; i++)
    {
      min = i;   
      for(j = i+1; j<n; j++)
      {
         if(arr[j] < arr[min])
            min = j;
      }
         temp=arr[i];
         arr[i]=arr[min];
         arr[min]=temp;
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           
   cout << "Enter array elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting-> "<<endl ;
   display(arr, n);
   selectionSort(arr, n);
   cout<<endl;
   cout << "Array after Sorting-> "<<endl;
   display(arr, n);
}
