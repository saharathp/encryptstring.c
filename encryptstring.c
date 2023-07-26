#include<stdio.h>
void encrypt(char *c)
{
    char *ptr=c;
    while(*ptr!='\0')
    {
        *ptr=*ptr+1;
        ptr++;
    }
}
int main(){
    char c[]="Sahara";
    encrypt(c);
    printf("Encrypted script=%s",c);

    return 0;
}