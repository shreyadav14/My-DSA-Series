#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;
void swapy(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void ReverseA(int arr[], int n) {
    int i = 0;
    int j = n - 1;

    while (i < j) {
        swapy(arr, i, j);
        i++;
        j--;
    }
}

int main() {
    int arr[] = {3, 4, 5, 6, 7, 8};

    int n = sizeof(arr) / sizeof(arr[0]);
    
 
cout << "Before reverse: ";
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}

ReverseA(arr, n);

cout << "\nAfter reverse: ";
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}

    return 0;
  }