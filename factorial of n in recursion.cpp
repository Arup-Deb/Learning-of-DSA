#include<bits/stdc++.h>
using namespace std;
int fun(int n){
	if(n==0)
	{
		return 1;
	}
	else
	{
	return n*fun(n-1);
}
}


int main()
{
	cout<<fun(5);
}
