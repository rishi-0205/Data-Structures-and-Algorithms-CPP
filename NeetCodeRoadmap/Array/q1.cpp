#include <iostream>
#include <unordered_set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> a;
        for(int i = 0; i < nums.size(); i++){
            a.insert(nums[i]);
        }
        return a.size() != nums.size();
    }
};