class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> seen = new HashSet<>();
        HashSet<Integer> duplicates = new HashSet<>();

        for(int i = 0; i < nums.length; i++){
            if(!seen.add(nums[i])){
                duplicates.add(nums[i]);
            }
        }
        if(duplicates.isEmpty()){
            return false;
        }else{
            return true;
        }
    }
}