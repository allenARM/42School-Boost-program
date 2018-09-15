#include "includes/printf.h"
#include "stdio.h"
int main()
{
	int d = -123;
	//char c = 'c';
	//char *str = "hola";
	int *n;
	n = &d;
	int len1;
	int len2;

	/*ft_printf("%s %c %d %i %p %o\n", str, c, d, d, &d, d);
	ft_printf("% s\n", str);
	ft_printf("sting --------- %s\n", str);
	ft_printf("char ------- %c\n", c);
	ft_printf("digit ------- %d\n", d);
	ft_printf("int -------- %i\n", d);
	ft_printf("pointer ------ %p\n", &d);
	ft_printf("octal -------- %o\n", d);
	ft_printf("unsigned char ---- %u\n", d);
	ft_printf("hex ------- %x\n", d);
	ft_printf("-------------");
	*/
	len1 = printf("%s IIIIII %s + %p", "PRIVET", "hola", n);
	printf("\n%d\n", len1);
	len2 = b_printf("%s IIIIII %s + %p", "PRIVET", "hola", n);
	printf("\n%d\n", len2);
	return (0);
}
