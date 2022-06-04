
// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
                unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int a=target-nums[i];
            if(m.find(a)!=m.end()){
                v.push_back(m.find(a)->second);
                v.push_back(i);
            }
            m.insert({nums[i],i});
        }
        return v;
    }
};