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


        // better solution :-using kadane algo O(n2).
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

        // // better solution :-using kadane algo  if by cahnce interveiwer ask can you also return the starting and ending index of subarray then
        // int n=nums.size();
        // int maxi=INT_MIN;
        // int sum=0;
        // int startingindex=-1;
        // int endingindex=-1;
        // for(int i=0;i<n;i++){
        //    if(sum==0){
        //     int start=i; 
        //    }
        //     sum=sum+nums[i];
        //     maxi=max(sum,maxi);
        // startingindex=start,endindindex=i;
        //     if(sum<0){
        //         sum=0;
        //         continue;
        //     }
        // }
        // return maxi;
    }
};