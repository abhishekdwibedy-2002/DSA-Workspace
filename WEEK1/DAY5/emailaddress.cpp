


// https://leetcode.com/problems/unique-email-addresses/


class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> v;
        for(string &mailid:emails){
            string str;
            for(char c:mailid){
                if(c=='+' || c=='@')
                    break;
                if(c=='.')
                    continue;
                str=str+c;
            }
            str=str+mailid.substr(mailid.find('@'));
            v.insert(str);
        }
        return v.size();
    }
};