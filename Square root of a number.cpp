#include<iostream>
using namespace std;

class solution{
	public:
 long long int floorsqrt( long long int x)
	{
		long long s=0;long long e=x;
		while(s<=e)
		{
			long long mid = (s+e)/2;
			if((mid)*(mid)==x)
			{
				return mid;
			}
			else if((mid)*(mid)>x)
			{
				e = mid-1;
			}
			else if((mid)*(mid)<x)
			{
				s= mid+1;
				if((mid+1)*(mid+1)>x)
				{
					return mid;
				}
			}
		}
	 } 
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
	long long n;cin>>n;
	
	solution obj;
	cout << obj.floorsqrt(n) <<endl;
}
return 0;
}
