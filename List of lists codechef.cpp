#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, sum=0,h=-1;
		cin>>n;
		map<int,int> count;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			count[temp]++;
		}
		for(auto x: count)
		{
			if(h < x.second) h = x.second;
			sum+=x.second;
		}
		if(h == n) cout<< "0"<<endl;
		else if(h<=1 && n>= 2) cout<<"-1"<<endl;
		else cout<<(sum-h+1) <<endl;
	}
	return 0;
}
