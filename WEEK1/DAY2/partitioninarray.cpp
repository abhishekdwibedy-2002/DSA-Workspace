

// https://leetcode.com/contest/weekly-contest-296/problems/partition-array-such-that-maximum-difference-is-k/


class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int> ());
        int a=0,b=nums[0];
        for(int i=1;i<nums.size();i++){
            if(b-nums[i]>k){
                b=nums[i];
                a+=1;
            }
        }
        a+=1;
        return a;
    }
};