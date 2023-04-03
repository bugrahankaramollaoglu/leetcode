int singleNumber(int *nums, int numsSize)
{
    int i = 0;
    int repeat = 0;
    int a = 0;
    while (i < numsSize)
    {
        while (a < numsSize)
        {
            if (nums[i] == nums[a])
            {
                repeat++;
                if (repeat >= 2)
                    break;
            }
            a++;
        }
        if (repeat == 1)
            return (nums[i]);
        i++;
        repeat = 0;
        a = 0;
    }
    return 0;
}