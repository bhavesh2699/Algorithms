#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insert(int arr[],int n)
{   int i,j,temp=0;
	for (i = 1; i < n; i++) 
    {  
        temp = arr[i];  
        for(j=i-1;j >= 0 && arr[j] > temp;j--)
        {  
          
				arr[j + 1] = arr[j];  
	            
        } 
        arr[j + 1] = temp; 
		 
 
    }  
	
}
int main()
{   int n,s;
	cout<<"enter size of array";
	cin>>n;
	int *arr=new int[n];
	cout<<"enter values";
	for(int i =0;i<n;i++)
	{   cin>>s;
		arr[i]=s;
	}
	insert(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
