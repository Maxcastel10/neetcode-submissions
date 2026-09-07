class Solution {
public:
    int check(vector<int>& piles, int k){
        int sum=0;
        // if(k=0){
        //     return 1,000,000,001;
        // }
        for(int c : piles){
            sum+=(c + k - 1) / k;
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = 0;
        int low =1;
        for(int i : piles){
            high=max(high,i);
        }
        while(low<=high){
            int mid = low + (high - low) / 2;
            cout<<low<<" "<<mid<<" "<<high<<",";
            if(check(piles,mid)<=h){
                high = mid -1;
            }else{
                low = mid+1;
            }

        }
        return low;
        // int l;
        // for(int i=1;i<=high;i++){
        //     cout<<check(piles,i)<<","<<i<<endl;
        //     if(check(piles,i)<=h){
        //         l = i;
        //     }
        // }
        // return l;
    }
};
