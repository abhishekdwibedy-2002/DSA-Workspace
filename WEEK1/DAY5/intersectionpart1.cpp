


// https://leetcode.com/problems/intersection-of-two-arrays/


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        set<int> s;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int a=0,b=0;
        int m=nums1.size();
        int n=nums2.size();
        while(a<m && b<n){
            if(nums1[a]<nums2[b])
                a++;
            else if(nums2[b]<nums1[a])
                b++;
            else {
                s.insert(nums2[b]);
                a++;
                b++;
            }
        }
        for(auto &itr:s)
            v.push_back(itr);
        return v;
    }
};