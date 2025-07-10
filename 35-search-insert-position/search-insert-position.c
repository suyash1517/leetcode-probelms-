int searchInsert(int* nums, int numsSize, int target) {
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            return i;
        }
        else if(target<nums[0])
        {
            return 0;
        }
        else if(i==numsSize-1) // number is at last
        {
            return numsSize;
        }
        else if(target>nums[i]&&target<nums[i+1]) 
        {
            return i+1;
        }
    }   return 0;
}