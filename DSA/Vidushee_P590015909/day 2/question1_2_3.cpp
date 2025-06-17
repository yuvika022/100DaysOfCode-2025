#include <iostream>
#include <vector>

using namespace std;

int sumOfEvens(const vector<int>& nums) {
    int total = 0;
    for (int num : nums) {
        if (num % 2 == 0) {
            total += num;
        }
    }
    return total;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {10, 15, 20};
    vector<int> nums3 = {1, 3, 5};

    cout << "Sum of evens (1): " << sumOfEvens(nums1) << endl; // Output: 6
    cout << "Sum of evens (2): " << sumOfEvens(nums2) << endl; // Output: 30
    cout << "Sum of evens (3): " << sumOfEvens(nums3) << endl; // Output: 0

    return 0;
}
