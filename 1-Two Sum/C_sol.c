/* Result : 133ms */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    short flag = 0;
    int* result = malloc(sizeof(int)*2);
    memset(result, -1, 2);

	for (i = 0; i < numsSize-1; i++)
	{
		for (j = i+1; j<numsSize ; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				result[0] = i;
				result[1] = j;
				flag = 1;
                break;
			}
		}
        if (flag)
            break;
	}
    return result;
}