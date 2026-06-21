// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Swap;
    vector<int> bubbleSort(vector<int>& nums, int n) {
        for (int i = 0; i < n -1 ; i++) {
            if (nums[i] > nums[i+1]) 
                { swap(nums[i], nums[i+1]); Swap = 1; }
            
            else continue;
        }
        
        if (Swap == 1) {
        Swap = 0;
        return bubbleSort(nums, n - 1); }
        
        return nums;
        

    }
};


int main() {
    // Write C++ code here
    Solution obj;
    vector<int> nums = {5, 4, 4, 1, 1};
    int n = nums.size();
    obj.bubbleSort(nums , n);
    
    for (int x : nums) { 
        cout << x << " ";}
    

    return 0;
}