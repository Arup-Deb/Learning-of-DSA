#include <bits/stdc++.h>
using namespace std;
int main()
{
		int n,p,arr[n];
		cin>>n>>p;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i] == p)
			{
			cout<<"1"<<endl;
			goto statement;
			}
		}
		cout<<"-1"<<endl;
		statement:
		cout<<"";
}
