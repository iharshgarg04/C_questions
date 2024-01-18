import java.util.*;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        int i=0;
        int j=0;
        int res =0;

        Map<Character,Integer> ans = new HashMap<>();

        while(j<s.length()){

            if(!ans.containsKey(s.charAt(j))){
                ans.put(s.charAt(j),1);
                j++;
            }

            else{

                res = Math.max(res,j-i);
                ans.remove(s.charAt(i));
                i++;

            }

        }

        return Math.max(res,j-i);

    }
}