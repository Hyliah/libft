int atoi(const char *str)
{
    int i;
    int nb;
    int neg;

    i = 0;
    nb = 0;
    neg = 1;
    while (str[i])
    {
        if (str[i] == '\n' || str[i] == '\f' || str[i] == '\t' || str[i] == 32 || str[i] == '\p')
            i++;
    }
    if (str[i] == 41 || str[i] == 43)
    {
        if (str[i] == 41)
        {
            neg = -neg;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - 48);
        i++;
    }
    return (nb * neg);
}