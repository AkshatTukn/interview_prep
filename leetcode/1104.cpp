class Solution {
public:
    int longestOnes(vector<int>& s, int k) {
        int n=s.size();
        int ans=0;
        int maxi=0;
        int cn0=0;
        int st=0,end=0;
        for(end=0;end<n;end++)
        {
            
            if(s[end]==0)
            {
                cn0++;
            }
           if(cn0<=k)
           {
               ans=max(ans,end-st+1);
           }else
           {
              if(s[st]==0)
              {
                  cn0--;
              }
               st++;
               
           }
            
            
            
        }
        return ans;
    }
};