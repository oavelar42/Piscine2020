#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int main()
{
	printf("%d! = %d\n", -1, ft_iterative_factorial(-1));
	printf("%d! = %d\n", 0, ft_iterative_factorial(0));
	printf("%d! = %d\n", 1, ft_iterative_factorial(1));
	printf("%d! = %d\n", 4, ft_iterative_factorial(4));
	printf("%d! = %d\n", 6, ft_iterative_factorial(6));
	printf("%d! = %d\n", 10, ft_iterative_factorial(10));

	printf("--------------1-------\n");
	printf("%d! = %d\n", -1, ft_recursive_factorial(-1));
	printf("%d! = %d\n", 0, ft_recursive_factorial(0));
	printf("%d! = %d\n", 1, ft_recursive_factorial(1));
	printf("%d! = %d\n", 4, ft_recursive_factorial(4));
	printf("%d! = %d\n", 6, ft_recursive_factorial(6));
	printf("%d! = %d\n", 10, ft_recursive_factorial(10));

	printf("----------2-----------\n");
	printf("%d^%d = %d\n", 2, 0, ft_iterative_power(2, 0));
	printf("%d^%d = %d\n", 2, 2, ft_iterative_power(2, 4));
	printf("%d^%d = %d\n", 3, 3, ft_iterative_power(3, 3));
	printf("%d^%d = %d\n", 4, 5, ft_iterative_power(4, 5));
	printf("%d^%d = %d\n", -4, 5, ft_iterative_power(-4, 5));

	printf("---------3------------\n");
	printf("%d^%d = %d\n", 1, -9, ft_recursive_power(1, -9));
	printf("%d^%d = %d\n", 2, 0, ft_recursive_power(2, 0));
	printf("%d^%d = %d\n", 2, 2, ft_recursive_power(2, 4));
	printf("%d^%d = %d\n", 3, 3, ft_recursive_power(3, 3));
	printf("%d^%d = %d\n", 4, 5, ft_recursive_power(4, 5));
	printf("%d^%d = %d\n", -4, 5, ft_iterative_power(-4, 5));

	printf("------------4---------\n");
	printf("F%d = %d\n", -1, ft_fibonacci(-1));
	printf("F%d = %d\n", 0, ft_fibonacci(0));
	printf("F%d = %d\n", 1, ft_fibonacci(1));
	printf("F%d = %d\n", 2, ft_fibonacci(2));
	printf("F%d = %d\n", 3, ft_fibonacci(3));
	printf("F%d = %d\n", 4, ft_fibonacci(4));
	printf("F%d = %d\n", 5, ft_fibonacci(5));
	printf("F%d = %d\n", 8, ft_fibonacci(8));
	printf("F%d = %d\n", 30, ft_fibonacci(30));

	printf("--------------5-------\n");
	printf("sqrt(%d) = %d\n", -36, ft_sqrt(-36));
	printf("sqrt(%d) = %d\n", 0, ft_sqrt(0));
	printf("sqrt(%d) = %d\n", 4, ft_sqrt(4));
	printf("sqrt(%d) = %d\n", 7, ft_sqrt(7));
	printf("sqrt(%d) = %d\n", 9, ft_sqrt(9));
	printf("sqrt(%d) = %d\n", 678, ft_sqrt(678 * 678));
	printf("sqrt(%d) = %d\n", 5555 * 5555, ft_sqrt(5555 * 5555));
	printf("sqrt(%d) = %d\n", 10000 * 10000, ft_sqrt(10000 * 10000));


	printf("----------------6-----\n");
	printf("prime(%d) = %d\n", 3, ft_is_prime(3));
	printf("prime(%d) = %d\n", 25, ft_is_prime(25));
	printf("prime(%d) = %d\n", 17, ft_is_prime(17));
	printf("prime(%d) = %d\n", 21, ft_is_prime(21));
	printf("prime(%d) = %d\n", 36, ft_is_prime(36));
	printf("prime(%d) = %d\n", 2147483617, ft_is_prime(2147483617));
	printf("prime(%d) = %d\n", 2147483629, ft_is_prime(2147483629));
	printf("prime(%d) = %d\n", 2147483647, ft_is_prime(2147483647));
	printf("prime(%d) = %d\n", 899, ft_is_prime(899));
	printf("prime(%d) = %d\n", 289, ft_is_prime(289));
	printf("prime(%d) = %d\n", 2147483424, ft_is_prime(2147483424));

	printf("--------------7------\n");
	{
	int	index;

	index = -2;
	while (index < 100)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", 100, ft_find_next_prime(100));
	}
