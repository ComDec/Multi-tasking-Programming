# include<stdio.h>
# include<stdlib.h>
# include<assert.h>
# include<unistd.h>

int gdata=10;//Var initialization

int main()
{
    int ldata=10;
    int *hdata=(int*)malloc(4);
    *hdata=10;

    pid_t pid=fork();
    assert(pid!=-1);
    
    //Child Progress
    if(pid==0)
    {
        printf("child:%d,%d,%d\n",gdata,ldata,*hdata);
        printf("child addr:0x%x,0x%x,0x%x\n",&gdata,&ldata,hdata);
        gdata=20;
        ldata=20;
        *hdata=20;
        printf("change num after:\n");
        printf("child:%d,%d,%d\n",gdata,ldata,*hdata);
        printf("child addr:0x%x,0x%x,0x%x\n",&gdata,&ldata,hdata);
        sleep(3);
    }
    else
    {
        sleep(3);//Asure child progress rewrite the var at first
        printf("father:%d,%d,%d\n",gdata,ldata,*hdata);
        printf("father addr:0x%x,0x%x,0x%x\n",&gdata,&ldata,hdata);
    }

    free(hdata);
}
/*
¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª
°æÈ¨ÉùÃ÷£º±¾ÎÄÎªCSDN²©Ö÷¡¸´Ï´Ï²ËµÄË¯²»×Å¡¹µÄÔ­´´ÎÄÕÂ£¬×ñÑ­CC 4.0 BY-SA°æÈ¨Ð­Òé£¬×ªÔØÇë¸½ÉÏÔ­ÎÄ³ö´¦Á´½Ó¼°±¾ÉùÃ÷¡£
Ô­ÎÄÁ´½Ó£ºhttps://blog.csdn.net/qq_43411555/article/details/106225120
*/
