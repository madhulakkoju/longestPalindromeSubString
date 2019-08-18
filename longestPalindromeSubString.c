#include "string.h"
#include "stdio.h"
#include "stdlib.h"
int isPalindrome(char* x,int j,int n)
{int i;
	for(i=j;i<=n;i++)
	{
		if((x[i])!=(x[n-i]))
		   return -1;
	}
	return(1);
}

char* strpal(char* x,int j, int i)
{
	char *k;
	for(;j<=i;j++)
	{
	k=x[j];
	k++;
	}
	k='\0';
	k=k-(i-j);
	return k;
}
int main(){
	char* a;
	int i,n,maxl,j,st,lt;
   	a=malloc(256);
   	scanf("%255s",a);
   	n=strlen(a);
   	maxl=0;
   	for(j=0;j<n;j++)
   	{
   		if(maxl<i-j+1){
   	for(i=n-1;i>=0;i--)
   	{
   		if((maxl < i-j+1)&&(isPalindrome(a,j,i)==1))
   		{
   			maxl=i-j+1;
   			st= j;
   			lt= i;
   		}
   	}
   	}
   	else
   	break;
   	}
   	printf("%d\n",maxl);
   	for(;st<=lt;st++)
   	   printf("%c",a[st]);
    return (0);
}
