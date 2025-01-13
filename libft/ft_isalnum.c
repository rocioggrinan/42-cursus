int ft_isalnum(int a)
{
    if (!((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A') || (a <= '9' && a >= '0')))
        return 0;
    return 1;
}