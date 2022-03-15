/**
 * Note: The returned array must be malloced, assume caller calls free().
 
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    nums[] = {2,7,11,15};
    target = 9;
    
    int length = sizeof(nums)/sizeof(nums[0]);
    
    printf("Size of = %d\n", length);
    
    for(int i= 0; i<=length-2; i++){
        buf = nums[i]+nums[i+1];
        a = i;
        b = i+1;
        if (buf == target){
            printf("found \n");
            printf("Output = [%d,%d]\n", a, b );
        }
        
        printf("%d\n",buf);
    }
}*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int buf, a, b;
    
    int length = sizeof(nums)/sizeof(nums[0]);
    
    *returnSize = 2;
    int *arr = (int *)malloc( (*returnSize) * sizeof(int));
    
    for (int i=0; i<length; i++){
        for (int j = i+1; j<length; j++){
            if((nums[i]+nums[j] == target)){
                printf("Output = [%d,%d]\n", i, j);
            }
        }
    }

    return 0;
}
