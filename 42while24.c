#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;


    k=0;
    while (k<5)
    {

        sum=sum+k; //use something different in "while" version
        k++;

    }
    printf ("4 + 6 = %d -Sum\n",sum);




    for (k=11;k>1;)
    {
        k--;
        printf ("%d\n", k);
    }

}

