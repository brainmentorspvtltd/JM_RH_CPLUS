#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return -1;
        sort(nums.begin(), nums.end());
        return nums[1];
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 2, 1, 4, 5, 6, 7};
    cout << s.findNonMinOrMax(nums) << endl;
    return 0;
}