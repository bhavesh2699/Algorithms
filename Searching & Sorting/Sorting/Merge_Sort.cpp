#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr,int l,int m,int h)
{
	int k1=m-l+1;
	int k2=m+h;
	int i,j,k;
	int L[k1],R[k2];
	for(i=0;i<k1;i++)
	 L[k1]=arr[l+i];
	 for(j=0;j<k1;j++)
	 R[k2]=arr[m+1+j];
	 
	while()
	{
		
	}
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
