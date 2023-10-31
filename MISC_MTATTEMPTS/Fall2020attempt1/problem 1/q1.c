/*
Write a function that gets as inputs
1. The day of the week on October 1
2. A day of october and returns the day of the week on that day
*/ 

#include <stdio.h>

typedef enum {MON, TUE, WED, THUR, FRI, SAT, SUN} weekday;
// assumption: day_of_month is between 1 and 31

// ====================================================================================

// function that takes in two parameters:
// 1. the first day of october, and the day of the month
weekday get_day(weekday oct1_day_of_week, int day_of_month){
  // Initialize a variable called days_since_oct1 with the value
  // day_of_month minus one, because you already include that specific day
  // this variable is used to determine how many days have passed since the first day
  int days_since_oct1 = day_of_month - 1;
  // Initialize a variable called date to represent the days passed since oct1
  int date = days_since_oct1 + oct1_day_of_week;
  // Perform a modulous division to ensure the result stays within the values of 0 to 6
  // This will help us determine what day it is,
  // The value corresponding to the weekday enums
  weekday result = (weekday) (date % 7);

  return result;
}

// Test area ====================================================================================
int main() { 
  printf("Testing: If Oct 1 is Monday, then Oct 7 is Sunday: "); 
  if (get_day(MON, 7) == SUN) printf("ok\n"); 
  else printf("fail\n"); 
 
  printf("Testing: If Oct 1 is Thursday, then Oct 20 is Tuesday: ");
  if(get_day(THUR, 20) == TUE) printf("ok\n");  
  else printf("fail\n"); 
 
  return 0; 
}