//TIME COMPLEXITY O(n)
#include <iostream>
using namespace std;
int find(int value,int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
  	if(arr[i]==value)
  	{ 
		 return i;	
	}

  }
  return -1;
}
int main() {
  int size,arr[50],value;
  cout << "Enter size of array:";
  cin>>size;
  
  for(int i=0;i<size;i++)
  {
  	cin>>arr[i];
  	cout<<endl;
  }
  cout << "Enter value to be searched:";
  cin>>value;
  int result=find(value,arr,size);
  (result==-1)?cout<<"cannot find":cout<<"element found at:"<<result;
  
  	
  
  return 0;
}
