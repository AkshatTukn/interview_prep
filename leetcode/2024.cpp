class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) 
    {
      
      int cnt=0,cnf=0;
        int maxi=0;
        int ans=0;
        int st=0,end=0;
    int n= s.size();
        for(end=0;end<n;end++)
        {
            if(s[end]=='T')
            {
                cnt++;
                maxi=max(cnf,cnt);
            }else{
                cnf++;
                maxi=max(cnt,cnf);
            }
          
            int len=end-st+1;
            if(len-maxi>k)
            {
                if(s[st]=='T')
                {

                    cnt--;
                }else{
                
                    cnf--;
                }
                st++;
            }else{
                ans=max(ans,len);
            }
            
            
        }
       // ans=max(ans,end-st+1);
        return ans;
        
        
    }
};