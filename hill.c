#include<stdio.h>
#include<string.h>
int main()
{
//a[][] denotes encryption key K
//b[][] denotes K inverse
unsigned int a[3][3]={{17,17,5},{21,18,21},{2,2,19}};
unsigned int b[3][3]={{4,9,15},{15,17,6},{24,0,17}};
int i,j,n;

unsigned int c[20],d[20];
char msg[20];
int determinant=0,t=0;;
printf("Enter plain text\n ");
scanf("%s",msg);
n=strlen(msg);
for(i=0;i<n;i++)
{
c[i]=msg[i]-65;
printf("%d ",c[i]);
}
for(i=0;i<3;i++)
{
t=0;



for(j=0;j<3;j++)
{
t=t+(c[j]*a[j][i]);
}
d[i]=t%26;
}
printf("\nEncrypted Cipher Text :");
for(i=0;i<3;i++)
printf(" %c",d[i]+65);
for(i=0;i<3;i++)
{
t=0;
for(j=0;j<3;j++)
{
t=t+(d[j]*b[j][i]);
}
c[i]=t%26;
}
printf("\nDecrypted Cipher Text :");
for(i=0;i<3;i++)
printf(" %c",c[i]+65);
return 0;
}

