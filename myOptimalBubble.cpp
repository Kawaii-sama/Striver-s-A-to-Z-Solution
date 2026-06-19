#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
int swapped;
    vector<int> bubbleSort(vyector<int>& nums) {
    do {
    swapped = 0;
       for (int i = 0; i < nums.size()-1; i++) {
         if (nums[i] <= nums[i+1])  continue; 
         else { int temp = nums[i+1];
            nums[i+1] = nums[i]; nums[i] = temp; swapped = 1;}
       }
    } while (swapped == 1);
        return nums;
    
    }


};



int main () {
    Solution obj;
    vector<int> ans = {7,5,3};
    obj.bubbleSort(ans);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

