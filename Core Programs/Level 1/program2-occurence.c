#include<stdio.h>
int count_occurences(char *str , char char_to_count)
{
    int count=0;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==char_to_count)
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char myString[]="Nitheeshwar B R";
    char char_to_count = 'N';
    int result = count_occurences(myString,char_to_count);
    printf("The Number of occurences of %c in %s is %d \n",char_to_count,myString,result);
    return 0;

}