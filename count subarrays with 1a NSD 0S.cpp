#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countsubbrray(int arr[], int n)
    {
        //Your code here
        int f=0;
        for(int i=0;i<n;i++)
        {
            int c=0,e=0;
            for(int j=i;j<n;j++)
            {
                if(arr[j]==0)
                {
                    c++;
                    cout<<"C is"<<c<<endl;
                }
                if(arr[j]==1)
                {
                    e++;
					cout<<"E is"<<e<<endl;
                }
                if(c==e)
                {
                    f++;
                    cout<<"F is"<<f<<endl;
                }
                
            }
        }
        return f;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
			Solution obj;
			cout<<obj.countsubbrray(arr, n)<<endl;
	}
		return 0;
}
