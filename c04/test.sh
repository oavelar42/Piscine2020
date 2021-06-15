norminette -R CheckForbiddenSourceHeader ./ex**/ft_*.c
gcc -Wall -Wextra -Werror ./main.c ./ex**/ft_*.c && ./a.out
