long long zeroFilledSubarray(int* nums, int numsSize) {
    long long count = 0;
    long long streak = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            streak++;
            count += streak;
        } else {
            streak = 0;
        }
    }

    return count;
}