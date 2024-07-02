#include<iostream>
using namespace std;
void rotate(int arr[],int n){
    int last = arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0]=last;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    rotate(arr, n);
    cout << "\nRotated array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
