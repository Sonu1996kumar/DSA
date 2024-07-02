#include <iostream>
#include <vector>
using namespace std;
int missingNumber(int n, vector<int> &arr) {
        // code here
        int sum =0;
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
        }
        int ans = n*(n+1)/2;
        
        return ans-sum;
    }
    int main() 
    {
        int n=4;

        vector<int> arr(n-1);
        arr={1,2,4,5};
        
        int missing = missingNumber(n,arr);
        cout<<missing<<endl;
        return 0;
    }