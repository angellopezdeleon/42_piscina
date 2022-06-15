#include <string.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strcat(char *dest, const char *src)
{
    int i;
    int c;

    i = 0;
    c = ft_strlen(dest);
    while (src[i] != '\0')
        {
            dest[c] = src[i];
            c++;
            i++;
        }
    dest[c] = '\0';
    return (dest);
}

int main  (void)
{
    char dest[] = "hola";
    const char str[] = "1  y    adios";
    
	ft_strcat(dest, str);
    // printf("strcat:    %s\n", strcat(a, b));
    printf("ft_strcat: %s\n", dest);
    return (0);
}
