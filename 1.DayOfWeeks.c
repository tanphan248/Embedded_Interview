#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct money
{
      uint8_t day;
      uint8_t month;
      uint16_t year;
}Date;

const char *weekOfDay[] = {"Friday","Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};

const Date date = {1, 1, 2000};
Date dateCurrent = {3, 10, 2023};

bool checkYear (int countYear) {
       if(!((countYear % 4 == 0 && countYear % 100 == 0 && countYear % 400 != 0) || countYear % 4 !=0)) return true;
       else return false;
}

int result() {
     int countDay = 0;
     int countYear = date.year;

     while(1) {
            if (checkYear(countYear)) countDay++;
            if (checkYear == date.Current.year) {

                     if (checkYear(countYear)) countDay--;
                     countDay = (countYear - date.year)*365 + countDay;
                     break;
            }

      switch (dateCurrent.month) {

      case 10:
               countDay = 273 + dateCurrent.day + countDay;
              break;
      defaut:
               break;
      }

if (dateCurrent.month !=1 && dateCurrent.month != 2 && checkYear (dateCurrent.year) == true) countDay++;
return countDay;

int main() {

      int countDay = result();
      int dayOfWeek = countDay % 7;

      printf("To day is ");
      case 3:
             printf("%s", "Monday");
             break;
      case 4:
             printf("%s", "Tuesday");
             break;
      case 5:
             printf("%s", "Wednesday");
             break;
      case 6:
             printf("%s", "Thursday");
             break;
      case 0:
             printf("%s", "Friday");
             break;
      case 1:
             printf("%s", "Saturday");
             break;
      case 2:
             printf("%s", "Sunday");
             break;
      default:
             break;
      }
}



