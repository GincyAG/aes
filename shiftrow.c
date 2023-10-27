#include<stdio.h>

#include<stdlib.h>

#include<string.h>
 
void main()

{

int i,j;

char X[4][4],T[4][4];

printf("Enter the text :");

for(i=0;i<4;i++)

{
 
for(j=0;j<4;j++)
 
{
  
X[i][j]=getchar();
 
}

}

for(i=0;i<4;i++)

{
  
for(j=0;j<4;j++)

 {
   
 printf("%x ",X[i][j]);
 
 }printf("\n");

}

for(i=1;i<4;i++)
 
{
 
 for(j=0;j<i;j++)
  
{
 
 T[i][j]=X[i][j];
  
}
  
for(j=0;j<4;j++)
  {
  
  if(j<(4-i))
 
 {
 
  X[i][j]=X[i][j+i];

  }

  if(j>=(4-i))
  
{

  X[i][j]=T[i][j-(4-i)];
  
}
  }

 }
 
for(i=0;i<4;i++)
 
{
 
 for(j=0;j<4;j++)
 
 {

    printf("%x ",X[i][j]);
 
 }printf("\n");
 
}
 
}