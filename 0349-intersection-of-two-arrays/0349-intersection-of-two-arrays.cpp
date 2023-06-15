class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int m=nums1.size();
        int n=nums2.size();
        
       vector<int> intersection;
    for (int i = 0; i < m; i = i + 1)
    {
        for (int j = 0; j < n; j = j + 1)
        {
            if (nums1[i] == nums2[j])
            {
                intersection.push_back(nums1[i]);
                break;
            }
        }
    }
    set<int> s(intersection.begin(), intersection.end());
    vector<int> abc(s.begin(),s.end());
    return abc;
    }
};