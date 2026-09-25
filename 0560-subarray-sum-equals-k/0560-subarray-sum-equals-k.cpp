class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // brute force soln:-
        // int n=nums.size();
        // int cnt=0;
        // for(int i =0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int sum =0;
        //         for(int k=i;k<=j;k++){
        //             sum=sum+nums[k];
        //         }
        //         if(sum==k){
        //                 cnt++;
        //             }
        //     }
        // }
        // return cnt;

        // better soln;
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=sum+nums[j];
               if(sum==k){
                cnt++;
                }
            }
        }
    return cnt;
    }
};