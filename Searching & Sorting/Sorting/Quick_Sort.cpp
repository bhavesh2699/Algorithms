//TIME COMPLEXITY O((log log n))
#include <iostream>
#include <cmath>

using namespace std;
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int partition (int arr[], int low, int upper)  
{  
    int pivot = arr[upper];
	int i=0; // pivot  
    
  
    for (int j = low; j <= upper - 1; j++)  
    {  
        // If current element is smaller than or  
        // equal to pivot  
        if (arr[j] <= pivot)  
        { 
		  	if(j!=0)
	          {
				i++; // increment index of smaller element  
	            swap(&arr[i], &arr[j]);
		      }
        }  
    }  
    swap(&arr[i + 1], &arr[upper]);  
    return (i + 1);  
}  
  
/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(int arr[], int low, int upper)  
{  
    if (low < upper)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, upper);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, upper);  
    }  
}  
  
/* Function to print an array */
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
