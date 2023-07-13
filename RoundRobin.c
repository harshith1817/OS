#include<stdio.h>

int main()
                                                                                                                                                                                                                                  #include<stdio.h>
void main()
{

  int i,j,n,t,remain,flag=0,tq;
  int wt=0,tat=0,at[10],bt[10],rt[10];
  printf("Enter Total Process:\t ");
  scanf("%d",&n);
  remain=n;
  for(i=0;i<n;i++)
  {
    printf("Enter Arrival Time and Burst Time for Process Process Number %d :",i+1);
    scanf("%d",&at[i]);
    scanf("%d",&bt[i]);
    rt[i]=bt[i];
  }
  printf("Enter Time Quantum:\t");
  scanf("%d",&tq);
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
  for(t=0,i=0;remain!=0;)
  {
    if(rt[i]<=tq && rt[i]>0)
    {
      t+=rt[i];
      rt[i]=0;
      flag=1;
    }
    else if(rt[i]>0)
    {
      rt[i]-=tq;
      t+=tq;
    }
    if(rt[i]==0 && flag==1)
    {
      remain--;
      printf("P[%d]\t|\t%d\t|\t%d\n",i+1,t-at[i],t-at[i]-bt[i]);
      wt+=t-at[i]-bt[i];
      tat+=t-at[i];
      flag=0;
    }
    if(i==n-1)
      i=0;
    else if(at[i+1]<=t)
      i++;
    else
      i=0;
  }
  printf("\nAverage Waiting Time= %f\n",wt*1.0/n);
  printf("Avg Turnaround Time = %f",tat*1.0/n);

  return 0;
int ts,bt1[10],wt[10],tat[10],i,j=0,n,bt[10],ttat=0,twt=0,tot=0;
float awt,atat;
printf("Enter the number of Processes \n");
scanf("%d",&n);
printf("\n Enter the Timeslice \n");
scanf("%d",&ts);
printf("\n Enter the Burst Time for the process");
for(i=1;i<=n;i++){
scanf("%d",&bt1[i]);
bt[i]=bt1[i];
}
while(j<n){
for(i=1;i<=n;i++){
if(bt[i]>0){
if(bt[i]>=ts){
tot+=ts;
bt[i]=bt[i]-ts;
if(bt[i]==0){
j++;
tat[i]=tot;
}}
else{
tot+=bt[i];
bt[i]=0;
j++;
tat[i]=tot;
}}}}
for(i=1;i<=n;i++){
wt[i]=tat[i]-bt1[i];
twt=twt+wt[i];
ttat=ttat+tat[i];
}
awt=(float)twt/n;
atat=(float)ttat/n;
printf("\n PID \t BT \t WT \t TAT\n");
for(i=1;i<=n;i++) {
printf("\n %d \t %d \t %d \t %d \t\n",i,bt1[i],wt[i],tat[i]);
}
printf("\n The average Waiting Time=%f",awt);
printf("\n The average Turn around Time=%f",atat);
}
