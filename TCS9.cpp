#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int SecondLargest(vector<int> &nums) {

    sort(nums.begin(), nums.end());

    int largest = nums.back();

    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] != largest)
            return nums[i];
    }

    return -1;
}

int main() {

    vector<int> nums = {10, 5, 20, 20, 8, 15};

    cout << SecondLargest(nums);

    return 0;
}