class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        ans.push_back(-1);
        int RightLargest = arr[n-1];
        
        for(int i = n-2; i>=0;i--){
            
            if(arr[i] >= RightLargest){
                
                ans.push_back(RightLargest);
                RightLargest = arr[i];
            }
            else{
                  ans.push_back(RightLargest);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};