#include<iostream>
using namespace std;

int print2largest(int arr[], int n) {
        // code here
        int ans = -1;
        for(int i=0;i<n;i++){
            if(arr[i]>ans)
            ans=arr[i];
            
        }
        
        int seconHig=-1;
        
        for(int i=0;i<n;i++){
            if(arr[i]!=ans)
            seconHig=max(seconHig,arr[i]);
        }
        return seconHig;
    }

    int main()
    {
        int arr[] = {12, 15, 10, 5, 8, 7};
        int n = sizeof(arr) / sizeof(arr[0]);
        int seconLargest = print2largest(arr, n);
        cout << "Second largest element is: " << seconLargest;
        return 0;
    }