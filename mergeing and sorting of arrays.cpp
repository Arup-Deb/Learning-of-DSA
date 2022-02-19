#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int brr[],int crr[10])
{
	int i=0,j=0,k=0;
	
	while(i<5 && j<5)
	{
		if(arr[i]<brr[j])
		{
			crr[k++]=arr[i++];
		}
		else
		{
			crr[k++]=brr[j++];
		}
	}
	while(i<5)
	{
		crr[k++]=arr[i++];
		
	}
	while(j<5)
	{
		crr[k++]=brr[j++];
		
	}
	

}
int main()
{
	int arr[5]={0,2,4,6,9};
	int brr[5]={1,3,5,7,8};
	int crr[10];
	solve ( arr, brr,crr);
	
	for(int i=0;i<10;i++)
	{
		cout<<crr[i]<<" ";
	}
}
