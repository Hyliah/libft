size_t  strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;

    k = 0;
    while (dest(k) && k < dstsize)
        k++;
    if (dstsize <= k)
        return (dstsize + ft_strlen(src));
    i = 0;
    j = k;
    while (src[i] && j < dstsize -1)
    {
        dst[j] = src[i];
        i++;
        j++;   
    }
    dst[j] = '\0';
    return (k + ft_strlen(src));
}