#include <stdio.h>
  
   int main() {
   float circumference=154;
  
    float pi=22/7;
       float radius=circumference/(2*pi);                
       circumference=2*pi*radius;                       
 
     printf("Radius:%lf",radius);
 
      float area=pi*radius*radius;
        printf("Area=%lf",area);
 
 
     return 0;
  }
