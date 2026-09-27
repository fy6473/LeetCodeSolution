class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // brute force:- O(n4) and space is 0(no.of unique quardruplets)*2.
        // set<vector<int>> st;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             for(int l=k+1;l<n;l++){
        //                 long long sum=nums[i]+nums[j];
        //                 sum+=nums[k];
        //                 sum+=nums[l];
        //                 if(sum==target){
        //                     vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
        //                      sort(temp.begin(),temp.end());
        //                      st.insert(temp);
        //                 }
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>>arr(st.begin(),st.end());
        // return arr;



//better soln:-t.c. is O(n3*logM) and space is O(n)+O(no.of unique triplets)*2 
        set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            set<long long>hash;
                for(int k=j+1;k<n;k++){
                long long fourth=(nums[i]+nums[j]);
                    fourth=(long long)target-(fourth+nums[k]);
                    if(hash.find(fourth)!=hash.end()){
                        vector<int> temp={nums[i],nums[j],nums[k],(int)fourth};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hash.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> arr(st.begin(),st.end());
        return arr;
    }
};