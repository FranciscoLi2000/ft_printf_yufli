#include "get_next_line.h"

char	*ft_strjoin_and_free(char *s1, char *s2)
{
	char	*tmp;

	if (!s1)
		s1 = ft_strdup("");
	if (!s1 || !s2)
	{
		free(s1);
		return (NULL);
	}
	tmp = ft_strjoin(s1, s2);
	free(s1);
	return (tmp);
}
