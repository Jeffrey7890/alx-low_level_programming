#ifndef _MAINH_
#define _MAINH_


struct file_t
{
	int fd;
	int rdwr;
	int close;
	char *file_name;
};

int append_text_to_file(const char *filename, char *text_content);

int create_file(const char *filename, char *text_content);

ssize_t read_textfile(const char *filename, size_t letters);

#endif
