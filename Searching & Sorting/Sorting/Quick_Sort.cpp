//TIME COMPLEXITY O((log log n))
#include <iostream>
#include <cmath>

using namespace std;
int part(int arr[],int lower,int upper)
{   
    int i,j;
    
	
}

int sort(int arr[],int lower,int upper)
{
	
	
		if (lower<upper) 
        { 
            part(arr,lower,upper);
            
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
  int size = sizeof(arr) / sizeof(arr[0]);
  int finder=sort(arr,0,size);
  cout<<"Element"<<num<<"Found at:"<<finder;
  
  return 0;
}
