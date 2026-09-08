class Solution {
public:
        int themaximum(vector<int>& piles){
            int maxi=0;
            for(int i=0;i<piles.size();i++){
                maxi=max(piles[i],maxi);
            }
            return maxi;
        }
        int calculatetotaltime(vector<int>& piles,int hourly){
                int totaltime=0;
            for(int i=0;i<piles.size();i++){
                totaltime+=ceil((double)piles[i]/(double)hourly);
            }
            return totaltime;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=themaximum(piles);
            int totalh=0;
            // int ans=0;
            int low=1;
        for(;low<high;){
            int mid=(low+high)/2;
            totalh=calculatetotaltime(piles,mid);
            if(totalh<=h){
                // ans=totalh;
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};