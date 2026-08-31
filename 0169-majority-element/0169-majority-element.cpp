class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // brute force:- time complexity O(n2). space O(1).
        // int n=nums.size();
        // int size=n/2;
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count>size){
        //         return nums[i];
        //     }
        // }
        // return -1;


        // better soln:-by hashing time complexity O(nlogn)+O(n) && space 0(n).
        // int n=nums.size();
        // int size=n/2;
        // map <int,int> mpp;
        // for(int i=0;i<n;i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it :mpp){
        //     if(it.second>size){
        //         return it.first;
        //     }
        // }
        // return -1;


        // optimal soln:-
        int n=nums.size();
        int size=n/2;
        int count=0;
        int el;
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                el=nums[i];
            }
            else if(nums[i]==el){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el){
                count1++;
            }
        }
        if(count1>size){
            return el;
        }
        return -1;
    }
};