#include<bits/stdc++.h>
using namespace std;

void fun(int a[]) {

    cout << a[0] << " ";
}

int main() {
    int a[] = {1,3, 5, 4};
    fun(a + 1);
    cout << a[0];
}

