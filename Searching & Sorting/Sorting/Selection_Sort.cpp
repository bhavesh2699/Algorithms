#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *first,int *second)
{
	int temp;
	temp=*first;
	*first=*second;
	*second=temp;
}
void select(int arr[],int n)
{   int min=0,i,j;
	for(i=0;i<n;i++)
	{   min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			   min=j;
		}
		swap(&arr[i],&arr[min]);
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
	select(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
