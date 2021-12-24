#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("[!] Main process started\n");
    char *arg1 = argv[1];
    pid_t pid = fork();
    if (pid < 0) {
        printf("[-] fork failed. %s\n", strerror(errno));
        return 1;
    }
    if (pid == 0) {
        sleep(2);
        pid_t child_pid = getpid();
        pid_t parent_pid = getppid();
        printf("[+] Child process : %d\n", child_pid);
        
         

	char t[100] = "Hi from child process \n";
       FILE *fp3;
	fp3 = fopen(arg1, "w");
	fprintf(fp3, "%s", t);

	fclose(fp3);
	
	
    } else {
        int status;
        pid_t child_pid = wait(&status);
        pid_t current_pid = getpid();

        printf("Parent process %d\n", current_pid);
        
	execlp("cat","cat",arg1,NULL);
    }
    return 0;
}

