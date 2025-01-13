int ft_isascii(int a)
{
    if (!((a <= 126 && a >= 32) || (a <= 255 && a >= 128)))
        return 0;
    return 1;
}