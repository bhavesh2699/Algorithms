//TIME COMPLEXITY O((log log n))
#include <iostream>
#include <cmath>

using namespace std;
int jump(int arr[],int num,int size){
	int end=sqrt(size);
	int start=0;
	while(arr[end]<=num && end<size)
	{
		start=end;
		end+=sqrt(size);
	}
	for(int i=start;i<end;i++)
	{
		if(arr[i]==num)
		{
			return i;
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
  cout<<"Element"<<num<<"Found at:"<<finder;
  
  return 0;
}
