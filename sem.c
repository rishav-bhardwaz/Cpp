#include<stdio.h>
// Declaration of structure //
struct timetable
{int sno;
 char trainname[30];
 int number;
 int arrival;
 int departure;
 float source;
 float destination;
};
int main()
{
 // Declaration of array of structure //
 struct timetable s[7];
 int i;
 for(i=0;i< 7;i++)
 {
  printf("Enter Sno , train name , train number , arrival, departure, source and destination:\n");
  scanf("%d%s%d%d%d%s%s",&s[i].sno, &s[i].trainname, &s[i].number, &s[i].arrival, &s[i].departure, &s[i].source, &s[i].destination);
 }printf("Time Table as per Input:\n");
 for(i=0;i< 7;i++)
 {
  printf("Sno: %d\n",s[i].sno);
  printf("Train name: %s\n", s[i].trainname);
  printf("Train Number: %d\n", s[i].number);
  printf("arrival: %d\n",s[i].arrival);
  printf("Departure: %d\n",s[i].departure);
  printf("source: %s\n",s[i].source);
  printf("Destination: %s\n",s[i].destination);
 }
 return 0;
}