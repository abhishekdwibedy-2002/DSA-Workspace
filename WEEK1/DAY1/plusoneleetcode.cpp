

// https://leetcode.com/problems/plus-one/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size();
        for(int i=l-1;i>=0;--i){
            if(digits[i]+1<9){
                digits[i]=digits[i]+1-10;
                if(i==0) 
                    digits.insert(digits.begin(),1);
                return digits;
            } 
            else
                digits[i]+=1;
            break;
        }
        return digits;
    }
};