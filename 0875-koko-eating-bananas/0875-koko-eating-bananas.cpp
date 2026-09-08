class Solution {
public:
int findmaximum(vector<int>& piles){
    int maxi=0;
    for(int i=0;i<piles.size();i++){
        maxi=max(piles[i],maxi);
    }
    return maxi;
}

int calculatehour(vector<int>& piles, int hours){
    int totalsum=0;
    for(int i=0;i<piles.size();i++){
        totalsum+=ceil((double)piles[i]/(double)hours);
    }
    return totalsum;
}

int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=findmaximum(piles);
        int totalh=0;
        for(;low<high;){
            int mid=(low+high)/2;
            totalh=calculatehour(piles,mid);
    if(totalh<=h){
        high=mid;
    }
    else{
        low=mid+1;
    }
        }
        return low;
    }
};