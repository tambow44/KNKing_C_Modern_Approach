#include <stdio.h>

#define N 8
int main(void)
{
   int i, m_d, m_a,
       arrive_hour, arrive_minute,
       depart_hour, depart_minute,
       user_hour, user_minute, user_time,
       depart[N] = { 480, 583, 679, 767, 
                     840, 945, 1140, 1305 },
       arrive[N] = { 616, 712, 811, 900,
                     968, 1075, 1280, 1438 };

/* Collect user input */
   printf("Enter a 24-hour time: ");
    scanf("%d:%d", &user_hour, &user_minute);
   user_time = (user_hour * 60) + user_minute;

/* Weird math */
   for (i = 0; i < N-1; i++) {
   
      if (user_time <= (depart[i] + (depart[i+1] - depart[i]) / 2)) {
           depart_hour = depart[i] / 60 > 12 ? depart[i] / 60 - 12 : depart[i] / 60;
         depart_minute = depart[i] % 60;
           arrive_hour = arrive[i] / 60 > 12 ? arrive[i] / 60 - 12 : arrive[i] / 60;
         arrive_minute = arrive[i] % 60;
                   m_d = depart[i] / 60;
                   m_a = arrive[i] / 60;
         goto print_time;
      }
   }

     depart_hour = depart[N-1] / 60 > 12 ? depart[N-1] / 60 - 12 : depart[N-1] / 60;
   depart_minute = depart[N-1] % 60;

     arrive_hour = arrive[N-1] / 60 > 12 ? arrive[N-1] / 60 - 12 : arrive[N-1] / 60;
   arrive_minute = arrive[N-1] % 60;

             m_d = depart[N-1] / 60;
             m_a = arrive[N-1] / 60;

print_time:
/* Print the outcome */
   printf("Closest departure time is %02d:%02d %c.m., ", depart_hour, depart_minute, (m_d < 12) ? 'a' : 'p');
   printf("arriving at %02d:%02d %c.m.\n", arrive_hour, arrive_minute, (m_a < 12) ? 'a' : 'p');

   return 0;
}
