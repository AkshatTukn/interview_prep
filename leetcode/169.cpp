class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
      int cn=0;
        int cur=0;
        
        for(int x:nums)
        {
           if(cn==0)
           {
               cur=x;
               cn=1;
           }else{
               
            if(cur==x)
            {
                cn++;
            }else{
                cn--;
            }
               
               
           }
            
        }
        return cur;
        
        
    }
};