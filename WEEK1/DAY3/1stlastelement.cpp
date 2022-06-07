

// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> v;
        int a;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                v.push_back(i);
                a=i;
            }
            m.insert(pair<int,int>(nums[i],i));
        }
        vector<int> v1(2,-1);
        if(v.empty())
            return {-1,-1};
        if(v.size()==1)
            return {a,a};
        else{
            int b=v.front();
            int e=v.back();
            return {b,e};
        }
    }
};