

// https://leetcode.com/problems/intersection-of-two-arrays-ii/


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        vector<int> v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        /*
        if(nums1.size()<=nums2.size()){
            for(int i=0;i<nums2.size();i++){
                s.insert(nums2[i]);
            }
            for(int i=0;i<nums1.size();i++){
                if(s.find(nums1[i])!=s.end())
                    v.push_back(nums1[i]);
            }
        }
        else {
            for(int i=0;i<nums1.size();i++){
                s.insert(nums1[i]);
            }
            for(int i=0;i<nums2.size();i++){
                if(s.find(nums2[i])!=s.end())
                    v.push_back(nums2[i]);
            }
            
        }
        return v;*/
        
        int a=0,b=0;
        int m=nums1.size();
        int n=nums2.size();
        while (a < m && b < n) {
		if (nums1[a] < nums2[b])
			a++;
		else if (nums2[b] < nums1[a])
			b++;
		else 
		{
			v.push_back(nums2[b]); //insertion in set s
			a++;
			b++;
		}
	}
        return v;
    }
};