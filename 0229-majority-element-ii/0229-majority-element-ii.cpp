class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // brute forec:- O(n2) and O(1) space.(rxcluding the output vector).
        // int n = nums.size();
        // vector<int> st;

        // for(int i = 0; i < n; i++) {
        //     int cnt = 1;
        //     int element = nums[i];

        //     for(int j = i + 1; j < n; j++) {
        //         if(element == nums[j]) {
        //             cnt++;
        //         }
        //     }

        //     if(cnt >floor(n/3)) {
        //         if(find(st.begin(), st.end(), nums[i]) != st.end()) {
        //             continue;
        //         }

        //         st.push_back(nums[i]);
        //     }
        // }

        // return st;


        // better soln:-
       int n=nums.size();
       unordered_map<int,int> mpp;
       vector<int> arr;
       for(int i=0;i<n;i++){
        mpp[nums[i]]++;
       }
       for(auto it:mpp){
        if(it.second > floor(n/3)){
            arr.push_back(it.first);
        }
       }
       return arr;
    }
};