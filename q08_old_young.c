// Input the age of three people and determine the oldest and youngest among them.

#include <stdio.h>
int main()
{
    int ag1, ag2, ag3, res;
    printf("Please Enter The Age Of Three People:\n");
    scanf("%d%d%d", &ag1, &ag2, &ag3);
    if (ag1 > ag2 && ag1 > ag3)
    {
        if (ag2 > ag3)
        {
            printf("%d Is Oldest Person And %d Is Youngest Person\n", ag1, ag3);
        }
        else
        {
            printf("%d Is Oldest Person And %d Is Youngest Person\n", ag1, ag2);
        }
    }
    else if (ag2 > ag1 && ag2 > ag3)

    {
        if (ag1 > ag3)
        {
            printf("%d Is Oldest Person And %d Is Youngest Person\n", ag2, ag3);
        }
        else
        {
            printf("%d Is Oldest Person And %d Is Youngest Person\n", ag2, ag1);
        }
    }
    else if (ag3 > ag1 && ag3 > ag2)
    {
        if (ag1 > ag2)
        {
            printf("%d Is Oldest Person And %d Is Youngest Person\n", ag3, ag2);
        }
        else

        {
            printf("%d Is Oldest Person And %d Is Youngest Person\n", ag3, ag1);
        }
    }

    return 0;
}
