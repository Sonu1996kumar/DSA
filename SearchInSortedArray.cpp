#include<iostream>
using namespace std;
int searchInSorted(int arr[], int N, int K) 
{ 
    
       // Your code here
       for(int i=0;i<N;i++){
           if(arr[i]==K){
               return 1;
           }
       }
       return -1;
       
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 0;
    int result = searchInSorted(arr, N, K);
    cout << result << endl;
    return 0;
}