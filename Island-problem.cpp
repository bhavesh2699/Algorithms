#include<iostream>
#include<bits/stdc++.h>
#define R 5
#define C 5
using namespace std;
int isSafe(int arr[][C], int row, int col, bool visit[][C]) 
{ 
    
    return (row >= 0) && (row < R) && (col >= 0) && (col < C) && (arr[row][col] && !visit[row][col]); 
} 
int search(int arr[][C],int row,int col,bool visit[][C])
{
	static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
  
    visit[row][col] = true; 
  
    for (int k = 0; k < 8; ++k) 
        if (isSafe(arr, row + rowNbr[k], col + colNbr[k], visit)) 
            search(arr, row + rowNbr[k], col + colNbr[k], visit); 
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
    		{

    		search(arr,i,j,visit);
    		++count;
    	}
		}
	}
		
	return count;
}
int main()
{
	int arr[][C]={ { 1, 1, 0, 0, 0 }, 
                     { 0, 1, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 1 }, 
                     { 0, 0, 0, 0, 0 }, 
                     { 1, 0, 1, 0, 1 } }; 
                     
    cout<<"Islands:"<<call(arr);
}
