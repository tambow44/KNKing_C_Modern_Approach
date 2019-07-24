#include <stdio.h>

#define N 8
int main(void)
{
   int   i,
         hour, minute, time, jive,
         departure[N] = { 480, 583, 679, 767, 
                        840, 945, 1140, 1305 },
           arrival[N] = { 616, 712, 811, 900,
                        968, 1075, 1280, 1438 };

   printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

   time = (hour * 60) + minute;

//   printf("Closest departure time is ");

   for (i = 0; i < N; i++) {
      if (time >= departure[i]) {
            jive = departure[i];
         if (time <= departure[i+1]) {
            jive = departure[i+1];
         }
      }

   printf("jive: %d\n", jive);
   }

   return 0;
}
