#include<iostream>
using namespace std;
int main(){

    char ch =10;
    char *cptr = &ch;

    cout<<cptr<<endl;

    cptr++;
    cout<<cptr<<endl;

    return 0;
}