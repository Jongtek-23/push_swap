#include "checker.h"

int	with_2_argc(t_list **stack_a, int argc, char **argv)
{
	int		*value;
	char	**split;
	int		i;

	argv++;
	i = 0;
	split = ft_split(*argv, ' ');
	if (split == NULL)
		return (0);
	while (split[i])
	{
		value = allocation_int(ft_atoi(split[i]));
		if (value == NULL)
			return (0);
		ft_lstadd_back(stack_a, ft_lstnew(value));
		i++;
	}
	ft_free_split(split);
	return (1);
}

int	with_more_argc(t_list **stack_a, int argc, char **argv)
{
	int		i;
	int		*value;

	i = 1;
	while (argc > 1)
	{
		value = allocation_int(ft_atoi(argv[i]));
		if (value == NULL)
			return (0);
		ft_lstadd_back(stack_a, ft_lstnew(value));
		argc--;
		i++;
	}
	return (1);
}

int	init(t_list **stack_a, int argc, char **argv)
{
	if (argc == 2)
	{
		if (with_2_argc(stack_a, argc, argv) == 0)
			return (0);
	}
	else
		if (with_more_argc(stack_a, argc, argv) == 0)
			return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	t_all	all;

	all.stack_a = NULL;
	all.stack_b = NULL;
	if (argc < 2)
		return (0);
	if (verif_values(argc, argv, &all) == 0)
	{
		printf("Error\n");
		return (0);
	}
	if (init(&(all.stack_a), argc, argv) == 0)
		return (0);
	if (handling_types(&(all.stack_a), &(all.stack_b), &all) == 0)
		return (0);
	if (check_sort_stack(all.stack_a, all.stack_b))
		printf("OK\n");
	else
		printf("KO\n");
	ft_lstclear(&(all.stack_a), free);
	ft_lstclear(&(all.stack_b), free);
	return (0);
}
