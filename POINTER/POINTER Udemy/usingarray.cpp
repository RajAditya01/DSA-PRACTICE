#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int A[5]={1,5,4,5,8};
    int*p;
    p=A;
    for(int i=0;i<=5;i++)
    //cout<<A[i]<<endl;
    cout<<p[i]<<endl;

    return 0;
}