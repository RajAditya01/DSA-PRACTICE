#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){

    struct Rectangle r;
    r.length=10;
    r.breadth=20;

    //cout<<"Area of rectangle="+r.length*r.breadth<<endl;
    printf("%d""Area of rectangle="+r.length*r.breadth);
    
    
    return 0;
}