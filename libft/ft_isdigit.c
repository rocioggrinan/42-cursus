int ft_isdigit( int a)
{
    if (!(a <= '9' && a >= '0'))
        return 0;
    return 1;
}