#include <bits/stdc++.h>
using namespace std; 
class Fruit
{ public:
string color,taste,name;
 double price;
// Member Functions() 
void setData(string n, string c, string t, double p)
{
 name = n; 
 color =c;
  taste = t; 
  price = p;
}
void getName()
{
 cout << "Name of the fruit is : " << name << endl;
}
};
int main() { 
string color,taste,name; 
double price; 
cout << "Enter fruit name:" << endl;
 cin >> name; 
 cout << "Enter color:" << endl;
  cin >> color;
   cout << "Enter taste:" << endl;
    cin >> taste; 
     cout << "Enter price per kg:" << endl;
    cin >> price; 
	Fruit obj;
obj.setData(name,color,taste,price);
 obj.getName();
return 0;
}


