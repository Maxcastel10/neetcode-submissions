class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0;
        int r = h.size() - 1;
        int maxw = 0;

        while (l < r) {
            maxw = max(maxw, min(h[r], h[l]) * (r - l));
            leftright(h, l, r);
        }

        return maxw;
    }

    void leftright(vector<int>& h, int& l, int& r) {
        if (h[l] > h[r]) {
            r--;
        } 
        else if (h[l] < h[r]) {
            l++;
        } 
        else {
            l++;
            r--;
        }
    }
};