

                                                    // Merge Strings Alternately //

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i=0,j=0;
            while(i<word1.size() || j<word2.size())
            {
                if(i<word1.size())
                 ans+=word1[i];
            cout<<i<<endl;
                if(i<word2.size())
                  ans+=word2[i];

                i++;
                j++;
        
            }
        return ans;
    }
};
