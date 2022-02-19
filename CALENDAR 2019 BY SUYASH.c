#include<stdio.h>
#include<string.h>
int main()
{
    char mon[10]="april",n[20],tue[20]="october",wed[20]="may",mond[20]="july",thur[20]="august",sat[20]="june";
    char sund[20]="september",tues[20]="january",fri[20]="february",frid[20]="march",frida[20]="november",sun[20]="december";
    int m,t,w,th,f,s,su;

    printf("enter month of year 2019:  ");
    gets(n);

        if((strcmp(n,mon)==0)||(strcmp(n,mond)==0))
        {
            m=1,t=2,w=3,th=4,f=5,s=6,su=7;
            printf("MON");
            while(m<=30)
            {
                printf("\t%d",m);
                m=m+7;

            }
            printf("\n");
            printf("TUE");
            while(t<=30)
            {
                printf("\t%d",t);
                t=t+7;
            }
            printf("\n");
            printf("WED");
            while(w<=30)
            {
                printf("\t%d",w);
                w=w+7;

            }
            if(strcmp(n,mond)==0)
                printf("\t31");
            printf("\n");
            printf("THU");
            while(th<=30)
            {
                printf("\t%d",th);
                th=th+7;

            }
            printf("\n");
            printf("FRI");
            while(f<=30)
            {
                printf("\t%d",f);
                f=f+7;

            }
            printf("\n");
            printf("SAT");
            while(s<=30)
            {
                printf("\t%d",s);
                s=s+7;

            }
            printf("\n");
            printf("SUN");
            while(su<=30)
            {
                printf("\t%d",su);
                su=su+7;

            }
            printf("\n");



        }
        else if((strcmp(n,tue)==0)||(strcmp(n,tues)==0))
        {
            m=7,t=1,w=2,th=3,f=4,s=5,su=6;
            printf("MON");
            printf("\t");
            while(m<=31)
            {
                printf("\t%d",m);
                m=m+7;

            }
            printf("\n");
            printf("TUE");
            while(t<=31)
            {
                printf("\t%d",t);
                t=t+7;
            }
            printf("\n");
            printf("WED");
            while(w<=31)
            {
                printf("\t%d",w);
                w=w+7;

            }
            printf("\n");
            printf("THU");
            while(th<=31)
            {
                printf("\t%d",th);
                th=th+7;

            }
            printf("\n");
            printf("FRI");
            while(f<=31)
            {
                printf("\t%d",f);
                f=f+7;

            }
            printf("\n");
            printf("SAT");
            while(s<=31)
            {
                printf("\t%d",s);
                s=s+7;

            }
            printf("\n");
            printf("SUN");
            while(su<=31)
            {
                printf("\t%d",su);
                su=su+7;

            }
            printf("\n");




        }
        else if(strcmp(n,wed)==0)
        {
        m=7,t=6,w=1,th=2,f=3,s=4,su=5;

            printf("MON");
            printf("\t");
            while(m<=31)
            {
                printf("\t%d",m);
                m=m+7;

            }

            printf("\n");
            printf("TUE");
            printf("\t");
            while(t<=31)
            {
                printf("\t%d",t);
                t=t+7;
            }
            printf("\n");
            printf("WED");
            while(w<=31)
            {
                printf("\t%d",w);
                w=w+7;

            }
            printf("\n");
            printf("THU");
            while(th<=31)
            {
                printf("\t%d",th);
                th=th+7;

            }
            printf("\n");
            printf("FRI");
            while(f<=31)
            {
                printf("\t%d",f);
                f=f+7;

            }
            printf("\n");
            printf("SAT");
            while(s<=31)
            {
                printf("\t%d",s);
                s=s+7;

            }
            printf("\n");
            printf("SUN");
            while(su<=31)
            {
                printf("\t%d",su);
                su=su+7;

            }
            printf("\n");
}
            else if(strcmp(n,thur)==0)
            {
        m=5,t=6,w=7,th=1,f=2,s=3,su=4;

            printf("MON");
            printf("\t");
            while(m<=31)
            {
                printf("\t%d",m);
                m=m+7;

            }

            printf("\n");
            printf("TUE");
            printf("\t");
            while(t<=31)
            {
                printf("\t%d",t);
                t=t+7;
            }
            printf("\n");
            printf("WED");
            printf("\t");
            while(w<=31)
            {
                printf("\t%d",w);
                w=w+7;

            }
            printf("\n");
            printf("THU");
            while(th<=31)
            {
                printf("\t%d",th);
                th=th+7;

            }
            printf("\n");
            printf("FRI");
            while(f<=31)
            {
                printf("\t%d",f);
                f=f+7;

            }
            printf("\n");
            printf("SAT");
            while(s<=31)
            {
                printf("\t%d",s);
                s=s+7;

            }
            printf("\n");
            printf("SUN");
            while(su<=31)
            {
                printf("\t%d",su);
                su=su+7;

            }
            printf("\n");


}
 else if((strcmp(n,fri)==0)||(strcmp(n,frid)==0)||(strcmp(n,frida)==0))
            {
        m=4,t=5,w=6,th=7,f=1,s=2,su=3;

            printf("MON");
            printf("\t");
            while(m<=28)
            {
                printf("\t%d",m);
                m=m+7;

            }

            printf("\n");
            printf("TUE");
            printf("\t");
            while(t<=28)
            {
                printf("\t%d",t);
                t=t+7;
            }
            printf("\n");
            printf("WED");
            printf("\t");
            while(w<=28)
            {
                printf("\t%d",w);
                w=w+7;

            }
            printf("\n");
            printf("THU");
            printf("\t");
            while(th<=28)
            {
                printf("\t%d",th);
                th=th+7;

            }
            printf("\n");
            printf("FRI");
            while(f<=28)
            {
                printf("\t%d",f);
                f=f+7;

            }
            if((strcmp(n,frid)==0)||(strcmp(n,frida)==0))
               printf("\t29");
            printf("\n");
            printf("SAT");
            while(s<=28)
            {
                printf("\t%d",s);
                s=s+7;

            }
            if((strcmp(n,frid)==0)||(strcmp(n,frida)==0))
                printf("\t30");
            printf("\n");
            printf("SUN");
            while(su<=28)
            {
                printf("\t%d",su);
                su=su+7;

            }
            if(strcmp(n,frid)==0)

            printf("\t31");




}
 else if(strcmp(n,sat)==0)
            {
        m=3,t=4,w=5,th=6,f=7,s=1,su=2;

            printf("MON");
            printf("\t");
            while(m<=30)
            {
                printf("\t%d",m);
                m=m+7;

            }

            printf("\n");
            printf("TUE");
            printf("\t");
            while(t<=30)
            {
                printf("\t%d",t);
                t=t+7;
            }
            printf("\n");
            printf("WED");
            printf("\t");
            while(w<=30)
            {
                printf("\t%d",w);
                w=w+7;

            }
            printf("\n");
           printf("THU");
           printf("\t");
            while(th<=30)
            {
                printf("\t%d",th);
                th=th+7;

            }
            printf("\n");
            printf("FRI");
            printf("\t");
            while(f<=30)
            {
                printf("\t%d",f);
                f=f+7;

            }
            printf("\n");
            printf("SAT");
            while(s<=30)
            {
                printf("\t%d",s);
                s=s+7;

            }
            printf("\n");
            printf("SUN");
            while(su<=30)
            {
                printf("\t%d",su);
                su=su+7;

            }
            printf("\n");



}
else if((strcmp(n,sun)==0)||(strcmp(n,sund)==0))
            {
        m=2,t=3,w=4,th=5,f=6,s=7,su=1;


            printf("MON\t");

            printf("30");

            while(m<30)
            {
                printf("\t%d",m);
                m=m+7;

            }

            printf("\n");
            printf("TUE");
            printf("\t");
            if(strcmp(n,sun)==0)
                printf("31");
            while(t<=30)
            {
                printf("\t%d",t);
                t=t+7;
            }
            printf("\n");
            printf("WED");
            printf("\t");
            while(w<=30)
            {
                printf("\t%d",w);
                w=w+7;

            }
            printf("\n");
           printf("THU");
           printf("\t");
            while(th<=30)
            {
                printf("\t%d",th);
                th=th+7;

            }
            printf("\n");
            printf("FRI");
            printf("\t");
            while(f<=30)
            {
                printf("\t%d",f);
                f=f+7;

            }
            printf("\n");
            printf("SAT");
            printf("\t");
            while(s<=30)
            {
                printf("\t%d",s);
                s=s+7;

            }
            printf("\n");
            printf("SUN");
            while(su<=30)
            {
                printf("\t%d",su);
                su=su+7;

            }
            printf("\n");


}
}
