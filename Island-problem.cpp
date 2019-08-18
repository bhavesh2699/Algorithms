#include<iostream>
#include<bits/stdc++.h>
#define R 5
#define C 5
using namespace std;
int search(int arr[][C],int i,int j,bool visit[][C])
{
	
}
int call(int arr[][C])
{
	bool visit[R][C];
	memset(visit,0,sizeof(visit));
	int count =0;
	for(int i=0;i<R;i++)
    {
    	for(int j=0;j<C;j++)
    	{
    		if(arr[i][j] && !visit[i][j])
    		search(arr,i,j,visit);
    		count++;
		}
	}
	
	
	
	
	
	return count;
}
int main()
{
	int arr[R][C]={ { 1, 1, 0, 0, 0 }, 
                     { 0, 1, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 1 }, 
                     { 0, 0, 0, 0, 0 }, 
                     { 1, 0, 1, 0, 1 } }; 
                     
    cout<<"Islands:"<<call(arr);
}
