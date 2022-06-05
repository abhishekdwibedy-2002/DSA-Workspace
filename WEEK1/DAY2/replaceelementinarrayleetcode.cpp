

// https://leetcode.com/contest/weekly-contest-296/problems/replace-elements-in-an-array/


class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]] = i;
        }
        for(int i=0;i<operations.size();i++){
            auto it=m.find(operations[i][0]);
            int index = it->second;
            nums[index]=operations[i][1];
            m[operations[i][1]]=index;
        }
        return nums;
    }
};