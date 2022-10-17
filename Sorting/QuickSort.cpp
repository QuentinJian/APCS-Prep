#include <iostream>
#include <vector>
using namespace std;
int main() {
    int array_length;
    cin >> array_length;
    
}

template <typename T>
std::vector<T> operator+(std::vector<T> const &x, std::vector<T> const &y)
{
    std::vector<T> vec;
    vec.reserve(x.size() + y.size());
    vec.insert(vec.end(), x.begin(), x.end());
    vec.insert(vec.end(), y.begin(), y.end());
    return vec;
}

template <typename T>
std::vector<T> &operator+=(std::vector<T> &x, const std::vector<T> &y)
{
    x.reserve(x.size() + y.size());
    x.insert(x.end(), y.begin(), y.end());
    return x;
}

vector<int> quick_sort(vector<int> nums) {
    if (nums.size() == 1) {
        return nums;
    }
    int pivot = nums[0];
    vector<int> result;
    vector<int> g;
    vector<int> e;
    vector<int> s;
    for (int i=1;i<nums.size();i++) {
        if (nums[i] < pivot) {
            s.push_back(nums[i]);
        }else if (nums[i] == pivot) {
            e.push_back(nums[i]);
        }else {
            g.push_back(nums[i]);
        }
    }
    return s += e + s;
}