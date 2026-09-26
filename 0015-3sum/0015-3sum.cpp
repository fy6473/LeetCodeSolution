class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // t.c:-O(n3) and space is o(no.of unique triplets)*2.
        // int n=nums.size();
        //     set<vector<int>> st;
        //     for(int i=0;i<n;i++){
        //         for(int j=i+1;j<n;j++){
        //             for(int k=j+1;k<n;k++){
        //                 if(nums[i]+nums[j]+nums[k]==0){
        //                     vector<int> temp={nums[i],nums[j],nums[k]};
        //                     sort(temp.begin(),temp.end());
        //                     st.insert(temp);
        //                 }
        //             }
        //         }
        //     }
        //     vector<vector<int>> arr(st.begin(),st.end());
        //     return arr;


        // better soln:-  using hashing:-
        // t.c.:-o(n2*logM) && space is o(N)+o(no.of unique triplets)*2
        // int n=nums.size();
        // set<vector<int>> st;
        // for(int i=0;i<n;i++){
        //     set<int> hash;
        //     for(int j=i+1;j<n;j++){
        //         int k=-(nums[i]+nums[j]);
        //         if(hash.find(k)!=hash.end()){
        //             vector<int> temp={nums[i],nums[j],k};
        //             sort(temp.begin(),temp.end());
        //             st.insert(temp);
        //         }
        //         hash.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>> arr(st.begin(),st.end());
        // return arr;


        // optimal soln:-  time complexity is o(nlogn)+o(N*N)
     //                                           /       \  
                                     //  for Sorting   forloop &near about N for while loop
        // space is 0(No. of triplets).   
        sort(nums.begin(),nums.end());
        vector<vector<int>> arr;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                 if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    arr.push_back(temp);
                    j++;
                    k--;
                    // edge case:-
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(k>j && nums[k]==nums[k+1]){
                        k--;
                    }
                }
            }
        }
        return arr;
    }
};