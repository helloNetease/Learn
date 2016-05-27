/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int nums[], int numsSize, int target) 
{   int i;
    int j;
    int result;
    int* ret = (int*)malloc(sizeof(int)*2);/*分配存储返回值的动态内存*/
    for(i=0;i<numsSize;i+=1)
    {
        for(j=i+1;j<numsSize;j+=1)
        {
            result=nums[i]+nums[j];
            if(result==target)
            {
                ret[0]=i;
                ret[1]=j;
                break;
            }
        }
    }
    return ret;
}
