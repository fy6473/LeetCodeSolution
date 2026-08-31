class Solution {
public:
    int missingNumber(vector<int>& nums) {

    // simple logic using substract natural sum upto input n and sum of given array.
        int n=nums.size();
        int naturalsum=n*(n+1)/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        return naturalsum-sum;

 
// second solution using xor as it also take O(n) time complexity.its is better beacuse substract method if input 10power5 create 10power10 naturalsum.while it is good as 10power5 input soln.
    //     int n=nums.size();
    //      int xorValue = 0;

    // for(int i = 1; i <= n; i++) {
    //     xorValue = xorValue ^ i;
    // }

    // for(int i = 0; i < n; i++) {
    //     xorValue = xorValue ^ nums[i];
    // }

    // return xorValue;



// more simple of second method xor all work in 1 for loop:-

    //     int n=nums.size();
    // int xorValue = n;

    // for (int i = 0; i < n; i++) {
    //     xorValue = xorValue ^ i ^ nums[i];
    // }

    // return xorValue;
        
    }
};