#include "get_next_line.h"

char	*ft_extract_line(char *save)
{
	char	*line;
	int		i;

	if (!save || save[0] == '\0')
		return (NULL);
	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == '\n')
		i++;
	line = ft_substr(save, 0, i);
	if (!line)
		return (NULL);
	return (line);
}
