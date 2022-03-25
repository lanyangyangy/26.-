int removeDuplicates(int* nums, int numsSize){
    if(numsSize <=1)return numsSize;
    
    int slow = 0, fast = 1;
    while(fast < numsSize){
        if(nums[fast] > nums[slow]){
            slow += 1;
            nums[slow] = nums[fast];
        }
        fast = fast + 1;
    }
    return slow + 1;
}
