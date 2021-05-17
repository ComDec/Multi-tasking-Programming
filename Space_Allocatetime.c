# include<stdio.h>
# include<stdlib.h>
# include<assert.h>
# include<unistd.h>
# include<string.h>

int main()
{
    char *hdata=(char*)malloc(1024*1024*1024);
    int i=0;
    for(;i<32;i++)
    {
        memset(hdata+i*1024*1024*32,'a',1024*1024*32);//³õÊ¼»¯1GµÄ¿Õ¼ä
        sleep(1);
    }
    printf("I Will Fork\n");
    pid_t pid=fork();
    assert(pid!=-1);
    
    if(pid==0)
    {
        printf("child start\n");
        int i=0;
        for(;i<32;i++)
        {
            memset(hdata+i*1024*1024*32,'b',1024*1024*32);//ÐÞ¸Ä
            sleep(1);
        }

        printf("child over\n");
    }
    else
    {
        sleep(40);
    }

    free(hdata);
}
