#include<stdio.h>
int main()
{
    float arr[8], *ptr;
    int i;
    ptr = arr;
    for(i=0; i<8; i++)
    {
        printf("[%d] = ",i);
        scanf("%f",arr[i]);
    }
    printf("The even");
    for(i=2; i<=8; i++)
    {
        if(i%2 == 0)
        printf("%f\n",*(arr[i]));
    }
    return 0;
}
