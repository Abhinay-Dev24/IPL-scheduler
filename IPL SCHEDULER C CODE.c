#include<stdio.h>

void venue(int a)
{
    if(a==0)
        printf("Venue: Playoffs Venue 1\n");
    else if (a==-1)
        printf("Venue: Playoffs Venue 2\n");
    else printf("Venue: Home Ground of Team %d\n",a);
}
void month(int mnt[])
{
    mnt[0] = 1;
    mnt[1] = 2;0
    mnt[2] = 3;
    mnt[3] = 4;
    mnt[4] = 5;
    mnt[5] = 6;
    mnt[6] = 7;
    mnt[7] = 8;
    mnt[8] = 9;
    mnt[9] = 10;
    mnt[10] = 11;
    mnt[11] = 12;
}
void day(int k)
{
    if (k==1){
        printf("Sunday\n");
        printf("Timing-3:30pm\n");
    }
    else if (k==2){
        printf("Sunday\n");
        printf("Timing-7:30pm\n");
    }
    else if (k==3){
        printf("Monday\n");
        printf("Timing-7:30pm\n");
    }
    else if (k==4){
        printf("Tuesday\n");
        printf("Timing-7:30pm\n");
    }
    else if (k==5){
        printf("Wednesday\n");
        printf("Timing-7:30pm\n");
    }
    else if (k==6){
        printf("Thursday\n");
        printf("Timing-7:30pm\n");
    }
    else if (k==7){
        printf("Friday\n");
        printf("Timing-7:30pm\n");
    }
    else if (k==8){
        printf("Saturday\n");
        printf("Timing-3:30pm\n");
    }
    else if (k==9){
        printf("Saturday\n");
        printf("Timing-7:30pm\n");
    }
}
void date(int cal[], int mnt[])
{
    if (cal[0]==32)
    {
        if (cal[1]==11)
        {
            cal[1]=0;
            cal[2]=cal[2] + 1;
            cal[0]=1;
        }
        else
        {
            cal[1]=cal[1] + 1;
            cal[0]=1;
        }
    } 
    else if (cal[0]==31)
    {
        if ((cal[1]==3)||(cal[1]==5)||(cal[1]==8)||(cal[1]==10))
        {
            cal[1]=cal[1] + 1;
            cal[0]=1;
        }
    }
    else if ((cal[1]==1) && (cal[0]==29))
    {
        cal[1]=cal[1] + 1;
        cal[0]=1;
    }

    printf("%d-%d-%d\n",cal[0],mnt[cal[1]],cal[2]);
}
void playoffs(int b,int cal[],int mnt[])
{
    int w,x,y,h,wq1,lq1,we1,le1,wq2;
    printf("\t\tPLAYOFFS\nInput Top 4 teams of leaderboard in order: ");
    scanf("%d%d%d%d",&w,&x,&y,&h);
    printf("\t\tQualifier 1\n");
    b = b + 1;
    cal[0] = cal[0] + 1;
    if(b>9)
        b = b % 9;
    date(cal,mnt);
    day(b);
    printf("Team %d vs Team %d\n",w,x);
    venue(0);
    printf("Input winner of qualifier 1 : Team %d vs Team %d: ",w,x);
    scanf("%d",&wq1);
    if(wq1==w)
        lq1=x;
    else lq1=w;
    printf("\t\tEliminator\n");
    b = b + 1;
    cal[0] = cal[0] + 1;
    if(b>9)
        b = b % 9;
    date(cal,mnt);
    day(b);
    printf("Team %d vs Team %d\n",y,h);
    venue(-1);
    printf("Input winner of eliminator 1 : Team %d vs Team %d: ",y,h);
    scanf("%d",&we1);
    printf("\t\tQualifier 2\n");
    b = b + 2;
    cal[0] = cal[0] + 2;
    if(b>9)
        b = b % 9;
    date(cal,mnt);
    day(b);
    printf("Team %d vs Team %d\n",lq1,we1);
    venue(-1);
    printf("Input winner of Qualifier 2 : Team %d vs Team %d: ",lq1,we1);
    scanf("%d",&wq2);
    printf("\t\tFINALS\n");
    b = b + 4;
    cal[0] = cal[0] + 2;
    if(b>9)
        b = b % 9;
    date(cal,mnt);
    day(b);
    printf("Team %d vs Team %d\n",wq1,wq2);
    venue(0);
}
void league(int n,int z,int arr[],int cal[],int mnt[])
{
    int a, b, c, l, j, k, n1,d, e, x;
    n1 = n - 1;
    if(n%2==0){
    a=0;
    b=n1;
    c=b-a;
    l=0;
    
    while (c>=1){
        l=l+1;
        d=arr[a];
        e=arr[b];
        a=a+1;
        b=b-1;
        printf("Match no. : %d\n",l);
        date(cal,mnt);
        day(z);
        printf(" Team %i vs Team %i\n",d,e);
        venue(d);
        if(z==1||z==8){
            
        }
        else cal[0] = cal[0] + 1;
        z = z + 1;
        if(z>9)
            z = z % 9;
        c=b-a;
    }
    k=0;
    while (k<n1-1){
        k=k+1;
        x=arr[n1];
        
    for (j=n1;j>=1;j--){
            arr[j]=arr[j-1];
        }
    arr[1]=x;
    a=-1;
    b=n;
    c=b-a;
    while (c>1){
            a=a+1;
            b=b-1;
            d=arr[a];
            e=arr[b];
            l=l+1;
            printf("Match no. : %d\n",l);
            date(cal,mnt);
            day(z);
            printf("Team %i vs Team %i\n",d,e);
            venue(d);
            if(z==1||z==8){
                
            }
            else cal[0] = cal[0] + 1;
            z = z + 1;
            if(z>9)
                z = z % 9;
            c=b-a;

    }
    }
    k=0;
    while (k<n1){
        k=k+1;
        x=arr[n1];
        for (j=n1;j>=1;j--){
            arr[j]=arr[j-1];
        
        }
        arr[1]=x;
        a=-1;
        b=n;
        c=b-a;
        while (c>1){
            a=a+1;
            b=b-1;
            d=arr[a];
            e=arr[b];
            l=l+1;
            printf("Match no. : %d\n",l);
            date(cal,mnt);
            day(z);
            printf("Team %i vs Team %i\n",e,d);
            venue(e);
            if(z==1||z==8){
                
            }
            else cal[0] = cal[0] + 1;
            z = z + 1;
            if(z>9)
                z = z % 9;
            c=b-a;
        }
    }
    }
    else{
        a=1;
        b=n1;
        c=b-a;
        l=0;
        while (c>=1){

            l=l+1;
            d=arr[a];
            e=arr[n1];
            a=a+1;
            b=b-1;
            printf("Match no : %i\n",l);
            date(cal,mnt);
            day(z);
            printf("Team %i vs Team %i\n", d,e);
            venue(d);
            if(z==1||z==8){
                
            }
            else cal[0] = cal[0] + 1;
            z = z + 1;
            if(z>9)
                z = z % 9;
            c=b-a;
    }
    k=0;
while (k<n-1){
    k=k+1;
    x=arr[n1];
    for (j=n1;j>=1;j--){
        arr[j]=arr[j-1];
    }
    arr[0]=x;
    a=0;
    b=n;
    c=b-a;
    while (c>1){
        a=a+1;
        b=b-1;
        d=arr[a];
        e=arr[b];
        l=l+1;
        printf("Match no : %i\n",l);
        date(cal,mnt);
        day(z);
        printf("Team %i vs Team %i\n", d,e);
        venue(d);
        if(z==1||z==8){
                
            }
            else cal[0] = cal[0] + 1;
            z = z + 1;
            if(z>9)
                z = z % 9;
        c=b-a;
        
    }
}
k=0;
while (k<=n1){
    k=k+1;
    x=arr[n1];
    for (j=n1;j>=1;j--){
        arr[j]=arr[j-1];
    }
    arr[0]=x;
    a=0;
    b=n;
    c=b-a;
    while (c>1){
        a=a+1;
        b=b-1;
        d=arr[a];
        e=arr[b];
        l=l+1;
        printf("Match no : %i\n",l);
        date(cal,mnt);
        day(z);
        printf("Team %i vs Team %i\n", e,d);
        venue(e);
        if(z==1||z==8){
                
            }
            else cal[0] = cal[0] + 1;
            z = z + 1;
            if(z>9)
                z = z % 9;
        c=b-a;
    
    }
    
}
}
playoffs(z,cal,mnt);
}



