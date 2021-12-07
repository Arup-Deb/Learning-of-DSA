#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[3];
	for(int i=0;i<3;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+3);

	cout<<arr[1]<<endl;
return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 1, 9, 8, 5};
	//int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + 4);

	cout << "Array after sorting : \n";
	//for (int i = 0; i < 4; ++i)
	//	cout << arr[i] << " ";
cout<<arr[1];
	return 0;
}
*/
