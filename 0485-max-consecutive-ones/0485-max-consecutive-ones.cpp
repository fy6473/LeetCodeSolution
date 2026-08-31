class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maximum=0;
        int consecuted=0;
        int one=1;
        for(int i=0;i<n;i++){
            if(nums[i]==one){
                consecuted++;

                // if consectuded greater then perevious maximum consectued only then maximum update:-

                // if(consecuted>maximum){
                // maximum=consecuted;
                // }

                // it also do the same thing:- you can write anyone above one or tjis max function to update maximum.
                maximum=max(maximum,consecuted);
            }
            else{
                consecuted=0;
            }
        }
        return maximum;
    }
};