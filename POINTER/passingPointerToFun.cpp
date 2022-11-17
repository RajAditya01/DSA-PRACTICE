#include<iostream>
using namespace std;

void increament(int a){
    a++;
}


int main(){

    int a=2;
    increament(a);
    //passing by value not address. so it is not increament
    cout<<a<<endl;

    return 0;
    }