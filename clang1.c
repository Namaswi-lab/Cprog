#include <stdio.h>
  
  int main(){
       float distancecovered=89.1;
      float Timetaken=2.2;
       float avgspeed;
       avgspeed=distancecovered/Timetaken;
      float avgdistancein1hr=avgspeed*1;
       printf("Average distance covered by car in 1 hour=%f",avgdistancein1hr);
      return 0;
  }
