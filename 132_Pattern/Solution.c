
bool find132pattern(int* nums, int numsSize){
    int index = numsSize, n3 = INT_MIN;

    for (int i = numsSize - 1; i > -1; i--) {
        if (nums[i] < n3)
            return true;

        while (index < numsSize && nums[i] > nums[index]) {
            n3 = nums[index];
            index++;
        }

        index--;
        nums[index] = nums[i];
    }

    return false;
}
