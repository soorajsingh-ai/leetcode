long long zeroFilledSubarray(int* nums, int numsSize) {
    long long count = 0;        // total subarrays
    long long consecutive = 0;  // length of current zero streak

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            consecutive++;
            count += consecutive;  // each new zero extends previous subarrays
        } else {
            consecutive = 0;       // reset when non-zero found
        }
    }
    return count;
}

