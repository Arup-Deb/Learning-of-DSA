//////////////////////class in c++////////////
#include<iostream>
using namespace std;

class student{
	public:
		string name;
		int age;
		bool gender;
		
		void printInfo(){
		
		cout<<"NAME = ";
		cout<<name<<endl;
		cout<<"AGE = ";
	     cout<<age<<endl;
		cout<<"GENDER = ";
	    cout<<gender<<endl;	
		}
};

int main()
{
	student arr[3];
	/*
	a.name = "Arup";
	a.age = 20;
	a.gender = 1;
	
	return 0;
	*/
	for(int i=0;i<3;i++){
		cout<<"NAME = ";
		cin>>arr[i].name;
		cout<<"AGE = ";
		cin>>arr[i].age;
		cout<<"GENDER = ";
		cin>>arr[i].gender;
	}
	
	for(int i=0;i<3;i++){
		arr[i].printInfo();
		1
	}
}
