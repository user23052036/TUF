#include<stdio.h>

int main()
{
    char *p,str[] = "hi there";
    p = "hey my name is souvik mandal";  // base address retured to p

    p[0] = 'd';  //error because string literal in c are read only type
    printf("%s\n",p);

    str[0] = 'd';
    printf("%s\n",str);
    return 0;
} 