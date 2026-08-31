class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> visited(1001,0);
        vector<int> intersection;
        for(int n : nums1){
            visited[n]=1;
        }
        for(int m : nums2){
          if(visited[m]==1){
            intersection.push_back(m);
            visited[m]=0;
          }
        }
        return intersection;
    }
};