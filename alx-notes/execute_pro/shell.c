#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>





	
int main(void)
{
	char *argv[2], *command = NULL, *prompt = "#cisfun$ ";

	int status;
	size_t len = 0;

	pid_t child_pid;

	argv[1] = NULL;


	while (printf("%s",prompt))
	{
		if (getline(&command, &len, stdin) == -1)
		{
			/* printf("pid[%u]", getpid()); */
			break;
		}
		else
		{
			command[strlen(command)-1] = '\0';	
			argv[0] = command;
			child_pid = fork();
			//creat_child_exec(argv, &child_pid);
			if (child_pid < 0)
			{
				perror("Error");
				exit(EXIT_FAILURE);
			}
			else if(child_pid == 0)
			{
				execve(argv[0], argv,NULL);
				perror("Error");
				exit(EXIT_FAILURE);
			}
			if (wait(&status) != child_pid)
				perror("Error");


			printf("child process[%u]\n", child_pid);

			//strcpy(argv[0],command);
			/*
			printf("%s",argv[0]);
			if (execve (argv[0], argv, NULL) == -1)
				perror("Error: ");*/

		}

	}
	printf("\n");

	return (0);
}




/*
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


		if (execve(argv[0], argv, NULL) == -1)
			perror("Error:");

	}
}

void tokenizer(char **argv, char *str)
{
	char *token, *delim = "/";

	token = strtok(str, delim);

	//printf("%s\n",token--);
	int i;

	for (i = 1; i >= 0; i--)
	{

		argv[i] = malloc(strlen(token)+1);
		strcpy(argv[i], token);
		printf("%s\n",argv[i]);
		token = strtok(NULL, "/");
	}
}
*/
