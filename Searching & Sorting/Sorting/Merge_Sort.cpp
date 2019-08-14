#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr,int l,int m,int h)
{
	int k1=m-l+1;
	int k2=m+h;
	
}
void merge(int arr[],int l,int h)
{   int mid=(l+h)/2;
	if(l<h)
	{
		merge(arr,l,h);
		merge(arr,mid+1,h);
		mergeSort(arr,l,mid,h);
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
	merge(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
