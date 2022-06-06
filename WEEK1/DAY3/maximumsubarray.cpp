


// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*int max_total=0;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=(max_total+nums[i])){
                max_total+=nums[i];
            }
            else
                max_total=nums[i];
            if(max_total>max){
                max=max_total;
            }
        }
        return max;*/
        int m=0;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            m+=nums[i];
            if(m>max)
                max=m;
            if(m<0)
                m=0;
        }
        return max;
    }
};