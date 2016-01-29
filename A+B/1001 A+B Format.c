#include <stdio.h> 
int main()
{int a,b,s,n=1,i=0,k=0;     
char d[20];     
scanf("%d %d",&a,&b);    
s=a+b;     
if(s>999||s<-999)
{ if(s<0) 
{k=1;s=s*(-1);}       
while(s>0)
{d[i++]=s%10+48;              
if(n%3==0&&s/10!=0) d[i++]=',';  
s=s/10;
n++;}          
if(k==1) 
	d[i++]='-';         
d[i--]='\0';       
while(i>=0)
{printf("%c",d[i--]);}        
printf("\n");}
else {printf("%d\n",s);}
return 0;
}