#define ll long long int

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        ll preSum = 0, evenCt = 1, oddCt = 0, ans = 0;
        ll MOD = 1e9+7;
        for(auto itr:arr){
            preSum+=itr;
            if(preSum%2==0){
                ans+=oddCt;
                evenCt++;
            }
            else {
                ans+=evenCt;
                oddCt++;
            }
            ans%=MOD;
        }
        return ans;
    }
};