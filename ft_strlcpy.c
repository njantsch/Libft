unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    unsigned int src_len;

    i = 0;
    src_len = 0;
    while (src[src_len])
    {
        ++src_len;
    }
    if (dest == 0)
    {
        return (src_len);
    }
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (src_len);
}
