#include<iostream>
using namespace std;

int main(){
    // int b = 10;
    // int *a = &b;
    // cout<<a;

    // int a = 100, b = 200;
    // int *p = &a, *q = &b;
    // p = q;
    // cout<<p<<endl;
    // cout<<q;

    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout  << a << " " << b << endl;

    // int a = 50;
    // int *ptr = &a;
    // int *q = ptr;
    // (*q)++;
    // cout << a  << endl;


    int a = 50;
    int *ptr = &a;
    cout << (*ptr)++ <<" ";
    cout << a << endl;
}

