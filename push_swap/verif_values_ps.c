#include "push_swap.h"

int	check_more_argc(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_is_nbr(argv[i]) == 0)
			return (0);
		if (ft_is_integer(argv[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_double_plus(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	verif_values(int argc, char **argv, t_all *all)
{
	if (argc == 2)
	{
		if (check_2_argc(argc, argv) == 0)
			return (0);
		if (ft_is_double(argc, argv, all) == 0)
			return (0);
	}
	else
	{
		if (check_more_argc(argc, argv) == 0)
			return (0);
		if (ft_is_double_plus(argc, argv) == 0)
			return (0);
	}
	return (1);
}
