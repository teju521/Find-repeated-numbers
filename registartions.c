#include<stdio.h>
int main(void)
{
	int registation[100],a[50];
	int i,j,reg,k=0,flag=0;;
	printf("Enter the number of registrations\n");
	scanf("%d",&reg);
	for(i=0;i<reg;i++)
	scanf("%d",&registation[i]);
	for(i=0;i<reg;i++)
	{
	    for(j=0;j<k;j++)
	    {
	        if(registation[i]==registation[a[j]])
	        {
	            flag=1;
	         }
	    }  
	    if(flag==1)
	    {
	        flag=0;
	         continue;
	    
	    }
		
		for(j=0;j<reg;j++)
		{
			if(registation[i]==registation[j]&& flag==0)
			{
			 a[k++]=i;
			 flag=1;
			  
			}
		}
		flag=0;
	}
	for(i=0;i<k;i++)
	   printf("Repeated numbers are:%d\n",registation[a[i]]);
	
	return 0;
	
	
}