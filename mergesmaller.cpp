#include<iostream>
#include<vector>
using namespace std;

int mergeAndCount(int arr[], int temp[], int l, int mid, int r, vector<int>& count) {
    int i = l, j = mid + 1, k = l;
    
    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
    
            for (int idx = i; idx <= mid; idx++) {
                count[idx]++;  
            }
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }


    while (j <= r) {
        temp[k++] = arr[j++];
    }

    for (i = l; i <= r; i++) {
        arr[i] = temp[i];
    }

    return 0; 
}

void countSmallerNumbers(int arr[], int temp[], int l, int r, vector<int>& count) {
    if (l < r) {
        int mid = (l + r) / 2;
        countSmallerNumbers(arr, temp, l, mid, count);  
        countSmallerNumbers(arr, temp, mid + 1, r, count);  
        mergeAndCount(arr, temp, l, mid, r, count);  
    }
}

int main() {
    int arr1[] = {5, 2, 6, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int temp1[n1];  
    vector<int> count1(n1, 0);  

    countSmallerNumbers(arr1, temp1, 0, n1 - 1, count1);
    cout << "Count of smaller numbers after self for array 1: ";
    for (int i = 0; i < n1; i++) {
        cout << count1[i] << " ";
    }
    cout << endl;

    return 0;
}
