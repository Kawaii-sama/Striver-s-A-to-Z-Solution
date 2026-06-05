//#include <bits/stdc++.h> (due to vs code)
#include <vector>
#include<iostream>
using namespace std;


class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
       for (int i = 0; i < nums.size(); i++) {
           for (int j = 0; j < nums.size()-1; j++) {
                if (nums[j] <= nums[j+1]) continue;
                else { int temp = nums[j+1];
                       nums[j+1] = nums[j]; nums[j] = temp; }
            }    
        }
        return nums;
    
    }


};



int main () {
    Solution obj;
    vector<int> ans = {5, 4, 4, 1, 1};
    obj.bubbleSort(ans);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
