class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        
       List<List<Integer>> ans = new ArrayList<>();
        Arrays.sort(nums);

        for(int i=0;i<nums.length;i++){
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int restj = i+1;
            int last = nums.length-1;

            while(restj < last){
                int g=nums[i]+nums[restj]+nums[last];
                if(g==0){
                    List<Integer> res = new ArrayList<>();
                    res.add(nums[i]);
                    res.add(nums[restj]);
                    res.add(nums[last]);
                    ans.add(res);
                    while(restj<last && nums[restj]==nums[restj+1]){
                        restj++;
                    }
                    while(restj<last && nums[last]==nums[last-1]){
                        last--;
                    }
                    restj++;
                    last--;
                }
                else if (g<0){
                    restj++;
                }
                else{
                    last--;
                }

            }
        }
        return ans;
    }
}