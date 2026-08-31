class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // brute force approch:-time complexity O(n2) and space complexity=O(1).
        // int n=nums.size();
        // for(int i=0;i<nums.size();i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]==nums[i]){
        //             count++;
        //         }
        //     }
        //     if(count==1){
        //         return nums[i];
        //     }
        // }
        // return -1;  



        // better approch with hashing:- O(3n) ignore constant factor 3 then O(n) is timr complexity and space complexity is O(Maxi).
//         int n=nums.size();
//         int maxi=nums[0];
//         for(int i=0;i<n;i++){
//             maxi=max(maxi,nums[i]);
//         }
//             vector<int> hash(maxi+1,0);
//             for(int i=0;i<n;i++){
//                 hash[nums[i]]++;
//             }
//         for(int i=0;i<=maxi;i++){
//             if(hash[i]==1){
//                 return i;
//             }
//         }
// return -1;



//  not always hashing work  for negative integer and long input like 10power11  or 12. so under better approch building logic with map:-

// time complexity of that is is O(nlogm)+O(n/2+1). and space complexity is o(n/2+1).
// int n=nums.size();
//     map<long long,int> mpp;
//    for(int i=0;i<n;i++){
//      mpp[nums[i]]++;
//    }

//    correct but not good approch use iteartor instead:-
//    for(int i=0;i<=n;i++){
//     if(mpp[i]==1){
//         return i;
//     }
//    }

//     for(auto it:mpp){
//         if(it.second==1){
//             return it.first;
//         }
//     }
//    return -1;



//optimal solution using xor:- time complexity o(n) and space comp is O(1). 
    int xorr=0;
    for(int i=0;i<nums.size();i++){
        xorr=xorr^nums[i];
    }
    return xorr;

    }
};