#include<iostream>
using namespace std;
int main(){

    int arr[] = {10,20,30};
    cout<< *arr << endl;

    int *ptr = arr;
    for(int i=0;i< 3; i++){
        // cout<< ptr<<endl;
        // ptr++;


        //alt ++retun 0;
        cout <<*(arr + i) << endl;
    }

    return 0;
}