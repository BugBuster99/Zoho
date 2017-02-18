#include <stdio.h>
#include<string.h>
void printfunc(char *s,int j,int count)
{
    int x;
    printf("%d",count);
    for(x=0;x<j;x++)
    {
        printf("%c",s[x]);
    }
}
int termcomp(char *s[5],int i,int j,int size)
{
    int x,y,flag;
    
    for(x=i,y=j;(x<j);x++,y++)
    {
        if(y<size)
        {
            flag=strcmp(s[x],s[y]);
            if(flag==0)
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    
    return 2;
}
void traverse(char *s[5],int size)
{
    int i,j,flag,flag2,count;
    for(i=0;i<size;i++)
	{
	    count=1;
	    for(j=i+1;j<size;j++)
	    {
	        flag=strcmp(s[i],s[j]);
	        if(flag==1)
	        {
	            
	            flag2=termcomp(s,i,j,size);
	            if(flag2==0)
	            {
	                printfunc(s,j,count);
	                i=j;
	                break;
	            }
	            else
	            {
	                count++;
	            }
	        }
	    }
	}
}
int main(void) {
	char s[6]={'a','b','c','a','b','c'};
	int size;
	size=6;
    traverse(s,size);
	return 0;
}
