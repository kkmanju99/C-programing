#include <stdio.h>
int main()
{
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    printf("Factors of %d are: ", num);
    for(i=2; i < num; ++i)
    {
        if (num%i == 0)
        {
            printf("composite");
            return(0);
        }
    }

    return 0;
}
