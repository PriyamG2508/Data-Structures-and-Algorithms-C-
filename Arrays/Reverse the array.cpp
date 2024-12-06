void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        int left = 0;        // Start from the first index
        int right = n - 1;   // Start from the last index

        while (left < right) {
            swap(arr[left], arr[right]);  // Swap the elements at left and right
            left++;   // Move left pointer to the right
            right--;  // Move right pointer to the left
        }
    }
