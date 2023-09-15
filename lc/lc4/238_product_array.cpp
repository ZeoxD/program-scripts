class Solution {
    public int[] productExceptSelf(int[] nums) {
        
        int len = nums.length;
        int[] output = new int[len];

        int val = 1;
        output[0] = 1;
        output[len-1] = 1;
        for(int i = 1; i < len; i++) {
            val = val * nums[i-1];
            output[i] = val;
        }
        
        val = 1;
        for(int i = len - 2; i>=0; i--) {
            val = val * nums[i+1];
            output[i] = output[i] * val;
        }

        return output;
    }
}
