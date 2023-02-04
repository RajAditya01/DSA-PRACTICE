#include<iostream>
using namespace std;

void deleteArray(int arr[], int size, int position){
    int i=position;
    while(i < size-1){
        arr[i] = arr[i+1];
        i++;
    }
    for(int i=0; i< size; i++){
        cout<< arr[i] << endl;
    }
};

int main(){
    int arr[]={4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    deleteArray(arr,size,2);

    return 0;
}