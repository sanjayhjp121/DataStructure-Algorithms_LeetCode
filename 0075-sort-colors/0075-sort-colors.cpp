class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a0=0, a1=0, a2=0;
        
        int i;
        for(i=0;i<nums.size();i++){
             if(nums[i]==0){
                 a0++;
             }
            else if(nums[i]==1){
                a1++;
            }   
            else{
               a2++; 
            }    
        }
        
        for(i=0;i<a0;++i){
            nums[i]=0;
        }
        for(i=a0;i<a0+a1;++i){
            nums[i]=1;
        }
        while(a2--){
            nums[i++]=2;
        }
        
    }
};