
#include<stdio.h>
#include<string.h>

int main()
{
char a[1000][1000],t;
int i,j=0,k,N,u=0,v,T;

scanf("%d",&T);

for(v=0;v<T;v++)
{
scanf("%d",&N);

for(i=0;i<N;i++)
 {
  
     scanf("%s",&a[i]);
    
    
   
}


for(i=0;i<N;i++)
 {
 for(k=0;k<N;k++)
  { 
  for(j=0;j<N-1;j++)
    {
     if(a[i][j]>a[i][j+1])
       {
       t=a[i][j];a[i][j]=a[i][j+1];a[i][j+1]=t;
     
       
         }
     
     }
    } 
  }         

for(i=0;i<N;i++)
 {
 for(k=0;k<N;k++)
  { 
  for(j=0;j<N-1;j++)
    {
     if(a[i][j]>a[i][j+1])
       {
       t=a[i][j];a[i][j]=a[i][j+1];a[i][j+1]=t;
     
       
         }
     
     }
    } 
  }         
  
  
 
for(j=0;j<N;j++)
{
 for(k=0;k<N;k++)
  { 
    for(i=0,u=0;i<N-1;i++)
     {
      if(a[i][j]>a[i+1][j])
       { u++;
         printf("NO\n");
         break;
         }
     
       }
     if(u!=0) break;
    } 
    
    if(u!=0) break;
  }         

if(u==0)printf("YES\n");


}



return 0;
}
