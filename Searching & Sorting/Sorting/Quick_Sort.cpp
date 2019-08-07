#include <iostream>
#include <cmath>

using namespace std;
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
int partition (int arr[], int low, int upper)  
{  
    int pivot = arr[upper];
	int i=0; 
    
  
    for (int j = low; j <= upper - 1; j++)  
    {  
        
        if (arr[j] <= pivot)  
        { 
		  	if(j!=0)
	          {
				i++; 
	            swap(&arr[i], &arr[j]);
		      }
        }  
    }  
    swap(&arr[i + 1], &arr[upper]);  
    return (i + 1);  
}  
  

void quickSort(int arr[], int low, int upper)  
{  
    if (low < upper)  
    {  
       
        int pi = partition(arr, low, upper);  
  
        
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, upper);  
    }  
}  
  

void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
int main() {
	int i,n,num;
  cout<<"enter number of elements in array:"<<endl;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
  	cin>>arr[i];
  }
  int size = sizeof(arr) / sizeof(arr[0]);
  quickSort(arr,0,size);
  printArray(arr,size);
  
  return 0;
}
