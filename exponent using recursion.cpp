#include<bits/stdc++.h>
using namespace std;
//slow version to find power
/*
int fun(int m, int n){
	if(n==0)
	{
		return 1;
	}
	else
	{
	return pow(m,n-1)*m;
}
}
*/
int pow(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n%2==0)
	{
		return pow(m*m,n/2);
	}
		else
		return m*pow(m*m,(n-1)/2);
	}



int main()
{
	cout<<pow(5,3);
}
