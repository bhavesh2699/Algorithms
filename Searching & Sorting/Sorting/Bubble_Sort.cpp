#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void bubble(int arr[],int n)
{   int i, j;  
    for (i = 0; i < n-1; i++)     
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);
	
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
	bubble(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
