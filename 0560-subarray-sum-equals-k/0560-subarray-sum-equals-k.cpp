class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // brute force soln:-O(n3)
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

        // better soln; o(n2).
    //     int n=nums.size();
    //     int cnt=0;
    //     for(int i=0;i<n;i++){
    //         int sum=0;
    //         for(int j=i;j<n;j++){
    //             sum=sum+nums[j];
    //            if(sum==k){
    //             cnt++;
    //             }
    //         }
    //     }
    // return cnt;
    // }

    // optimal soln:-O(n*logN).
    int n=nums.size();
    unordered_map<int,int> mpp;
  mpp[0]=1;
    int cnt=0;
    int prefixsum=0;
 for(int i=0;i<n;i++){
     prefixsum=prefixsum+nums[i];
     int remove=prefixsum-k;
     cnt=cnt+mpp[remove];
     mpp[prefixsum]=mpp[prefixsum]+1;    //mp[prefixsum]+=1;
 }
return cnt;
    }
};