

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(!s.count(nums[i])){
                nums[a]=nums[i];
                s.insert(nums[i]);
                ++a;
            }
        }
        return a;
    }
};