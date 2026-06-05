#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size(); int swap = 0;
       for (int i = n - 1; i > 0; i--) {
           for (int j = 0; j <= i-1; j++) {
                if (nums[j] <= nums[j+1]) continue;
                else { int temp = nums[j+1];
                       nums[j+1] = nums[j]; nums[j] = temp; swap++; }
            }
            
            if (swap == 0) break;
        }
        return nums;
    
    }


};



int main () {
    Solution obj;
    vector<int> ans = {7, 4, 1, 5, 3};
    obj.bubbleSort(ans);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

// time complexity: O(n); space complexity: O(1);