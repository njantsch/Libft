char *ft_strnstr(const char *haystack, const char *needle, int n)
{
    int i;
    int j;

    i = 0;
    while (i < n && haystack[i] != '\0')
    {
        j = 0;
        while (i + j < n && haystack[i + j] == needle[j]
        && needle[j] != '\0')
        {
            j++;
        }
        if (needle[j] == '\0')
        {
            return (char *)haystack + i;
        }
        i++;
    }
    return (0);
}
