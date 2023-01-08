#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int nums_size;
    int travel = 0;
    int ans = 0;
    cin >> nums_size;
    vector<int> nums(nums_size);
    map<int, bool> searched;
    for (int i=0;i<nums_size;i++) {
        cin >> nums[i];
    }
    for (int i=0;i<nums.size();i++) {
        if (searched[i] == true)
            break; 
        int cur = nums[i];
        travel = nums[i];
        do {
            searched[nums[travel]] = true;
            travel = nums[travel];
        }while(travel != cur);
        ans++;
    }
    cout << ans << endl;
    return 0;
}