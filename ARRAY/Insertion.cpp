#include<iostream>
using namespace std;

void insertArray(int arr[], int size, int position, int item){
    int i=size;
    while(i >= position){
        arr[i+1]=arr[i];
        i--;
    }
    arr[position]=item;
    size=size+1;
    for(int i=0; i< size; i++){
        cout<< arr[i] << endl;
    }
};

int main(){
    int arr[]={4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    insertArray(arr,size,2,1);

    return 0;
}