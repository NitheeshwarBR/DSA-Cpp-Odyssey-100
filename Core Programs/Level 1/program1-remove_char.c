#include<stdio.h>
void remove_character(char * str , char char_to_remove)
{
    int i,j;
    for(i=0,j=0;str[i]!='\0';i++)
    {
        if(str[i]!=char_to_remove)
        {
            str[j++]=str[i];
        }
        
    }
    str[j]='\0';
}
int main()
{
    char myString[]="hello,world!";
    char char_to_remove = 'o';
    remove_character(myString,char_to_remove);
    printf("string after removing the charater is %s \n",myString);
    return 0;
}