class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int sum=0;
        for(int x:nums)
        {
            sum+=x;
            pq.push(x);
        }
     while(k)
     {
         int j=pq.top();
         pq.pop();
         sum-=j;
         sum += (-1*j);
         pq.push(-1*j);
         k--;
     }
        return sum;
        
    }
};