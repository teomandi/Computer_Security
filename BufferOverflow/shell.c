#include <stdio.h>
#include <stdlib.h>

int main(void){
        printf("buff overf!!!!!!!!!!!!!!!!!!!!\n");
	
	FILE * fp;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;
	fp = fopen("secure.log", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);
	
	while ((read = getline(&line, &len, fp)) != -1) {
		printf("Retrieved line of length %zu :\n", read);
		printf("%s", line);
    	}

        fclose(fp);
        if (line)
        	free(line);


	exit(1);
}
