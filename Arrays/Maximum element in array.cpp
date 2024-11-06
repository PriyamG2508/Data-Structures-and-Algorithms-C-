#include <bits/stdc++.h> 
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    return maxi;
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    
    cout << largestElement(arr,n) << endl;

  
    return 0;
}
