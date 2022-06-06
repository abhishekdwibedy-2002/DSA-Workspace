

// https://leetcode.com/problems/contains-duplicate/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])){
                v.push_back(nums[i]);
            }
            s.insert(nums[i]);
        }
        if(v.empty())
            return false;
        return true;
    }
};