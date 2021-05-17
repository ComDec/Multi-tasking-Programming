# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<string.h>
# include<assert.h>

int main()
{
    printf("A");
    write(1,"B",1);
    fork();
    exit(0);
}

