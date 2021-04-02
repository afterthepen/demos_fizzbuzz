//https://www.afterthepen.com
for (let number = 1; number <= 100; number++){
    if (((number % 3 == 0) && (number % 5 != 0))){
        console.log("Fizz " + number)
    }

    if (((number % 3 != 0) && (number % 5 == 0))){
        console.log("Buzz " + number)
    }

    if (((number % 3 == 0) && (number % 5 == 0))){
        console.log("FizzBuzz " + number)
    }

    if (((number % 3 != 0) && (number % 5 != 0))){
        console.log(number)
    }
}