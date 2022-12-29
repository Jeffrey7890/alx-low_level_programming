#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

#include <stdlib.h>
#include <unistd.h>


void creat_child_exec(char **argv, pid_t *child_pid)
{
	int status;

	if (*child_pid == -1)
	{
		perror("Error:");
		exit(98);
	}
	if (*child_pid == 0)
	{
		printf("child_pid [%u]\n",getpid());

		if (execve(argv[0], argv, NULL) == -1)
			perror("Error:");

	}
	else
	{
		wait(&status);
		printf("Waited ");
	}
}

int main(void)
{
	pid_t child_pid;
	int i;
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};


	for (i = 0; i < 5; i++)
	{	

		printf("ppid [%u]\n", getpid());
		child_pid = fork();
		creat_child_exec(argv, &child_pid);

	}

	return (0);
}
