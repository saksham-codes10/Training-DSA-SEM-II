/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    *returnSize = rows * cols;
    int* result = (int*)malloc((*returnSize) * sizeof(int));

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    int idx = 0;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) {
            result[idx++] = matrix[top][j];
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            result[idx++] = matrix[i][right];
        }
        right--;
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                result[idx++] = matrix[bottom][j];
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result[idx++] = matrix[i][left];
            }
            left++;
        }
    }

    return result;
}