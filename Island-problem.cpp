#include<iostream>
#include<bits/stdc++.h>
#define R 5
#define C 5
using namespace std;
int isSafe(int arr[][C], int row, int col,bool visit[][C]) 
{ 
    
    return (row >= 0) && (row < R) && (col >= 0) && (col < C) && (arr[row][col] && !visit[row][col]); 
} 
int search(int arr[][C],int i,int j,bool visit[][C])
{
	static int rNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int cNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
  
    visit[i][j] = true; 
  
    for (int k = 0; k < 8; ++k) 
      {
		 if (isSafe(arr, i + rNbr[k], j + cNbr[k], visit)) 
            search(arr, i + rNbr[k], j + cNbr[k], visit); 
        }
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
