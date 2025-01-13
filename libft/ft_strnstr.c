strnstr(const char *haystack(big), const char *needle(litt), size_t len)
{
    int a;
    int b;
    size_t l;

    a = 0;
    b = 0;
    l = 0;

    if (needle[0] == '\0')
    {
        return ((char*)haystack);
    }
    while (*haystack != '\0' && len > 0)
    {
        if (needle[a] == *haystack)
        {
            l = len;
            while (needle[a] == haystack[b] && needle[a] != '\0' && haystack[b] && 1 > 0)
            {
                a++;
                b++;
                l--;
            }
            if (needle[a] == '\0')
            {
                return ((char*)haystack);
            }
        }
        haystack++;
        len--;
    }
    return (NULL)
}

int main() {
    
}
