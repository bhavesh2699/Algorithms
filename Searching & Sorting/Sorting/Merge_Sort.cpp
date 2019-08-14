#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mergeSort(int arr[],int l,int m,int h)
{
	int k1=m-l+1;
	int k2=h-m;
	int i,j,k;
	int L[k1],R[k2];
	for(i=0;i<k1;i++)
	 L[k1]=arr[l+i];
	 for(j=0;j<k1;j++)
	 R[k2]=arr[m+1+j];
	 
	 i=0,j=0,k=l;
	 
	while(i<k1 && j<k2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while (i < k1) 
    { 
        arr[k1] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < k2) 
    { 
        arr[k2] = R[j]; 
        j++; 
        k++; 
    } 
}
void merge(int arr[],int l,int h)
{   
	if(l<h)
	{   int mid=l+(h-l)/2;
		merge(arr,l,mid);
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
