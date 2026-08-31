class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // brute force approch:-time complexity O(n2).
//   int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i==j){
//                     continue;
//                 }
//                 if(nums[i]+nums[j]==target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};



// or we can do like:- to reduce time complexity in brute force.in this approch time complexity is slightly lesser than O(n2).but still near O(n2).

    // int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(nums[i]+nums[j]==target){
    //                 return {i,j};
    //             }
    //         }
    //     }
    //     return {};




// better appproch:-this has time complexity of O(n)*O(1) in best case when hash map find element in map in o(1)lookup.
// for worst case when for every element we have to find in hashmap:-O(n)*O(n)=O(n2).

// if u use ordered map then:-O(n)*O(logn)=O(nlogn).better than uorderd map. // map<int,int> hash;
       

        int n=nums.size();
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++){
        int a=nums[i];
            int more=target-a;
            if(hash.find(more)==hash.end()){
                hash[a]=i;
            }
            else{
            return {i,hash[more]};
            }
        }
        return {};




        // optimal approch:- by using 2 pointer:-remember this is only apllicable to find 2 element sum equla to target exist or not.** its does not give same index of those orignal array element because after sorting array indexing change but i can tell yes or no for sum exits in array or not .it not give correct index due to soting .
        // example:-
        // Original: [3, 2, 4]
        // Index:     0  1  2

        // After sort: [2, 3, 4]
        // Index:       0  1  2

        // see index change .but same array and sum exists.

// **********so overall hash map approch is best for 2 sum*******
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // int left=0;
        // int right=n-1;
        // while(left<right){
        //     if(nums[left]+nums[right]==target){
        //         // return {left,right};
        //         return "yes";
        //     }
        //     else if(nums[left]+nums[right]<target){
        //         left++;
        //     }
        //     else{
        //         right--;
        //     }
        // }
        // // return {};
        // return "no";





        // if we wanna do to return same index after sorting also we have to take a vector and push array all element according to index then rtuen index:-
            // int n=nums.size();

            // vector<pair<int,int>> arr;
        //               /    \
                    // element,originalIndex 

// creating new copy array.
            // for(int i=0;i<n;i++){
            //     arr.push_back({nums[i],i});
            // }

// sorting.
        // sort(arr.begin(),arr.end());

        // int left=0;
        // int right=n-1;  //no need to change as new arr have same indexing now so work same.

        // while(left<right){
        //     if(arr[left].first + arr[right].first==target){
        //         return {arr[left].second,arr[right].second};
        //     }
        //     else if(arr[left].first + arr[right].first < target){
        //         left++;
        //     }
        //     else{
        //         right--;
        //     }
        // }
        // return {};
    }
};