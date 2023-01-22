

                                                            // Next Greater Element I //


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int sizeOfNum1=nums1.size();
        int sizeOfNum2=nums2.size();
        //unordered map
        //concepts used unorderedmap,stack,array
        unordered_map<int,int>umap;
        stack<int>s;
        
        for(int i=sizeOfNum2-1; i>=0; i--)
        {
            while(!s.empty() && s.top()<=nums2[i])
            {
                s.pop();
            }
            int res=(s.empty()) ? -1:s.top();
            umap.insert({nums2[i],res});
            s.push(nums2[i]);
        }

        vector<int>ans;
        for(auto x:nums1)
        {
            ans.push_back(umap[x]);
        }
     
        return ans;
    }
};
