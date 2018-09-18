#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;


    k=0;
    while (k<5)
    {
        printf("%d\n", k);
        sum=sum+k; //use something different in "while" version
        k++;

    }
    printf ("Sum- %d\n",sum);




    for (k=11;k>1;)
    {
        k--;
        printf ("%2d \n", k);

    }
    printf("Blastoff!!\n");

}

