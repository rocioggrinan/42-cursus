int ft_isprint(int a)
{
    if (!((a <= 126 && a >= 32)))
        return 0;
    return 1;
}