#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main (void) {

        //char * word = strtok (argv[1], " ");
	char *word = NULL;
	size_t len = 0;
	ssize_t read;

        char path[128];

	read = getline(&word, &len, stdin) == -1;
	
 
	printf("%lu lenght: %lu, word: %lu\n",read,len, strlen(word));
	word[strlen(word)-1] = '\0';
	word = strtok(word, " ");
        strcpy (path, word);
	printf("%s",path);

        char * newenvp[] = { NULL };
        char * newargv[] = { path, NULL };
        printf ("[%s]\n", path);
        int ret = execve (path, newargv, newenvp);
        if (ret == -1) {
            perror("execve error");

    }
    return 0;
}
