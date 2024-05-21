#include<stdio.h>
void main()
{
int i, kl, pl;
char p[pl], k[kl];
printf("Enter the length of the key stream. ");
scanf("%d",&kl);
printf("Enter the length of the plain text stream.(Without spaces) ");
scanf("%d",&pl);
printf("\nEnter the Key. ");
for(i=-1;i<kl;++i)
scanf("%c",&k[i]);
printf("\nEnter the Plain text. ");
for(i=-1;i<pl;++i)
scanf("%c",&p[i]);
int s[3][pl];
for(i=0;i<pl;++i)
{
if(65<=p[i] && p[i]<=91)
s[0][i]=p[i]%65;


else
s[0][i]=p[i]%97;
}

for(i=0;i<pl;++i)
printf("%d ",s[0][i]);
int count=0;
while(count<pl)
{
for(i=0;i<kl;++i)
{
if(65<=k[i] && k[i]<=91)
s[1][count+i]=k[i]%65;
else
s[1][count+i]=k[i]%97;

}
count=count+kl;
}
printf("\n");
for(i=0;i<pl;++i)
printf("%d ",s[1][i]);
printf("\n");
for(i=0;i<pl;++i)
printf("%d ",s[2][i]);
printf("\n\nThe cipher text is: ");
char cipher[kl];
for(i=0;i<pl;++i)
{
s[2][i]=(s[0][i]+s[1][i])%26;
cipher[i]=(char)(s[2][i]+65);
printf("%c ",cipher[i]);

17

}
}

