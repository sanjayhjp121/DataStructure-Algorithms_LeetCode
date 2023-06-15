//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int a0=0, a1=0, a2=0;
        int i;
        for(i=0;i<n;i++){
            if(a[i]==0)
                a0++;
            else if(a[i]==1)
                a1++;
            else
                a2++;
        }
        
        for(i=0;i<a0;++i){
            a[i]=0;
        }
        for(i=a0;i<a0+a1;++i){
            a[i]=1;
        }
        while(a2--){
            a[i++]=2;
        }
        
        
        // for(i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends