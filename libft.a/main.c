#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
unsigned int ft_strlen(const char *str);
void *ft_memset(void *s, int c, unsigned int n);
void ft_bzero(void *s, unsigned int n);
void *ft_memcpy(void *dst, const void *src, unsigned int n);
void *ft_memmove(void *dst, const void *src, unsigned int n);
unsigned int ft_strlcpy(char *dst, const char *src, unsigned int dstsize);
unsigned int ft_strlcat(char *dst, const char *src, unsigned int dstsize);



int main()
{
    char c1 = 'A';
    char c2 = '9';
    char c3 = '!';

    printf("Funciones creadas:\n");
    printf("%c es %salfabético\n", c1, ft_isalpha(c1) ? "" : "not ");
    printf("%c es %sdígito\n", c2, ft_isdigit(c2) ? "" : "not ");
    printf("%c es %salfanumérico\n", c3, ft_isalnum(c3) ? "" : "not ");
    printf("%c es %sASCII\n", c1, ft_isascii(c1) ? "" : "not ");
    printf("%c es %simprimible\n", c2, ft_isprint(c2) ? "" : "not ");

    char str1[] = "Hola, mundo!";
    char str2[] = "";

    //ft_strlen
    printf("Longitud de '%s': %u\n", str1, ft_strlen(str1));
    printf("Longitud de '%s': %u\n", str2, ft_strlen(str2));

    //ft_memset
    char buffer1[20];
    ft_memset(buffer1, '*', 10);
    buffer1[10] = '\0';
    printf("Buffer con ft_memset: %s\n", buffer1);

    //ft_bzero
        char buffer3[20];
    strcpy(buffer3, "Hello, world!");
    ft_bzero(buffer3 + 6, 6);
    printf("Buffer después de ft_bzero: %s\n", buffer3);

    //ft_memcpy
    char src1[] = "Hello, world!";
    char dst1[20];
    ft_memcpy(dst1, src1, sizeof(src1));
    printf("Buffer después de ft_memcpy: %s\n", dst1);

    //ft_memmove
    char src3[] = "Hello, world!";
    char dst3[20];
    strcpy(dst3, "1234567890123456789");
    ft_memmove(dst3 + 5, src3, 8);
    printf("Buffer después de ft_memmove: %s\n", dst3);

    //ft_strlcpy
    char src5[] = "Hello, world!";
    char dst5[20];
    unsigned int n_copied5 = ft_strlcpy(dst5, src5, sizeof(dst5));
    printf("Destino después de ft_strlcpy: %s, bytes copiados: %u\n", dst5, n_copied5);

    //ft_strlcat
    char src7[] = " world!";
    char dst7[20] = "Hello,";
    unsigned int total_size7 = ft_strlcat(dst7, src7, sizeof(dst7));
    printf("Destino después de ft_strlcat: %s, tamaño total: %u\n", dst7, total_size7);
    /* -------------------------------------------------------------- */

    printf("\nFunciones estándar:\n");
    printf("%c es %salfabético\n", c1, isalpha(c1) ? "" : "not ");
    printf("%c es %sdígito\n", c2, isdigit(c2) ? "" : "not ");
    printf("%c es %salfanumérico\n", c3, isalnum(c3) ? "" : "not ");
    printf("%c es %sASCII\n", c1, isascii(c1) ? "" : "not ");
    printf("%c es %simprimible\n", c2, isprint(c2) ? "" : "not ");

    //strlen
    printf("Longitud de '%s': %lu\n", str1, strlen(str1));
    printf("Longitud de '%s': %lu\n", str2, strlen(str2));

    //memset
    char buffer2[20];
    memset(buffer2, '*', 10);
    buffer2[10] = '\0';
    printf("Buffer con memset: %s\n", buffer2);

    //bzero
    char buffer4[20];
    strcpy(buffer4, "Hello, world!");
    bzero(buffer4 + 6, 6);
    printf("Buffer después de bzero: %s\n", buffer4);

    //memcpy
    char src2[] = "Hello, world!";
    char dst2[20];
    memcpy(dst2, src2, sizeof(src2));
    printf("Buffer después de memcpy: %s\n", dst2);

    //memmove
    char src4[] = "Hello, world!";
    char dst4[20];
    strcpy(dst4, "1234567890123456789");
    memmove(dst4 + 5, src4, 8);
    printf("Buffer después de memmove: %s\n", dst4);

    //strlcpy
    char src6[] = "Hello, world!";
    char dst6[20];
    unsigned int n_copied6 = strlcpy(dst6, src6, sizeof(dst6));
    printf("Destino después de strlcpy: %s, bytes copiados: %u\n", dst6, n_copied6);

    //strlcat
    char src8[] = " world!";
    char dst8[20] = "Hello,";
    unsigned int total_size8 = strlcat(dst8, src8, sizeof(dst8));
    printf("Destino después de strlcat: %s, tamaño total: %u\n", dst8, total_size8);

    return 0;
}