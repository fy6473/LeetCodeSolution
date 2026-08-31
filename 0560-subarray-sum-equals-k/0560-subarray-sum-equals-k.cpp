class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
                //    /  \
                // prefixsum,frequency

         //intially sum 0 and frquency of 0 is 1.
        mpp[0]=1; 
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            int rem=sum-k;
            if(mpp.find(rem)!=mpp.end()){
                count=count+mpp[rem];
            }
            mpp[sum]++;
        }
    return count;        
    }
};