#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> s;

    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }

    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack: "<<s.size()<<endl;
    return 0;
}

