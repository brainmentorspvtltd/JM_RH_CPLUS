#include <iostream>
using namespace std;

void input(int (&arr)[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
}

int findMax(int (&arr)[2][2]) {
    int m = arr[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[i][j] > m) {
                m = arr[i][j];
            }
        }
    }
    return m;
}

int main() {
    int arr[2][2];
    input(arr);
    cout << findMax(arr);
    return 0;
}
