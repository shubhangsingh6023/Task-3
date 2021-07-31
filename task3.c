/*NAME: SHUBHANG SINGH
ROLL NO.: 20NA10038*/

#include<stdio.h>

void calc(int ar[], int n)
{
    int max = 0, cur = 0;
    for(int i = 0; i<n; i++)
    {
        cur+= ar[i];
        if(cur>max)
        {
            max = cur;
        }
        if(cur<0)
        {
            cur = 0;
        }
    }
    printf("%d", max);
}
int main()
{
    int n, c = 0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter all the elements of array: ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]<0)
            c++;
    }
    if(c==n)
    {
        int max = ar[0];
        for(int i = 0; i<n; i++)
        {
            if(ar[i]>max)
                max = ar[i];
        }
        printf("%d",max);
    }
    else
        calc(ar, n);
    return 0;
}
