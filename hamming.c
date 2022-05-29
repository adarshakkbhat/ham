#include<stdio.h>
#include<string.h>
void display(int data[],int ind)
{
    int i;
    data[ind]=data[ind]^1;
    printf("Error in %dth bit. After correction, data: ",ind);
    for ( i = 0; i < 7; i++)
    {
        printf("%d",data[i]);
    }
}
int main()
{
    int r0,r1,r2,data[7],i,ind,s0,s1,s2;
    printf("Enter the 4 bit data: ");
    scanf("%d %d %d %d",&data[0],&data[1],&data[2],&data[3]);
    r0=data[1]^data[2]^data[3];
    r1=data[0]^data[1]^data[2];
    r2=data[2]^data[3]^data[0];
    data[4]=r0;
    data[5]=r1;
    data[6]=r2;
    printf("%d %d %d\n",r0,r1,r2);
    printf("Data sent: ");
    for ( i = 0; i < 7; i++)
    {
        printf("%d",data[i]);
    }
    printf("\nEnter bit position to change: ");
    scanf("%d",&ind);
    data[ind]=data[ind]^1;
    printf("Currupted data: ");
    for ( i = 0; i < 7; i++)
    {
        printf("%d",data[i]);
    }
    s0=data[1]^data[2]^data[3]^data[4];
    s1=data[0]^data[1]^data[2]^data[5];
    s2=data[2]^data[3]^data[0]^data[6];
    printf("\nSyndrome bits are: ");
    printf("%d %d %d\n",s0,s1,s2);
    if(s2==0&&s1==0&&s0==0)
       printf("No errors");
    if(s2==0&&s1==0&&s0==1)
       display(data,4);
    if(s2==0&&s1==1&&s0==0)
       display(data,5);
    if(s2==0&&s1==1&&s0==1)
       display(data,1);
    if(s2==1&&s1==0&&s0==0)
       display(data,6);
    if(s2==1&&s1==0&&s0==1)
       display(data,3);
    if(s2==1&&s1==1&&s0==0)
       display(data,0);
    if(s2==1&&s1==1&&s0==1)
       display(data,2);
}