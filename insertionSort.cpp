#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size(); int temp; int j;
        for (int i = 1; i < n; i++) {
            temp = nums[i];
            for (j = i-1; j >= 0; j--) {
                  if (nums[j] > temp) { nums[j+1] = nums[j];}
                  else { nums[j+1] = temp; break;}
                }
            if ( j == -1)
            nums[0] = temp;
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
