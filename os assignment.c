#include<stdio.h>
#include<conio.h>
void main()
{
	char p[15][7],temp[13];
	int i,j,pt[12],wt[11],totw=0,pr[10],temp1,n;
	float avgwt;
	printf("enter no of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter process%d name:",i+1);
		scanf("%s",&p[i]);
		printf("enter process time:");
		scanf("%d",&pt[i]);
		printf("enter priority:");
		scanf("%d",&pr[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i;j<n;j++)
	    {
	    	if(pr[i]>pr[j])
	    	{
	    		temp1=pr[i];
	    		pr[i]=pr[j];
	    		pr[j]=temp1;
	    		temp1=pt[i];
	    		pt[i]=pt[j];
	    		pt[j]=temp[i];
	    		strcpy(temp,p[i]);
	    		strcpy(p[i],p[j]);
	    		strcpy(p[j],temp);
			}
		}
	}
}
wt[0]=0;
for(i=1;i<ni++)
{
	wt[i]=wt[i-1]+et[i-1];
	towt=tpwt+wt[i];
}avgwt=(float)towt/n;
printf("p_name\t p_time\t priority\t w_time\n");
for(i=0;i<n;i++)
{
	printf(" %s\t %d\t %d\t %d\n"
	,p[i],pt[i],pr[i],wt[i]);
}
printf("total waiting time=%d\n avg waiting time=%f",tot,avg);
getch();
}
