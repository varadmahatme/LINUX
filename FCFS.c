#include <stdio.h>

int main ()
{
  int parrive[10], pexec[10], pservice[10], pwait[10],TAT[10], i,j,n;
  float avg_wait_time, avgTAT,WAIT=0,TTAT=0;

  printf ("ENTER THE NO OF PROCESSES \n");
  scanf ("%d", &n);

  printf ("Enter the %d arrival times \n", n);
  for (i = 0; i <= n - 1; i++)
    {
      scanf ("%d", &parrive[i]);
    }

  printf ("Enter the %d excecution time\n", n);
  for (i = 0; i <= n - 1; i++)
    {
      scanf ("%d", &pexec[i]);
    }

  printf ("The arrival times entered are: \n ");
  for (i = 0; i <= n - 1; i++)
    {
      printf (" %d ", parrive[i]);
    }

  printf ("\n");
  printf ("The execution times entered are: \n ");

  for (i = 0; i <= n - 1; i++)
    {
      printf (" %d ", pexec[i]);
    }

  pservice[0] = parrive[0];

  for (i = 1; i <= n - 1; i++)
    {
      pservice[i] = pservice[i - 1] + pexec[i - 1];
    }
  printf ("\n");
  printf ("The service times calculated are: \n ");
  for (i = 0; i <= n - 1; i++)
    {
      printf (" %d ", pservice[i]);
    }

    for (i = 0; i <= n - 1; i++)
    {
      pwait[i] = pservice[i] - parrive[i];
    }

printf ("\n");
  printf ("The wait times calculated are: \n ");
  for (i = 0; i <= n - 1; i++)
    {
      printf (" %d ", pwait[i]);
    }

for(i=0;i<=n;i++)
	{
		TAT[i]=pwait[i]+pexec[i];
	}

printf ("\n");
printf ("The total TAT is : \n ");
  for (i = 0; i <= n - 1; i++)
    {
      TTAT = TTAT+TAT[i];
    }
    printf(" %f ",TTAT);
    
   printf ("\n");
   avgTAT=TTAT/n/1.0;
printf ("The avg TAT is : \n "); 
printf(" %f ",avgTAT);
   
   
   
   printf ("\n");
printf ("The total waiting time is : \n ");
  for (i = 0; i <= n - 1; i++)
    {
      WAIT = WAIT + pwait[i];
    }
    printf(" %f ",WAIT);
    
   printf ("\n");
   avg_wait_time=WAIT/n;
printf ("The avg Waiting time is : \n "); 
printf(" %f ",avg_wait_time); 

printf ("\n");
printf("The gantt chart is: \n");

for(i=0; i<=n-1;i++)
{
    for(j=0;j<=pexec[i];j++)
    {
        printf("P%d|",i);
    }
    
}

return 0;

}   