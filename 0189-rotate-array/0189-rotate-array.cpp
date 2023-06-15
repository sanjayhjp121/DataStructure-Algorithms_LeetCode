class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> vec;
        int n = nums.size();
        
        if(k>n){
            k%=n;
        }
        
        
        int temp = n - k;
        
        for(int i = temp;i<n;i++){
            vec.push_back(nums[i]);
        }
        for(int i = 0;i<temp;i++){
            vec.push_back(nums[i]);
        }
        for(int i = 0;i<n;i++){
            nums[i] = vec[i];
        }
    }
};