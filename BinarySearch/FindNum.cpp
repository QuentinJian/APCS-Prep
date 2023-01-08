#include <vector>
#include <iostream>

using namespace std;

int binarySearch(vector<int> nums, int target) {
    int left;
    int right = nums.size()-1;
    while (left >= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        }else if (nums[mid] > target) {
            right = mid - 1;
        }else if (nums[mid] < target) {
            left  = mid + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 2, 4 ,5 , 6, 7, 8, 10, 19};
    cout << "Number 6 is in index " << binarySearch(nums, 6);
    return 0;
}
