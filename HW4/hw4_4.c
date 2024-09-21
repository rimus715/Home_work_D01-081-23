#include <stdio.h>
int main(int argc, char **argv)
{
    int a,b,c,d,i,min,max;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&i);
    max=((a>b&&a>c&&a>d&&a>i) ? a :(b>a&&b>c&&b>d&&b>i) ? b :(c>a&&c>b&&c>d&&c>i) ? c : (d>a&&d>c&&d>b&&d>i) ? d:i);
    min=((a<=b&&a<=c&&a<=d&&a<=i) ? a :(b<=a&&b<=c&&b<=d&&b<=i) ? b :(c<=a&&c<=b&&c<=d&&c<=i) ? c : (d<=a&&d<=c&&d<=b&&d<=i) ? d:i);
    printf("%d",max+min); 
    return 0;
}