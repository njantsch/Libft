char *ft_strchr(const char *str, int c)
{
    
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "Hello, world!";
    char *ptr = strchr(str, 'e');
    printf("'%s' Output of the implemented function", ft_strchr(str, 'e'))
    printf("'%s' Output of the original function", ptr)
}