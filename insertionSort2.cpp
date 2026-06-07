#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size(); int j;
        for (int i = 1; i < n; i++) {
            int key = nums[i];
            int j = i-1;
                  while (j>=0 && nums[j] > key) {
                  nums[j+1] = nums[j];
                  j--;
                }
            nums[j+1] = key;
        }
        return nums;

    }
};




int main () {
    Solution obj;
    vector<int> ans = {5, 4, 4, 1, 1};
    obj.insertionSort(ans);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
