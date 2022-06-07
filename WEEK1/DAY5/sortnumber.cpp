

// https://leetcode.com/problems/sort-colors/



class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*sort(nums.begin(),nums.end());
        for(auto &i : nums){
            cout<<i;
        }*/
        
        /*int l=0,m=0,h=nums.size()-1;
        while(m<=h){
            switch(nums[m]){
                case 0:swap(nums[l++],nums[m++]);
                    break;
                case 1:m++;
                    break;
                case 2:swap(nums[m],nums[h--]);
                    break;
            }
        }*/
        
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                a+=1;
            }
            else if(nums[i]==1){
                b+=1;
            }
            else
                c+=1;
        }
        for(int i=0;i<a;i++)
            nums[i]=0;
        for(int i=a;i<(a+b);i++)
            nums[i]=1;
        for(int i=(a+b);i<(a+b+c);i++)
            nums[i]=2;
    }
};