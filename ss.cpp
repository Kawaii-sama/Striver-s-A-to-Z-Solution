#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int min_idx = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[min_idx]) {
                    min_idx = j;
                 }
            }
            if (min_idx != i) {
                int temp = nums[i];
                nums[i] = nums[min_idx];
                nums[min_idx] = temp;
            }
        }
        return nums;
    }
};

int main() {
    Solution solver;
    vector<int> numbers = {64, 25, 12, 22, 11};

    vector<int> result = solver.selectionSort(numbers);

    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
