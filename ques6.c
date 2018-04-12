#include<stdio.h>
#include<iostream.h>
void fcfs
void main()
{
	int n;//no. of processes 
	printf("enter the no. of processes");
	scanf("%d",&n);
	
	int c=3;//columns
	int process[n][c];
	int queue1[n][c]; //priority of queue 1 is 1 to 5
	int queue2[n][c];//priority of queue 2 is 5 to 10
	int queue3[n][c];//priority of queue 3 is 10 to 15
	int count1=0;
	int count2=0;
	int pcount=1;
    int rtime=10;
	int time=0;
	int flag=0;
	int count=0;
	int i=0;
	int j=0;
	int a;
	int x;
	int p;
	int d;
	int e;
	
	//process for entering
    for(i=0;i<n;i++)
    {
      for(j=0;j<c;j++)
      {
      
       if(j==0)
       {

       process[i][j]=pcount;
       
       printf("%d",pcount);
       pcount++;
       }
       else if(j==1)
       {
       	printf(" Enter the burst time of the process=");
       	scanf("%d",&process[i][j]);

       }
       else if(j==2)
       {
       printf(" Enter the priority of the process=");
       scanf("%d",&process[i][j]);

       }

      }
    

    }
    //entering into queue according to their range of priority
    for(i=0,p=0,d=0,e=0,j=2;i<n;i++)
    {
	 
	  if((process[i][2])<=5 && (process[i][2])>=1)
	  {
	  	
	   printf("Process %d is in queue 1\n",process[i][0]);
	   	count++;
	   	

		   	
		   	queue1[p][0]=process[i][0];
		    queue1[p][1]=process[i][1];
		    queue1[p][2]=process[i][2];
		   p++;
		   
		   
			  }   
	   
	  

	  else if((process[i][2])<=10 && (process[i][2])>=6)
	  {
	  	 printf("Process %d is in queue 2\n",process[i][0]);
	  	 count1++;
	  	 
	  	
		   
		   
		   	
		   	queue2[e][0]=process[i][0];
		    queue2[e][1]=process[i][1];
		    queue2[e][2]=process[i][2];
            e++;
		   }
		   
	  
	  else if((process[i][2])<=15 && (process[i][2])>=11)
	  {
	  	 printf("Process %d is in queue 3\n",process[i][0]);
	  	 
	  	 count2++;
	  	 
	  	  
		   	
		   	queue3[d][0]=process[i][0];
		    queue3[d][1]=process[i][1];
		    queue3[d][2]=process[i][2];
		  d++;
	  }
}
printf("\n**Queue1**\n");
for(i=0;i<count;i++)
{
 for(p=0;p<c;p++)
 {
 	printf("%d",queue1[i][p]);
 }
 printf("\n");
 
}
printf("\n**Queue2**\n");
for(i=0;i<count1;i++)
{
 for(p=0;p<c;p++)
 {
 	
 	printf("%d",queue2[i][p]);
 	
 }
 printf("\n");
}
printf("\n**Queue3**\n");
for(i=0;i<count2;i++)
{
 for(p=0;p<c;p++)
 {
 	
 	printf("%d",queue3[i][p]);
 }
 printf("\n");
 
}


void fcfs()
{
	

for(i=0;i<count;i++)
{
	a=queue1[i][1];
	while(a!=0)
	{
	
	if(a<=rtime)
	{
		if(queue1[i][1]>rtime)
		{
	       time=time+a;
		   printf("\nProcess %d completed in time %d",queue1[i][0],time);
		   a=0;
		   
		   
				   		
		}
		else
		{
		
		time=time+queue1[i][1];
		printf("\nProcess %d completed in time %d",queue1[i][0],time);
		rtime=rtime-queue1[i][1];
		a=0;
		if(rtime==0)
		{
			rtime=10;
	        break;
		}
		
	}
	}

	else if(a>rtime)
	{
		a=queue1[i][1]%10;
		
	
		time=time+(queue1[i][1]-a);
		
		
	}
	
}
	
}
}
if(flag==0)
{
   fcfs();
}
for(i=0;i<count1;i++)
        {
                for(j=i+1;j<count1;j++)
                {
                        if(queue2[i][2] > queue2[j][2])
                        {
                            for(x=0;x<3;x++) {
                                temp=queue2[i][x];
                                queue2[i][x]=queue2[j][x];
                                queue2[j][x]=temp;
                                }
                        }
                }
        }

for(i=0;i<count1;i++)
{
 for(p=0;p<c;p++)
 {
 	
 	printf("  %d    ",queue2[i][p]);
 	
 }
 printf("\n");
}
for(i=0;i<count1;i++)
{
	a=queue2[i][1];
	while(a!=0)
	{
	
	if(a<=rtime)
	{
		if(queue2[i][1]>rtime)
		{
	       time=time+a;
		   printf("\nProcess %d completed in time %d",queue2[i][0],time);
		   a=0;
		   
		   
				   		
		}
		else
		{
		
		time=time+queue2[i][1];
		printf("\nProcess %d completed in time %d",queue2[i][0],time);
		rtime=rtime-queue2[i][1];
		a=0;
		if(rtime==0)
		{
			rtime=10;
	        break;
		}
		
	}
	}

	else if(a>rtime)
	{
		a=queue2[i][1]%10;
		
	
		time=time+(queue2[i][1]-a);
		
		
	}
	
}
	
}
}
	  
	  
	
	
	
	
