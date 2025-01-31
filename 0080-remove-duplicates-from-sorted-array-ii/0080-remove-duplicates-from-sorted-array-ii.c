int removeDuplicates(int* nums, int numsSize) {
    
    if(numsSize <= 2) return numsSize;

    int index = 0;

    for(int i = 0; i < numsSize; ) {

        int val = nums[i], count = 0;

        while(i < numsSize && val == nums[i])
            count++, i++;

        nums[index++] = val;

        if(count >= 2)
            nums[index++] = val;
    }

    return index;
}