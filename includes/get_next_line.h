#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 42

# include "libft.h"

/* 从 static 保存的残余和 buffer 拼接 */
char	*ft_strjoin_and_free(char *s1, char *s2);

/* 从保存的内容里切出一行（包括换行） */
char	*ft_extract_line(char *save);

/* 从保存的内容里切出剩余部分（不包括换行） */
char	*ft_get_remainder(char *save);

char	*get_next_line(int fd);

#endif
