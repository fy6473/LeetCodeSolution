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


// if you want more better soln:-nothing just instead of adding all elmeent in map then check whose  more than n/3 we are check continuosly as we find 3 direct push_Back in new vector.
    // int n=nums.size();
    //    unordered_map<int,int> mpp;
    //    vector<int> arr;
    //    int minimum=floor(n/3)+1;
    //    for(int i=0;i<n;i++){
    //     mpp[nums[i]]++;
    //     if(mpp[nums[i]]==minimum){
    //         arr.push_back(nums[i]);
    //     }
    //    }
    //    return arr;


    // optimal soln:-in this algorithm apply see majority-I also.
//     Algorithm name:

// Boyer–Moore Voting Algorithm — Extended Version
    // t.c.:- O(2n) and space complexity :-O(1).
    int n=nums.size();
    int cnt1=0;
    int cnt2=0;
    int el1=INT_MIN;
    int el2=INT_MIN;
    for(int i=0;i<n;i++)
    if(cnt1==0 && nums[i]!=el2){
        cnt1=1;
        el1=nums[i];
    }
    else if(cnt2==0 && nums[i]!=el1){
        cnt2=1;
        el2=nums[i];
    }
    else if(el1==nums[i]){
        cnt1++;
    }
    else if(el2==nums[i]){
        cnt2++;
    }
    else{
        cnt1--;
        cnt2--;
    }
vector<int> arr;
cnt1=0;
cnt2=0;
for(int i=0;i<n;i++){
    if(el1==nums[i]){
        cnt1++;
    }
    if(el2==nums[i]){
        cnt2++;
    }
}
    int minimum=floor(n/3)+1;
    if(cnt1>=minimum){
        arr.push_back(el1);
    }
    if(cnt2>=minimum){
        arr.push_back(el2);
    }
return arr;
    }
};