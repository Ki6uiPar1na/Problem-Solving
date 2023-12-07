#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],terg[]="hello";
    scanf("%s",s);
    int n=strlen(s);
    int terlen=strlen(terg);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==terg[count])
        {
            count++;
        }
    }
    if(count==terlen)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
