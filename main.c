/* gcc -Wall -Werror -Wextra ex06/ft_print_alphabet.c ex07/ft_print_numbers.c ex08/ft_is_negative.c ex09/ft_ft.c ex10/ft_swap.c ex11/ft_div_mod.c ex12/ft_iterative_factorial.c ex13/ft_recursive_factorial.c ex14/ft_sqrt.c ex15/ft_putstr.c ex16/ft_strlen.c ex17/ft_strcmp.c ex20/ft_strdup.c ex21/ft_range.c ex25/ft_foreach.c main.c ft_putchar.c
./a.out 12 6 4 abc daqzd*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_print_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_ft(int *nbr);
void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_sqrt(int nb);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);
char *ft_strdup(char *src);
int *ft_range(int min, int max);
void ft_foreach(int *tab, int length, void(*f)(int));
int ft_count_if(char **tab, int(*f)(char*));

void ft_log(int nb)
{
	dprintf(1, "%d\t", nb);
}

int main(int argc, char **argv)
{
	int *nbr;
	int div;
	int mod;
	int a;
	int b;
	int *pa;
	int *pb;
	int *pdiv;
	int *pmod;
	int *tab;
	int i;
	int hey[5];

	i = 0;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	div = 0;
	mod = 0;
	pa = &a;
	pb = &b;
	nbr = &a;
	pdiv = &div;
	pmod = &mod;

	(void)argc;
	dprintf(1, "ex06 : ");
	ft_print_alphabet();
	dprintf(1, "\nex07 : ");
	ft_print_numbers();
	dprintf(1, "\nex08 : ");
	ft_is_negative(atoi(argv[1]));
	dprintf(1, "\nex09 : ");
	ft_ft(nbr);
	dprintf(1, "%d", a);
	dprintf(1, "\nex10 : ");
	dprintf(1, "a = %d\t b = %d", a, b);
	ft_swap(pa, pb);
	dprintf(1, "\ta = %d\t b = %d", a, b);
	dprintf(1, "\nex11 : ");
	dprintf(1, "div = %d\t mod = %d", div, mod);
	ft_div_mod(a, b, pdiv, pmod);
	dprintf(1, "\tdiv = %d\t mod = %d", div, mod);
	dprintf(1, "\nex12 : ");
	dprintf(1, "%d", ft_iterative_factorial(atoi(argv[3])));
	dprintf(1, "\nex13 : ");
	dprintf(1, "%d", ft_recursive_factorial(atoi(argv[3])));
	dprintf(1, "\nex14 : ");
	dprintf(1, "%d", ft_sqrt(atoi(argv[3])));
	dprintf(1, "\nex15 : ");
	ft_putstr(argv[4]);
	dprintf(1, "\nex16 : ");
	dprintf(1,"%d", ft_strlen(argv[4]));
	dprintf(1, "\nex17 : ");
	dprintf(1, "%d", ft_strcmp(argv[4], argv[5]));
	dprintf(1, "\nex20 : ");
	dprintf(1, "%s", ft_strdup(argv[5]));
	dprintf(1, "\nex21 : ");
	tab = ft_range(10, 20);
	while (i < 10)
	{
		dprintf(1, "%d ", tab[i]);
		i++;
	}
	i = 0;
	dprintf(1, "\nex25 : ");
	while(i < 5)
	{
		hey[i] = i;
		i++;
	}
	ft_foreach(hey, 5, &ft_log);
	return 0;
}
