#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
	char *arg1 = argv[1];

	execlp("cat","cat",arg1,NULL);
    
    return 0;
}

