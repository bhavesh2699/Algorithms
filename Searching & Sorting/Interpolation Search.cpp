//TIME COMPLEXITY O((log log n))
#include <iostream>
#include <cmath>

using namespace std;
int inter(int arr[],int num,int size)
{
	int start=0,end=size-1;
	while(start<=end && arr[start]<=num && arr[end]>=num)
	{
		if (start == end) 
        { 
            if (arr[start] == num) return start; 
            return -1; 
        } 
       
        int pos = start + (((double)(end - start)*(num - arr[start]) / 
            (arr[end] - arr[start]))); 
  
        if (arr[pos] == num) 
            return pos; 
  
        if (arr[pos] < num) 
            start = pos + 1; 
  
        else
            end = pos - 1;
	}
	return -1;
	
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
  cout<<"enter number to find in array:"<<endl;
  cin>>num;
  int size = sizeof(arr) / sizeof(arr[0]);
  int finder=inter(arr,num,size);
  cout<<"Element"<<num<<"Found at:"<<finder;
  
  return 0;
}
