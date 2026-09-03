class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int high = ( m * n ) - 1;
        while(low<=high){
            int mid = low + ( high - low ) / 2;
            cout<<mid<<","<<mid/n<<","<<mid%n<<";";
            if(matrix[ mid/n ][mid%n]==target){
                cout<<mid;
                return true;
            }
            else if (matrix[mid/n][mid%n]<target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
            // cout<<mid<<","<<mid/n<<","<<mid/m<<";";
        }
        return false;
    }
};
