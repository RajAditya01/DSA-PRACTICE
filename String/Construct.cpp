#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

int main(){
    string strOne = "leet";
    string strTwo = "tele";

    sort(strOne.begin(), strOne.end());
    sort(strTwo.begin(), strTwo.end());

    cout << strOne << " " << strTwo << endl;

    int ptrOne = 0;
    int ptrTwo = 0;
    
    for(int i = 0; i < strOne.length(); i++){
        if(strOne[i] == strTwo[i]){
            cout << "Same" << endl;
        } else cout << "Not same" << endl;
    }
    
    return 0;
}