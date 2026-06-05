#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        // yeh i second last takk jayega, j last takk jayega
        for (int i = 0; i < nums.size() - 1; i++) {
            int min = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if ( nums[i] <= nums[j] ) continue;
                else {
                    int temp = nums[j];
                    nums[j] = nums[i]; nums[i] = temp;
                    // we can also switch min from j;
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
    
    // time complexity:- O(N^2) ; space complexity:- O(1);
}
