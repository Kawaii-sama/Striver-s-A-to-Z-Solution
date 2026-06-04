#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int min = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if ( nums[i] <= nums[j] ) continue;
                else {
                    int temp = nums[j];
                    nums[j] = nums[i]; nums[i] = temp;
                }
            }
        }

        return nums;

    }
};


int main () {
    Solution obj;
    vector<int> ans = {5 ,4 ,4 ,1 ,1};
    obj.selectionSort(ans);
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
