/*in this program we make a calender which can show the calendar of every month of every year.
Infact if there is a LEAPYEAR ,it can include the 29th day.Moreover it can
remind the user about his/her invalid[month,like(46,70,60month etc)] input*/


#include<stdio.h>
#include<windows.h>

void calender(int m,int y);

int main()
{
int m,y;
printf("Enter month(1-12):\n");
scanf("%d",&m);
printf("Enter year:\n");
scanf("%d",&y);
if(m>=1&&m<=12)
{
     if(m==1)
{
    printf("\n\nCALENDER for JANUARY,%d\n\n",y);
}
else if(m==2)
{
    printf("\n\nCALENDER for FEBRUARY,%d\n\n",y);
}
else if(m==3)
{
    printf("\n\nCALENDER for MARCH,%d\n\n",y);
}
else if(m==4)
{
    printf("\n\nCALENDER for APRIL,%d\n\n",y);
}
else if(m==5)
{
    printf("\n\nCALENDER for MAY,%d\n\n",y);
}
else if(m==6)
{
    printf("\n\nCALENDER for JUNE,%d\n\n",y);
}
else if(m==7)
{
    printf("\n\nCALENDER for JULY,%d\n\n",y);
}
else if(m==8)
{
    printf("\n\nCALENDER for AUGUST,%d\n\n",y);
}
else if(m==9)
{
    printf("\n\nCALENDER for SEPTEMBER,%d\n\n",y);
}
else if(m==10)
{
    printf("\n\nCALENDER for OCTOBER,%d\n\n",y);
}
else if(m==11)
{
    printf("\n\nCALENDER for NOVEMBER,%d\n\n",y);
}
else
{
    printf("\n\nCALENDER for DECEMBER,%d\n\n",y);
}
     calender(m,y);
}


else
    printf("\n\nYOU ENTERED AN INVALID MONTH!\n\nplease try from 1 to 12\n\n");

    printf("\n\nProgram created by MD. Sazid Al Emon\n\n\n");
    system("pause");

    return 0;

}



void calender(int m,int y)

{
    int i=1,h,n;
    if(m==4||m==6||m==8||m==9||m==11)n=30;
    else if(m==2)
    {   if(y%4==0&&y%100!=0)
 {
     n=29;
 }
    else if(y%4==0&&y%100==0&&y%400==0)
 {
    n=29;
 }
    else
    n=28;}
    else n=31;
    if(m==1){
         m=13;
         y=y-1;; }
    if(m==2){
         m=14;
         y=y-1;}

h=(i+(26*(m+1)/10)+y+(y/4)+6*(y/100)+(y/400))%7;

    if(h==0){printf("SAT SUN MON TUE WED THU FRI\n");
    for(i=1;i<=n;i++){
    if(i==8||i==15||i==22||i==29)printf("\n");
    if(i>=10)printf("%d  ",i);
    else printf("%d   ",i);
}}

    else if(h==1){printf("SUN MON TUE WED THU FRI SAT\n");
    for(i=1;i<=n;i++){
    if(i==8||i==15||i==22||i==29)printf("\n");
    if(i>=10)printf("%d  ",i);
    else printf("%d   ",i);
}}

    else if(h==2){printf("MON TUE WED THU FRI SAT SUN\n");
    for(i=1;i<=n;i++){
    if(i==8||i==15||i==22||i==29)printf("\n");
    if(i>=10)printf("%d  ",i);
    else printf("%d   ",i);
}}

    else if(h==3){printf("TUE WED THU FRI SAT SUN MON\n");
    for(i=1;i<=n;i++){
    if(i==8||i==15||i==22||i==29)printf("\n");
    if(i>=10)printf("%d  ",i);
    else printf("%d   ",i);
}}

    else if(h==4){printf("WED THU FRI SAT SUN MON TUE\n");
    for(i=1;i<=n;i++){
    if(i==8||i==15||i==22||i==29)printf("\n");
    if(i>=10)printf("%d  ",i);
    else printf("%d   ",i);
}}

    else if(h==5){printf("THU FRI SAT SUN MON TUE WED\n");
    for(i=1;i<=n;i++){
    if(i==8||i==15||i==22||i==29)printf("\n");
    if(i>=10)printf("%d  ",i);
    else printf("%d   ",i);
}}

    else if(h==6){printf("FRI SAT SUN MON TUE WED THU\n");
    for(i=1;i<=n;i++){
    if(i==8||i==15||i==22||i==29)printf("\n");
    if(i>=10)printf("%d  ",i);
    else printf("%d   ",i);}}

}
