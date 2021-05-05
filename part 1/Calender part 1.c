/*

In this programe we can find out any day of the week of any month
of any year.Moreover it remind user,if user enter any wrong day or month
(example:36 month or 70 day).It also can DEFINE 29th february of a LEAP YEAR.
and it shows the genarel 28th day of february in a non-leap year*/



#include <stdio.h>
#include<windows.h>
int find_date(int d,int m, int y)
{
    int h;
    h=((d+((26*(m+1))/10)+y+(y/4)+(6*(y/100)+(y/400)))%7);

    return h;
}
void month1(int m)
{
    switch(m)
  {

    case 3 :    printf("MARCH");
                break;
    case 4 :    printf("APRIL");
                break;
    case 5 :    printf("MAY");
                break;
    case 6 :    printf("JUNE");
                break;
    case 7 :    printf("JULY");
                break;
    case 8 :    printf("AUGUST");
                break;
    case 9 :    printf("SEPTEMBER");
                break;
    case 10 :   printf("OCTOBER");
                break;
    case 11 :   printf("NOVEMBER");
                break;
    case 12 :   printf("DECEMBER");
                break;
    case 13 :   printf("JANUARY");
                break;
    case 14 :   printf("FEBRUARY");
                break;
  }
}
void dayy(int d)
{
    switch(d)
  {
    case 0 : printf("Saturday.\n"); break;
    case 1 : printf("Sunday.\n"); break;
    case 2 : printf("Monday. \n"); break;
    case 3 : printf("Tuesday. \n"); break;
    case 4 : printf("Wednesday. \n"); break;
    case 5 : printf("Thursday. \n"); break;
    case 6 : printf("Friday. \n"); break;
  }
}

int main()
{
  int h,q,m,k,j,U,day,month,year;
  printf("enter day:");
  scanf("%d",&day);
  printf("enter month(1-12):");
  scanf("%d",&month);
  printf("enter year:");
  scanf("%d",&year);

  if((year%4)==0&&(year%100)!=0&&day>=1&&day<=29)
       {
           U=70;
       }
        if((year%4)==0&&(year%100)==0&&(year%400)==0&&day>=1&&day<=29)
        {
            U=70;
        }


  q = year;
  if(month == 1)
  {
    month = 13;
    year--;
  }
  if (month == 2)
  {
    month = 14;
    year--;
  }

    printf("\n");
  h=find_date(day,month,year);
  if((month==1||month==3||month==5||month==7||month==8||month==10||month==12||month==13)&&day>=1&&day<=31)
    {


     month1(month);
     printf("%d,%d is ",day,q);
    dayy(h);

    }
  else if((month==4||month==6||month==9||month==11)&&day>=1&&day<=30)
  {
    month1(month);
    printf("%d,%d is ",day,q);
    dayy(h);
  }
  else if(month==2||month==14&&day>=1&&day<=30)
  {
       /*if((y%4)==0&&(y%100)!=0&&day>=1&&day<=29)
       {
           printf("%d,%d is ",day,q);
       }
        if((y%4)==0&&(y%100)==0&&(y%400)==0&&day>=1&&day<=29)
        {
            printf("%d,%d is ",day,q);
        }*/
        if(U==70&&day>=1&&day<=29)
        {
            month1(month);
            printf("%d,%d is ",day,q);
            dayy(h);

        }
        if(U!=70&&day>=1&&day<=28)
        {
            month1(month);
            printf("%d,%d is ",day,q);
            dayy(h);
        }

  }
  else
  {
      printf("\n\nSORRY!! You entered an invalid month or date\n\n");
  }

  printf("\n\nProgram created by MD. Sazid Al Emon\n\n\n");
   system("pause");
  return 0;
}




