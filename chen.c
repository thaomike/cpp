#include<stdio.h>
// int a[] = {6,5,3,1,8,7,2,4};
int a[] = {5,7,3,2};

int n = 4;
// int i;

void in(int n)
{
    int i;
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}

void sapXepChon()
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int Min = a[i];
        int viTriMin = i;
        int flag = 0;
        for(j = i+1;j<n;j++)
        {
            if(a[j] < Min)
            {
                Min = a[j];
                viTriMin = j;
                flag = 1;
            }
        }
        if(!flag) break;
        a[viTriMin] = a[i];
        a[i] = Min;

        in(n);
    }
}

void sapXepChen()
{
    int i;
    for(i=1;i<n;i++)
    {
        in(i);
        int j = i-1;
        int val = a[i];
        while (j >= 0 && val < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = val;
    }
}

void sapXepDoiCho()
{
    int i;
    for(i=0;i<n;i++)
    {
        int j;
        int Min = a[i];
        int flag = 0;
        for(j=i;j<n;j++)
        {
            if(a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                flag = 1;
            }
        }
        if(!flag) break;
        in(n);
    }
}

void sapXepNoiBot()
{
    int i,j;
    for(i=n-1;i>=0;i--)
    {
        int flag = 0;
        for(j=1;j<i+1;j++)
        {
            if(a[j] < a[j-1])
            {
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
                flag = 1;
            }
        }
        if(!flag) break;
        in(n);
    }
}



int main()
{
    // sapXepChen();
    // in(8);
    // sapXepDoiCho();
    // sapXepNoiBot();
    sapXepChon();
    // in(n);
}