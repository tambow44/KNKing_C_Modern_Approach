#include <stdio.h>

#define N 8
int main(void)
{
   int i, depart_time, arrive_time,
       arrive_hour, arrive_minute,
       depart_hour, depart_minute,
       hour, minute, time,
       departure[N] = { 480, 583, 679, 767, 840, 945, 1140, 1305 },
       arrival[N] = { 616, 712, 811, 900, 968, 1075, 1280, 1438 };

   printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
   time = (hour * 60) + minute;

   for (i = 0; i < N-1; i++) {
   
      if (time <= (departure[i] + (departure[i+1] - departure[i]) / 2)) {
         depart_time = departure[i];
         arrive_time = arrival[i];
         goto results;
      }
   }
      depart_time = departure[N-1];
      arrive_time = arrival[N-1];

results:
     depart_hour = depart_time / 60 > 12 ? depart_time / 60 - 12 : depart_time / 60;
    depart_minute = depart_time % 60;
     arrive_hour = arrive_time / 60 > 12 ? arrive_time / 60 - 12 : arrive_time / 60;
    arrive_minute = arrive_time % 60;

   printf("Closest departure time is %02d:%02d %c.m., ", depart_hour, depart_minute, (depart_time > 11) ? 'a' : 'p');
   printf("arriving at %02d:%02d %c.m.\n", arrive_hour, arrive_minute, (arrive_time > 11) ? 'a' : 'p');

   return 0;
}
