class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int i=0, j=n-1;
        while(i<n){
            if(colors[i]==colors[n-1]){
                i++;
            }
            else
                return abs(n-1-i);
            if(colors[j]==colors[0]){
                j--;
            }
            else
                return j;
        }
        return -1;
    }
};