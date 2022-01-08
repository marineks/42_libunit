#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static int 		count_digits(uintptr_t ptr)
{
	int			count;
	uintptr_t	tmp;

	count = 1;
	tmp = ptr;
	while (tmp / 16 > 0)
	{
		tmp = tmp / 16;
		count++;
	}
	return (count);
}

void			ft_putptr(uintptr_t ptr)
{
	int			size;
	int			cnt;
	uintptr_t	tmp;

	size = count_digits(ptr) + 2;
	char	str[size + 1];
	str[0] = '0';
	str[1] = 'x';
	str[size] = '\0';
	tmp = ptr;
	cnt = size;
	while (cnt > 2)
	{
		str[cnt - 1] = "0123456789ABCDEF"[tmp % 16];
		tmp = tmp / 16;
		cnt--;
	}
	write(1, str, size);
}
