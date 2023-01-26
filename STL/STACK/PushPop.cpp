#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;
    
    s.push("ADITYA");
    s.push("RAJ");

    cout <<"Top -> "<< s.top() << endl;

    cout <<"Size -> "<< s.size() << endl;

    cout<<"Empty or not -> "<< s.empty() << endl;
    
    s.pop();
    cout << s.top() << endl;

    s.pop();

    return 0;
}