int main()
{
    printf("\t\tWELCOME TO IPL SCHEDULER\n");
    int i, n, z, n1, arr[20], cal[3], mnt[12];
    month(mnt);
    printf("Input number of teams: ");
    scanf("%d",&n);
    printf("\nEnter the teams:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter date for tournament to start: ");
    scanf("%d",&cal[0]);
    printf("Enter month of commencement [1 for jan, 2 for feb, 3 for march and so on]: ");
    scanf("%d",&cal[1]);
    cal[1] = cal[1] - 1;
    printf("Enter year of occurence: ");
    scanf("%d",&cal[2]);
    printf("Enter the day of beginning of the tournament:\n\nEnter 1 for Sunday 3.30pm, 2 for Sunday 7.30pm, 3 for Monday 7.30pm, 4 for Tuesday 7.30pm, 5 for Wednesday 7.30pm, 6 for Thursday 7.30pm, 7 for Friday 7.30pm, 8 for Saturday 3.30pm, 9 for Saturday 7.30pm: ");
    scanf("%d",&z);
    if((z>=1)&&(z<=9)){}
    else do
    {
        printf("\nInvaild input\n\nEnter 1 for Sunday 3.30pm, 2 for Sunday 7.30pm, 3 for Monday 7.30pm, 4 for Tuesday 7.30pm, 5 for Wednesday 7.30pm, 6 for Thursday 7.30pm, 7 for Friday 7.30pm, 8 for Saturday 3.30pm, 9 for Saturday 7.30pm: ");
        scanf("%d",&z);
    }while((z>9)||(z<=0));
    printf("\n\t\tLEAGUE\n");
    league(n,z,arr,cal,mnt);
    
}

}
