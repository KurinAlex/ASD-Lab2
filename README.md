# Algorithms and data structures - Lab 2

Write programs to perform 3 different types of tasks:
1) The search of prime numbers, the "Sieve of Eratosthenes" algorithm. In this task you need to implement two simple search algorithms 
numbers: the usual search and "Sieve of Erastosthenes". You need to solve the problem using both algorithms and compare their performance, measuring execution time
2) Conversion of numbers between numerical systems
3) The problem of a recursive algorithm

Check the correct work of programs with different input data. Do screenshots of program output results.

In tasks where any variables are entered, their setting is necessary to implement through data entry from the terminal (for example, cin).

<b>Importantly!</b> Allowed libraries to connect:
- I / O libraries: \<iostream>, \<iomanip>, <stdio.h>, <conio.h>
- library of mathematical functions: \<cmath> (math.h)
- libraries for the randomize function: \<cstdlib> (stdlib.h), \<ctime> (time.h)
- library to support Cyrillic output: \<clocale> (locale.h)
- library for support of Ukrainian letters in the Windows console: <windows.h>

1. Find the first 100 prime numbers:
    1) Implement the boolean function bool isPrime(int n), which checks the input number n for checking whether it is prime using the simple search of divisors.
    2) Implement the algorithm "Sieve of Eratosthenes" to find all prime numbers in the range from 1 to N.
    3) Solve the given task in 2 ways: with function isPrime() and with the sieve of Eratosthenes, to measure and deduce time execution of each decision.
2. Write a function to convert a natural decimal number to binary system, and a function for reverse translation. Test on a few examples.
3. Given two integers A and B. Print all numbers from A to B inclusive, in ascending order, if A <B, or in descending order in another case, 
using recursion (without the use of loops).
