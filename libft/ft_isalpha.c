int ft_isalpha(int a)
{
    if (!((a <= 'Z' && a >= 'A') || (a <= 'z' && a >= 'a')))
        return 0;
    return 1;
}