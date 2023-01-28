

                                                                // Valid Anagram  //


class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size();
        int n=t.size();
        if(m!=n)
        {
            return false;
        }
        int count=0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0; i<s.size(); i++)
        {
            
                if(s[i]!=t[i])
                 return false;
            
        }
            return true;
            
    }
};
