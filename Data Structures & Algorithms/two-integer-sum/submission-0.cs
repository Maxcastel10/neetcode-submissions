public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int,int> hash = new Dictionary<int,int>();
        for (int i=0;i<nums.Length;i++){
            hash[nums[i]] = i;
        }
        for (int i=0; i < nums.Length ; i++){
            int diff = target - nums[i];
            if(hash.ContainsKey(diff) && hash[diff] != i){
                return new int[] {i,hash[diff]};
            }
        }
        return null;
    }
}
