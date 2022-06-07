

// https://leetcode.com/problems/maximum-subarray/

//Kanade Algorithm to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum. 



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
        
        int max=INT_MIN;
        int a=0;
        for(int i=0;i<nums.size();i++){
            a+=nums[i];
            if(max<a)
                max=a;
            if(a<0)
                a=0;
        }
        return max;
    }
};