int addDigits(int num)
{
    int ret = 0;
    if (num < 10)
        return num;

    while (num != 0)
    {
        ret += (num % 10);
        num /= 10;
    }

    return addDigits(ret);
}
