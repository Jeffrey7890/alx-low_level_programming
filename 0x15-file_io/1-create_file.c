#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>


/**
 * create_file - create a file with -rw------- permission
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);


	fd = open(filename, O_CREAT|O_WRONLY|O_TRUNC, S_IWUSR|S_IRUSR);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = strlen(text_content);
	if (write(fd, text_content, len) != len)
	{
		close(fd);
		return (-1);
	}

	return (1);

}
