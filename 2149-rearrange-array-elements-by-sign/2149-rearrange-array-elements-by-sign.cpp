class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // brute force is :-t.c is O(2n) && space is O(n).
//         int n=nums.size();
//         int size=n/2;
//         vector<int> postive,negtive;
//         for(int i=0;i<n;i++){
//             if(nums[i]<0){
//               negtive.push_back(nums[i]);
//             }
//             else{
//               postive.push_back(nums[i]);
//             }
//         }
//         for(int i=0;i<size;i++){
//             nums[2*i]=postive[i];
//             nums[2*i+1]=negtive[i];
//         }
// return nums;




        // brute force is :-if interveiwer said there is edge case for example positive and negative element are not same let say postive is more or negative is more how you handle that:-
        // t.c. is still O(2n) && s.c. is O(n).
//         int n=nums.size();
//         int size=n/2;
//         vector<int> postive,negtive;
//         for(int i=0;i<n;i++){
//             if(nums[i]<0){
//               negtive.push_back(nums[i]);
//             }
//             else{
//               postive.push_back(nums[i]);
//             }
//         }
//          if(postive.size()>negtive.size()){
//             for(int i=0;i<negtive.size();i++){
//                 nums[2*i]=postive[i];
//                 nums[2*i+1]=negtive[i];
//             }
//             int index=negtive.size()*2;
//             for(int i=negtive.size();i<postive.size();i++){
//                 nums[index]=postive[i];
//                 index++;
//             }
//          }
//          else{
//             for(int i=0;i<postive.size();i++){
//                 nums[2*i]=postive[i];
//                 nums[2*i+1]=negtive[i];
//             }
//             int index=postive.size()*2;
//             for(int i=postive.size();i<negtive.size();i++){
//                 nums[index]=negtive[i];
//                 index++;
//             }
//          }
// return nums;



        // better approch:-t.c. is O(n) && space is O(n).
        int n=nums.size();
        vector<int> temp(n,0);
        int negativeindex=1;
        int positiveindex=0;
        for(int i=0;i<n;i++){
          if(nums[i]>0){
            temp[positiveindex]=nums[i];
            positiveindex=positiveindex+2;
          }
          else if(nums[i]<0){
            temp[negativeindex]=nums[i];
            negativeindex=negativeindex+2;
          }
        }
        return temp;
    }
};