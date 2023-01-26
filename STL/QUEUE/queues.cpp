#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Aditya");
    q.push("Raj");

    cout << q.size() << endl;

    cout <<"First Elements: "<< q.front() << endl;

    q.pop();
    cout << q.size() << endl;

    cout <<"First Elements: "<< q.front() << endl;
    return 0;
}