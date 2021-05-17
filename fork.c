#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int pid;
  if ((pid = fork()) == -1 )
	{
	 perror("Failed!\n");
	 exit(1);
        }
  if (pid == 0)
	{
	 printf("Hello,");
	 fflush(stdout);
	// printf("%d",getpid());
	}
  else
	{
         sleep(1);
	 printf("World\n");
	 fflush(stdout);
	 printf("%d\n",getppid());
	}
  return 0;
}
