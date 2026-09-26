class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // brute force:- O(n2) and O(1) space.(rxcluding the output vector).
        // int n = nums.size();
        // vector<int> st;

        // for(int i = 0; i < n; i++) {
        //     if(find(st.begin(), st.end(), nums[i]) != st.end()) {
        //         continue;
        //     }
        //     int cnt = 1;
        //     int element = nums[i];

        //     for(int j = i + 1; j < n; j++) {
        //         if(element == nums[j]) {
        //             cnt++;
        //         }
        //     }

        //     if(cnt >floor(n/3)) {
        //         st.push_back(nums[i]);
        //     }
        // }

        // return st;


        // better soln:-0(n) average and can be O(n*logN) . space:-O(n).
    //    int n=nums.size();
    //    unordered_map<int,int> mpp;
    //    vector<int> arr;
    //    for(int i=0;i<n;i++){
    //     mpp[nums[i]]++;
    //    }
    //    for(auto it:mpp){
    //     if(it.second > floor(n/3)){
    //         arr.push_back(it.first);
    //     }
    //    }
    //    return arr;


// if you want more better soln:-
    int n=nums.size();
       unordered_map<int,int> mpp;
       vector<int> arr;
       int minimum=floor(n/3)+1;
       for(int i=0;i<n;i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]]==minimum){
            arr.push_back(nums[i]);
        }
       }
       return arr;


    // optimal soln:-

    }
};