#include <iostream>
#include <set>
using namespace std;

set<int> getUnion(int arrOne[], int arrTwo[], int m, int n) {
    set<int> result;
    for (int i = 0; i < m; i++) {
        result.insert(arrOne[i]);
    }
    for (int j = 0; j < n; j++) {
        result.insert(arrTwo[j]);
    }
    return result;
}

int main() {
    int arrOne[] = {1, 2, 3, 4, 5, 6};
    int arrTwo[] = {1, 2, 3, 9, 33, 25};
    int m = sizeof(arrOne) / sizeof(arrOne[0]);
    int n = sizeof(arrTwo) / sizeof(arrTwo[0]);

    set<int> result = getUnion(arrOne, arrTwo, m, n);
    for (auto x : result) {
        cout << x << " ";
    }
    return 0;
}
