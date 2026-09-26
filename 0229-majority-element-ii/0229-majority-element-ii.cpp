class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> st;

        for(int i = 0; i < n; i++) {
            int cnt = 1;
            int element = nums[i];

            for(int j = i + 1; j < n; j++) {
                if(element == nums[j]) {
                    cnt++;
                }
            }

            if(cnt >floor(n/3)) {
                if(find(st.begin(), st.end(), nums[i]) != st.end()) {
                    continue;
                }

                st.push_back(nums[i]);
            }
        }

        return st;
    }
};