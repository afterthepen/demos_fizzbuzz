//https://www.afterthepen.com
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to FizzBuzz!\n");
        for (int number = 1; number <=100; number++){
          if (((number % 3) == 0) && ((number % 5 != 0))) {
            printf("%d Fizz\n", number);
          }

          if (((number % 3) != 0) && ((number % 5 == 0))) {
            printf("%d Buzz\n", number);
          }

          if (((number % 3) == 0) && ((number % 5 == 0))) {
            printf("%d FizzBuzz\n", number);
          }

          if (((number % 3) != 0) && ((number % 5 != 0))) {
            printf("%d\n", number);
          }
        }

    return 0;
}
