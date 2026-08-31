class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // brute force approch:- t.c. is O(n3)  && space is O(1).
        // int finalsum=nums[0];
        // int n=nums.size();
        // for (int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int sum=0;
        //         for(int k=i;k<=j;k++){
        //             sum=sum+nums[k];
        //         }
        //         if(sum > finalsum){
        //             finalsum=sum;
        //         }
        //     }

        // }
        // return finalsum;


        // better soln:- t.c.=O(n2) and space is still O(1).

        // int finalsum=nums[0];
        // int n=nums.size();
        // for (int i=0;i<n;i++){
        //         int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum=sum+nums[j];
        //         // for(int k=i;k<=j;k++){
        //         //     sum=sum+nums[k];
        //         // }
        //         if(sum > finalsum){
        //             finalsum=sum;
        //         }
        //     }

        // }
        // return finalsum;


        // better solution :-using kadane algo
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            maxi=max(sum,maxi);
            if(sum<0){
                sum=0;
                continue;
            }
        }
        return maxi;
    }
};