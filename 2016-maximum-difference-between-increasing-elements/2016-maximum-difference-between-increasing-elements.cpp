class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = -1, minV=nums[0];
        for(int i=1;i<nums.size();i++){
            res=max(res, (nums[i]-minV));
            minV=min(minV, nums[i]);
        }
        if(res==0){
            return -1;
        }
        return res;
    }
};