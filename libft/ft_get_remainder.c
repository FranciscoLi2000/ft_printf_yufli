#include "get_next_line.h"

char	*ft_get_remainder(char *save)
{
	char	*remainder;
	int		i;

	if (!save)
		return (NULL);
	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == '\0')
	{
		free(save);
		return (NULL);
	}
	i++;
	remainder = ft_substr(save, i, ft_strlen(save) - i);
	free(save);
	if (!remainder)
		return (NULL);
	return (remainder);
}
