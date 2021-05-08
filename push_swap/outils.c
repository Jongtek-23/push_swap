#include "push_swap.h"

int	*allocation_int(int nbr)
{
	int	*ptr;

	ptr = (int *)malloc(sizeof(int));
	if (ptr == NULL)
		return (NULL);
	*ptr = nbr;
	return (ptr);
}

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	ft_free_and_exit(t_list *stack, char **str)
{
	ft_lstclear(&stack, free);
	ft_putendl_fd("Error", 2);
	ft_free_split(str);
	exit(1);
}
