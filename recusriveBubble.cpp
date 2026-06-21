// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Swap;
    vector<int> bubbleSort(vector<int>& nums) {
        for (int i = 0; i < nums.size() -1 ; i++) {
            if (nums[i] > nums[i+1]) 
                { swap(nums[i], nums[i+1]); Swap = 1; }
            
            else continue;
        }
        
        if (Swap == 1) {
        Swap = 0; 
        return bubbleSort(nums); }
        
        return nums;
        

    }
};


int main() {
    // Write C++ code here
    Solution obj;
    vector<int> nums = {5, 4, 4, 1, 1};
    vector<int> result = obj.bubbleSort(nums);
    
    for (int x : result) { 
        cout << x << " ";}
    

    return 0;
}