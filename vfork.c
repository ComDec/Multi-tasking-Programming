#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    printf("+++process %d start running!ppid = %d\n",getpid(),getppid());

    pid_t pid = vfork();

    if(pid){//¸¸½ø³Ì
        printf("parent:process %d start running!ppid = %d\n",getpid(),getppid());
        printf("parent:process %d finish running!ppid = %d\n",getpid(),getppid());
    }
    else{//×Ó½ø³Ì
        printf("child:process %d start running!ppid = %d\n",getpid(),getppid());
        printf("child:process %d finsish running!ppid = %d\n",getpid(),getppid());
        exit(0);
    }

    exit(0);
}

