#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string arr[] = {"Hello", "Aditya", "how", "are", "you"};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}