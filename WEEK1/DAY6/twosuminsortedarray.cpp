

// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        /*unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<numbers.size();i++){
            int a=target-numbers[i];
            if(m.count(a)){
                v.push_back(m.find(a)->second+1);
                v.push_back(i+1);
            }
            m.insert(pair<int,int> {numbers[i],i});
        }
        return v;*/
        
        /*unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<numbers.size();i++){
            int a=target-numbers[i];
            if(m.find(a)!=m.end()){
                v.push_back(m.find(a)->second+1);
                v.push_back(i+1);
                break;
            }
            m.insert(pair<int,int> {numbers[i],i});
        }
        return v;*/
        
        
    }
};