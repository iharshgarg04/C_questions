class Solution {
    public int maxArea(int[] height) {

        int s =0;
        int e = height.length-1;

        int area = 0;

        for(int i=0;i<height.length;i++){
            int ans = Math.min(height[s],height[e])*(e-s);

            if(ans>area){
                area = ans;
            }

            if(Math.min(height[s],height[e])==height[s]){
                s++;
            }else{
                e--;
            }

        }
        return area;

    }
}