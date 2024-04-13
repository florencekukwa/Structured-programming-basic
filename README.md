# Structured-programming-basic/two swap.c
The provided code demonstrates how to swap the values of two numbers without using a temporary variable in c. 
The swapNumbers() function takes two integers a and b, and swaps their values using a simple mathematical calculation. 
The main() function prompts the user to enter two numbers, then calls the swapNumbers() function to swap the values and prints the result.

# Structured-programming-basic/remainder.c
This one demonstrates how to calculate the remainder of a division calculation in c.
The Remainder() function takes two integers, dividend and divisor, and returns the remainder.
The main() function helps the user to enter the dividend and divisor, calls the Remainder() function, and prints the result.

# Structured-programming-basic/sum.c
The code demonstrates how to calculate the sum of the digits in a three-digit number in c.
The calculateDigitSum() function takes an integer M, which represents the three-digit number, and returns the sum of its digits. 
The main() function prompts the user to enter a three-digit number, calls the calculateDigitSum() function, and prints the result.

# Structured-programming-basic/power.c
This code implements a recursive function to calculate the power of a number
Compile and run the code
The `pow_recursion` function takes two integers x (the base) and y (the raised power).
It handles both positive and negative figuress
If the exponent y is negative, the function returns -1 to indicate an error.
If the exponent y is 0, the function returns 1 (since any number raised to the power of 0 is 1).
Otherwise, the function recursively calls itself with y-1 as the new figures, and multiplies the result by x.
The `main` function demonstrates the usage of the `pow_recursion` function by calling it with the values x = 2 and y = 7, and printing the result.

# Structured-programming-basic/pyramid.c
This code prints a pyramid-like pattern of stars on the console.
after compiling and running, enter the desired number of rows
The code first takes the number of rows as input from the user.
Then, it uses nested loops to print the pyramid pattern.
The outer loop controls the number of rows, and the inner loops print the spaces and stars for each row.

# Structured-programming-basic/star.c
This code prints a rectangle pattern of stars on the console.
After compiling and running, enter the desired number of rows and columns
The code first takes the number of rows and columns as input from the user.
Then, it uses nested loops to print the rectangle pattern. 
The outer loop controls the number of rows, and the inner loop prints the stars for each row.

# Structured-programming-basic/binary search.c
This code implements the binary search algorithm to search for an element in a sorted array.
Compile and run the code
Enter the element to search in sorted order
The code first takes the size of the array and the array elements as input.
Then, it calls the binarySearch function, which performs the binary search algorithm to find the index of the specified element. If the element is found, it prints the index; otherwise, it prints that the element is not found.

# Structured-programming-basic/problem 1.c
The code calculates the credit card balance and total amount paid over a 12 months period.
It takes in the initial balance, annual interest rate, and monthly payment rate as input.
The key steps are:
It calculates the monthly interest rate from the annual interest rate.
It then loops through each of the 12 months.
For each month, it calculates the minimum payment, the unpaid balance, the interest, and the new balance.
It also tracks the total amount paid.
Finally, it prints out the monthly details and the final total paid and remaining the balance.


# Structured-programming-basic/problem 2.c
This code calculates the minimum fixed monthly payment required to pay off a loan balance within one year, given the annual interest rate.
Compile and run the it
The `FixedPayment` function takes two sets:
`balance`: the initial loan balance and
`annualInterestRate`: the annual interest rate
The function uses a loop to iteratively increase the fixed monthly payment until the loan balance is paid off within one year. 
It does this by:
Initializing the fixed monthly payment to $10.
Simulating the loan balance for 12 months, updating the balance based on the fixed payment and monthly interest rate.
If the simulated balance is less than or equal to $0, it means the loan has been paid, so the function returns the fixed monthly payment.
If the simulated balance is still positive, the function increases the fixed monthly payment by $10 and repeats the simulation.
The `main` function demonstrates the usage of the `FixedPayment` function by providing sample values for the loan balance and annual interest rate, and then prints the calculated minimum fixed monthly payment.
