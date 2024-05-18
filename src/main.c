#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("test.dat", "wb");
    if(NULL != fp)
    {
        fputs(fp, "hello world\n");
        fclose(fp);
    }
    else
    {
        printf("file open failed\n");
    }
    printf("hello world\n");
    return 0;
}
