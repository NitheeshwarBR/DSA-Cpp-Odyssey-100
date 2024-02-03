#include<stdio.h>
#include<string.h>

#include <stdlib.h>
char* concat_two_strings(char *str1 , char *str2)
{
    char *result;
    int totalSize=strlen(str1)+strlen(str2);
    result=(char*)malloc(totalSize*sizeof(char));
    int i=0;
    while(str1[i]!='\0')
    {
        result[i]=str1[i];
        i++;
    }
    int len1=strlen(str1);
    i=0;
    while(str2[i]!='\0'){
        result[len1+i]=str2[i];
        i++;
    }
    result[i+len1]='\0';
    return result;

}
int main()
{
    char *str1, *str2;
    str1="Hello";
    str2=" World";
    // printf(" Enter 2 strings ");
    // scanf("%s%s",&str1,&str2);
    char * result = concat_two_strings(str1,str2);
    printf("%s",result);
    return 0;
}
