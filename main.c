/* In the name of Allah */

#include <stdio.h>
#include <stdlib.h>

char* equation_result (char * equation)
{
    char a,b;
    char x[2];
    a = equation[0];
    b = equation [2];

    if (equation[1] == '>')
    {
        x[0] = a;
        x[1] = b;
    }
    else
    {
        x[0] = b;
        x[1] = a;
    }
    return x;
}
int main()
{
    char temp [4];
    int a = 0, b=0, c=0;
    for (int i = 0;i<3;i++)
    {
        scanf ("%s", temp);
        char *t = equation_result(temp);
        if (t[0]=='A')
            a++;
        else if (t[0] == 'B')
            b++;
        else
            c++;
        if (t[1] == 'A')
            a--;
        else if (t[1] == 'B')
            b--;
        else
            c--;
    }
    if (a== -2)
        temp[0] = 'A';
    else if (b == -2)
        temp[0] = 'B';
    else if (c == -2)
        temp[0] = 'C';
    else
    {
        printf ("Impossible\n");
        return 0;
    }


    if (a > -2 && a <2)
        temp[1] = 'A';
    else if (b>-2 && b<2)
        temp[1] = 'B';
    else if (c > -2 && c <2)
        temp[1] = 'C';
    else
    {
        printf ("Impossible\n");
        return 0;
    }

    if (a == 2)
        temp[2] = 'A';
    else if (b == 2)
        temp[2] = 'B';
    else if (c > -2 && c <2)
        temp[2] = 'C';
    else
    {
        printf ("Impossible\n");
        return 0;
    }
    temp[3] = '\0';

    printf("%s\n", temp);
    return 0;
}
