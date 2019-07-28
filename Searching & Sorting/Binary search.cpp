//TIME COMPLEXITY O(n)
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;
int find(int x,int l, int r,int arr[])
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2;       
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return find(x, l, mid - 1, arr); 
  
        return find(x, mid + 1, r, arr); 
    } 
    return -1;
}
void swap(int *r,int *l)
{
	int temp=*r;
	*r=*l;
	*l=temp;
}

void sort(int arr[],int n)
{ 
   int i, j; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swap(&arr[j], &arr[j+1]); 
           swapped = true; 
        } 
     } 
}
}

int main() {
  int size,value;
  cout << "Enter size of array:";
  cin>>size;
  int arr[size];
  
  for(int i=0;i<size;i++)
  {
  	cin>>arr[i];
  	cout<<endl;
  }
  sort(arr,size);
  for(int i=0;i<size;i++)
  {
  	cout<<arr[i];
  
  }
  
  cout << "Enter value to be searched:";
  cin>>value;
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<n;
  int result=find(value,0,n-1,arr);
  (result==-1)?cout<<"cannot find":cout<<"element found at:"<<result; 
   
  	
  
  return 0;
}

