rm -rf libft.a
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib libft.a
rm -f ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o