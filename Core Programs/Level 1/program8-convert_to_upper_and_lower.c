#include<stdio.h>
#include<string.h>

char *convert_to_lower_and_upper(char *s)
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32; 
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    return s;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    convert_to_lower_and_upper(str);

    printf("Converted string: %s\n", str);

    return 0;
}
