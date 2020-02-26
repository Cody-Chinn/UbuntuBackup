#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
	pid_t pid, pid1;
	pid = fork();
	printf("Initial: %d\n", pid);

	if(pid < 0){
		fprintf(stderr, "fork() failed\n");
		return(1);
	}else if(pid == 0){
		pid1 = getpid();
		printf("child pid = %d\n", pid);
		printf("child pid1 = %d\n", pid1);
	}else{
		pid1 = getpid();
		printf("parent pid = %d\n", pid);
		printf("parent pid1 = %d\n", pid1);
		wait(NULL);
	}

	return 0;
}
