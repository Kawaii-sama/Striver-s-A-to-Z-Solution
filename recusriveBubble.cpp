// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Swap;
    vector<int> bubbleSort(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            Swap = 0;
            if (nums[i] > nums[i+1]) {
                int temp = nums[i+1]; nums[i+1] = nums [i]; nums[i] = temp; Swap = 1;
            }
        }
        
        if (Swap == 0) bubbleSort(nums);
        
        return nums;

    }
};


int main() {
    // Write C++ code here
    Solution obj;
    vector<int> nums = {3,2,1};
    vector<int> result = obj.bubbleSort(nums);
    
    for (int x : result) { 
        cout << result[x] << " ";}
    

    return 0;
}