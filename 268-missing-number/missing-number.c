int missingNumber(int* nums, int numsSize) {
    int xor = numsSize;  // include n

    for (int i = 0; i < numsSize; i++) {
        xor ^= i ^ nums[i];
    }

    return xor;
}