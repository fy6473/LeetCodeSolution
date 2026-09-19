class Solution {
public:
// bool linearsearch(vector<int>& nums,int element){
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]==element){
//             return true;
//         }
//     }
//         return false;
// }
    int longestConsecutive(vector<int>& nums) {
        // brute force approch:-
        // int n=nums.size();
        // int maxi=0;
        // for(int i=0;i<n;i++){
        //     int element=nums[i];
        //     int count=1;
        //     while(linearsearch(nums,element+1)==true){
        //         count++;
        //         element++;
        //     }
        //     maxi=max(count,maxi);
        // }
        // return maxi;

        if(nums.empty()){
            return 0;
        }

    sort(nums.begin(),nums.end());
        int n=nums.size();
    int count=0;
    int lastSmall=INT_MIN;
    int maxi=1;
    for(int i=0;i<n;i++){
        if(nums[i]==lastSmall){
            continue;
        }
        
        else if(nums[i]-1!=lastSmall){
            lastSmall=nums[i];
            count=1;
             }
             else{
                count++;
                lastSmall++;
             }

         maxi=max(count,maxi);
         }
         return maxi;
    }
};