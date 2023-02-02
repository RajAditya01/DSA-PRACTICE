#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int count = 0; 
    for (int i = 1; i < n; i++)
    { 
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            
            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = key;
        count++;
    }
    cout << "Number of Count: " << count << endl;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 , 6 , 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    return 0;
}
