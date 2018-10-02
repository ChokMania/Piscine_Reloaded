#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

# define BUF_SIZE 10

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
