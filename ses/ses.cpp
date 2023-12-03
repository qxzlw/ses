#include <iostream>

const int m = 3;
const int n = 3;

int sumMainDiagonal(int arr[m][n]) {
    int sum = 0;
    for (int i = 0; i < m && i < n; ++i) {
        sum += arr[i][i];
    }
    return sum;
}

int sumSecondaryDiagonal(int arr[m][n]) {
    int sum = 0;
    for (int i = 0; i < m && i < n; ++i) {
        sum += arr[i][n - 1 - i];
    }
    return sum;
}

void rotate90Degrees(int arr[m][n]) {
    int temp[m][n];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            temp[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = temp[i][m - 1 - j];
        }
    }
}

int main() {
    int arr[m][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Original Array:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\nSum of Main Diagonal: " << sumMainDiagonal(arr) << "\n";
    std::cout << "Sum of Secondary Diagonal: " << sumSecondaryDiagonal(arr) << "\n";

    rotate90Degrees(arr);
    std::cout << "\nArray Rotated 90 Degrees Clockwise:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
