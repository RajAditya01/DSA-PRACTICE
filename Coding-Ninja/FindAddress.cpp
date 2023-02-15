#include<iostream>
using namespace std;

int main(){
    // int b = 10;
    // int *a = &b;
    // cout<<a;

    int a = 100, b = 200;
    int *p = &a, *q = &b;
    p = q;
    cout<<p<<endl;
    cout<<q;

}

