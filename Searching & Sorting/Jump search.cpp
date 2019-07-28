//TIME COMPLEXITY O(n)
#include <iostream>
#include <cmath>

using namespace std;
int jump(int arr[],int num,int size){
	int step=sqrt(size);
	int prev=0;
	for(int i=0;i<size;i++)
	{   if(arr[step-1]<num)
		{
				prev=step;
				step+=sqr;
				
				if(arr[step])
		}

	}
}
int main() {
	int i,n,num;
  cout<<"enter number of elemnts in array:"<<endl;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
  	cin>>arr[i];
  }
  cout<<"enter number to find in array:"<<endl;
  cin>>num;
  int size = sizeof(arr) / sizeof(arr[0]);
  int finder=jump(arr,num,size);
  
  return 0;
}
