class Solution {
    public void swap(int[] nums,int a,int b){
        int temp=nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
    }
    public void sortColors(int[] nums) {

        int start=0;
        int n=nums.length;
        int end=n-1;
        int i=0;
        while(i<=end){
            if(nums[i]==0){
                swap(nums,i,start);
                start++;
                i++;
            }
            else
            {
                if(nums[i]==2){
                    swap(nums,i,end);
                    end--;

                }
                else
                {
                    i++;
                }
            }
        }
    }
}