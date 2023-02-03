// Find first non-repeating occurrence of alphabet in string
#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

int main(){
    string s = "Aditya";
    int arr[26] = {0};
    int result = -1;

    for(int i = 0; i < s.length(); i++){
        int index = s[i] - 'a';
        arr[index]++;
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < s.length(); i++){
        if(arr[s[i] - 'a'] == 1) {
            cout << i;
        }
    }
    return 0;
}