#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*save;
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	ssize_t		bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (!ft_strchr(save, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		buffer[bytes] = '\0';
		save = ft_strjoin_and_free(save, buffer);
	}
	if (!save || *save == '\0')
		return (NULL);
	line = ft_extract_line(save);
	save = ft_get_remainder(save);
	return (line);
}
