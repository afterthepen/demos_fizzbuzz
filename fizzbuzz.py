#https://www.afterthepen.com
for number in range(1 , 100):
    if (number % 3 == 0 and number % 5 != 0):
        print("Fizz " + str(number))

    if (number % 3 != 0 and number % 5 == 0):
        print("Buzz " + str(number))

    if (number % 3 == 0 and number % 5 == 0):
        print("FizzBuzz " + str(number))

    if (number % 3 != 0 and number % 5 != 0):
        print(str(number))