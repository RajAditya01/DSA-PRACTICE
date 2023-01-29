#include <iostream>
using namespace std;

int main(){
    char s[] = {'A', 'D', 'I', 'T','Y','A'};

    int start = 0;
    int end = sizeof(s) / sizeof(s[0]) - 1;
    cout << end;

    while(start < end){
        swap(s[start], s[end]);
        start = start + 1;
        end = end - 1;
    }

    return 0;
}