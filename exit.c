#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void func1(void)
{
    printf("%s\n",__func__);
}

void func2(void)
{
    printf("%s\n",__func__);
}

void func3(void)
{
    printf("%s\n",__func__);
}

int main()
{
    atexit(func1);//ÏÈµÇ¼Ç
    atexit(func2);
    atexit(func3);

    printf("hello!");

    //exit(0);
    //_exit(0); 
    return 0; 
}

