#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
int main()
{
    pid_t pid;
    //printf("Hello!");
    //printf("Hello!\n");
    pid = fork();
    printf("Where is codes?\n");
    int i = 1;
    if (pid < 0)
        printf("Error Occur!\n");
    else if (pid != 0)
	{
	printf("I am child process, PID is %d, my father's PID is %d\n",getpid(),getppid());
	i+=2;
	printf("Child progress i to %d\n",i);
	}
        
    else
	{
        printf("I am father process, PID is %d, my father's PID is %d\n",getpid(),getppid());
	i++;
	printf("Father progress i to %d\n",i);
	}
	printf("i value is %d\n",i);        
	return 0;
	printf("i value is %d\n",i); 
}
