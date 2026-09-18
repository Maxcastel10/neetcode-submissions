class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& A = nums1;
        vector<int>& B = nums2;
        if (B.size() < A.size()) {
            swap(A, B);
        }
        int n = A.size();
        int m = B.size();
        int t = n + m ;
        int b = t / 2;
        int l = -1;
        int h = n - 1;
        while(1){
            int i = l + (h - l) / 2;
            int j = b  - i - 2;

            int Al = (i >= 0) ? A[i] : INT_MIN ;
            int Ar = (i+1 < n) ? A[i+1] : INT_MAX ;
            int Bl = (j >= 0) ? B[j] : INT_MIN ;
            int Br = (j+1 < m) ? B[j+1] : INT_MAX ;

            if(Al<=Br && Bl <= Ar){
                if((n+m)%2==0){
                    return (float(max(Al,Bl)+min(Ar,Br))/2);
                }else{
                    return (min(Br,Ar));
                }
            }else if(Al > Br){
                h = i - 1;
            }else{
                l = i + 1;
            }
        }

    }
};
