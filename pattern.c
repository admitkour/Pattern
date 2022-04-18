#include<stdio.h>
void right_pattern(int);
void rev_right_pattern(int);
int pattern(int);
void pattern4(int);
void pattern5(int);
int half_dimond(int a);
int mirror_half_dimond(int);
void solid_dimond(int p);
void paint_shape(int);
void paint_alpha_shape(int);
int main()
{

    int n;
    printf("enter n value to pattern ");
    scanf("%d",&n);
    right_pattern(n);
    printf("_______________________________________________\n");
    rev_right_pattern(n);
   /* printf("called functin pattern..........\n");*/
    pattern(n);
    /*printf("called...........\n");*/
    pattern4(n);
    pattern5(n);
    half_dimond(n);
    mirror_half_dimond(n);
    solid_dimond(n);
    paint_shape(n);
    paint_alpha_shape(n);
    return(0);
}
void right_pattern(int p)
{
    printf("right angle pattern\n");
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
void rev_right_pattern(int p)
{
    printf("revers right angle pattern \n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<p-i;j++)
            printf("*");
        printf("\n");
    }

}
int pattern(int p)
{
    printf(" mirror image of revers right angle pattern\n");
    for(int i=0;i<p;i++)
    {

        for(int j=0;j<p;j++)
            (j>=i)?printf("*"):printf(" ");
        printf("\n");
    }
    return(0);
}
void pattern4(int p)
{
    printf(" mirror image of right angle pattern.......\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<=p;j++)
            (j>=p-i)?printf("*"):printf(" ");
        printf("\n");
    }
}
void pattern5(int p)
{
    printf("pyramid pattern  printing->..........\n");
    for(int i=0;i<p;i++)
    {
        for(int k=1;k<p-i;k++)
            printf(" ");
        for(int j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}
int half_dimond(int p)
{
    printf("half dimond pattern printing ..............\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<i;j++)
            printf("*");
        printf("\n");
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<p-i;j++)
            printf("*");
        printf("\n");
    }
}

int mirror_half_dimond(int p)
{
    printf("mirror half dimond printing............\n");
    for(int i=0;i<p;i++)
    {
        for(int k=1;k<p-i;k++)
            printf(" ");
        for(int j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }
    for(int i=1;i<p;i++)
    {
        for(int k=1;k<=i;k++)
            printf(" ");
        for(int j=0;j<p-i;j++)
            printf("*");
        printf("\n");
    }
    return(0);
}
void solid_dimond(int p)
{
    printf("mirror solid dimond printing............\n");
    for(int i=0;i<p;i++)
    {
        for(int k=1;k<p-i;k++)
            printf(" ");
        for(int j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    for(int i=1;i<p;i++)
    {
        for(int k=1;k<=i;k++)
            printf(" ");
        for(int j=0;j<p-i;j++)
            printf("* ");
        printf("\n");
    }
}
void paint_shape(int p)
{
    printf(" pattern paint shape printing .................\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<p-i;j++)
            printf("*");
        for(int k=0;k<(2*i-1);k++)
            printf(" ");
        for(int j=0;j<p-i;j++)
        {
            if(j<p-1)
                printf("*");
        }
        printf("\n");
    }
}
void paint_alpha_shape(int n)
{
  printf(" paint alpha hape printing ->..........\n");
    for(int i=0;i<=n;i++)
    {
        for(int j=65;j<=65+n-i;j++)
            printf("%c",j);
        for(int k=0;k<(2*i-1);k++)
            printf(" ");
        for(int j=65+n-i;j>=65;j--)
        {
            if(j<65+n)
                printf("%c",j);
            else
            {
               j=65+n-1;
               printf("%c",j);
            }

        }
        printf("\n");
    }
}

