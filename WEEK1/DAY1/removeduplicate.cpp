

// https://leetcode.com/problems/find-the-duplicate-number/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> v;
        for(int i=0;i<nums.size();i++){
            if(v.count(nums[i])){
                return nums[i];
                break;
            }
            v.insert(nums[i]);
        }
        return -1;
    }
};