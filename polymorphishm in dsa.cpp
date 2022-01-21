/* Function Overloading
#include<bits/stdc++.h>
using namespace std;

class ApnaCollege
{
	public:
		void fun()
		{
			cout<<"I am function with no arguments"<<endl;
		}
		
		void fun(int x)
		{
			cout<<"I am function with int arguments"<<endl;
		}
		
		void fun(double x)
		{
			cout<<"I am function with double arguments"<<endl;
		}
};

int main()
{
	ApnaCollege obj;
	obj.fun();
	obj.fun(4);
	obj.fun(6.2);
}
*/
/*    operator overloaing
#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
	int  real,img;
	public:
         Complex(int r=0,int i=0){
         	real = r;
         	img = i;
	}	
	
	Complex operator + (Complex const &obj){
		Complex res;
		res.img = img + obj.img;
		res.real = real + obj.real;
		return res;
	}
	
	void display(){
		cout<<real<<" + i"<<img<<endl;
	}
};

int main()
{
	
	Complex c1(12,7), c2(6,7);
	Complex c3 = c1 + c2;
	c3.display();
	return 0;
	
}
*/
#include<bits/stdc++.h>
using namespace std;

class base
{
	public:
		virtual void print(){
			cout<<"this is the base class's print function"<<endl;
		}
		
		void display(){
			cout<<"this is the base class's display function"<<endl;
		}
};

class derived: public base
{
	public:
	void print(){
			cout<<"this is the derived class's print function"<<endl;
		}
		
		void display(){
			cout<<"this is the derived class's display function"<<endl;
		}	
};


int main()
{
	base *baseptr;
	derived d;
	baseptr = &d;
	
	baseptr -> print();
	
	baseptr -> display();
	return 0;
}

