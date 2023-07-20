#include<stdio.h>
int main()
{
    int arr,size, k ,a[size],i;
    scanf("%d",&arr);
    while(arr!=0)
    {
        scanf("%d",&size);
        scanf("%d",&k);
        for(i=0;i<size;i++)
        {
            scanf("%d",a[i]);
        }
        arr--;
   }
   int target_sum;
   int total_sum = 0;
   for (i = 0; i < size; i++)
    {
        total_sum += nums[i];
    }
   target_sum = total_sum / k;
   if (total_sum % k != 0)
    {
        return 0;
    }
    if (idx == k)
    {
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        if (subset_sums[i] + nums[i] <= target_sum)
        {
            subset_sums[i] += nums[i];
            if (can_divide_into_k_subsets(nums, n, k, subset_sums, idx, target_sum))
            {
                return 1;
            }
            subset_sums[i] -= nums[i];
        }
    }
    return 0;
}
