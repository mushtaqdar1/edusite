/*Class: B. Tech. 2nd Semester Branch: Computer Science and Engineering
Course Title: Computer Programming Course Code: ESC-201
Lab Exercise scheduled on 31/05/2025(ESC201.2)
1. Sequence Control Instruction*/
/*#include <stdio.h>
int main()
{
printf("Step 1: Start\n");
 printf("Step 2: Process\n");
printf("Step 3: End\n");
return 0;}
*/
/*1. Sequence Control Instruction
/*2. Decision-Making Statements*/
#include <stdio.h>
int main()
{ int num = 10;
 if (num > 0)
{ printf("Number is positive.");
 } return 0;}
// if-else Statement
// #include <stdio.h>
// int main()
// { int num = -5;
//  if (num > 0)
// { printf("Positive number."); }
// else { printf("Negative number.");
//  }
// return 0;}
// /*3. switch-case Statement*/
// #include <stdio.h>
// int main()
// {
// int choice = 2;
// switch (choice)
// { case 1:
// printf("Option 1 selected.");
// break;
//  case 2:
// printf("Option 2 selected.");
// break;
// default:
// printf("Invalid choice."); }
// return 0;}
// 4. Write a C program to find the sum of the individual digits of a positive integer.
// #include <stdio.h>
// int sumOfDigits(int num) {
//  int sum = 0;
//  while (num > 0) {
//  sum += num % 10; // Extract last digit and add to sum
//  num /= 10; // Remove last digit
//  }
//  return sum;
// }
// int main() {
//  int num;
//  printf("Enter a positive integer: ");
//  scanf("%d", &num);
//  printf("Sum of digits: %d\n", sumOfDigits(num));
//  return 0;
// }
// 5. for Loop
#include <stdio.h>
int main()
{
for (int i = 1; i <= 5; i++)
{ printf("%d ", i); }
 return 0;}
// 6. A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1.
// Subsequent terms are found by adding the preceding two terms in the sequence. Write a C program to
// generate the first n terms of the sequence.
#include <stdio.h>
void generateFibonacci(int n) {
 int a = 0, b = 1, next;
 printf("Fibonacci sequence: %d %d ", a, b);
 for (int i = 2; i < n; i++) {
 next = a + b;
 printf("%d ", next);
 a = b;
 b = next;
 }
 printf("\n");
}
int main() {
 int n;
 printf("Enter the number of terms: ");
 scanf("%d", &n);
 generateFibonacci(n);
 return 0;
}
// 7. Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by
// the user.
#include <stdio.h>
int isPrime(int num) {
 if (num < 2) return 0;
 for (int i = 2; i * i <= num; i++) {
 if (num % i == 0) return 0;
 }
 return 1;
}
void generatePrimes(int n) {
 printf("Prime numbers up to %d: ", n);
 for (int i = 2; i <= n; i++) {
 if (isPrime(i)) printf("%d ", i);
 }
 printf("\n");
}
int main() {
 int n;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 generatePrimes(n);
 return 0;
}
// 8. A character is entered through keyboard. Write a C program to determine whether the character
// entered is a capital letter, a small case letter, a digit or a special symbol using if-else and switch case.
// The following table shows the range of ASCII values for various characters. Characters ASCII values A
// – Z 65 – 90 a – z 97 – 122 0 – 9 48 – 57 Special symbols 0 – 47, 58 – 64, 91 – 96, 123 – 127
#include <stdio.h>
void identifyCharacter(char ch) {
 if (ch >= 65 && ch <= 90)
 printf("Capital Letter\n");
 else if (ch >= 97 && ch <= 122)
 printf("Small Letter\n");
 else if (ch >= 48 && ch <= 57)
 printf("Digit\n");
 else
 printf("Special Symbol\n");
}
int main() {
 char ch;
 printf("Enter a character: ");
 scanf(" %c", &ch); // Space before %c prevents issues with newline characters
 identifyCharacter(ch);
 return 0;
}
// 9. If cost price and selling price of an item is input through the keyboard, write a program to determine
// whether the seller has made profit or incurred loss. Write a C program to determine how much profit
// or loss incurred in percentage
#include <stdio.h>
void calculateProfitLoss(float cost, float selling) {
 float profitLoss = selling - cost;
 float percentage = (profitLoss / cost) * 100;
 if (profitLoss > 0)
 printf("Profit: %.2f%%\n", percentage);
 else if (profitLoss < 0)
 printf("Loss: %.2f%%\n", -percentage);
 else
 printf("No Profit, No Loss\n");
}
int main() {
 float cost, selling;
 printf("Enter Cost Price: ");
 scanf("%f", &cost);
 printf("Enter Selling Price: ");
 scanf("%f", &selling);
 calculateProfitLoss(cost, selling);
 return 0;
}
// 10. Write a C program to find the largest of three numbers using nested if-else.
#include <stdio.h>  
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a >= b) {
        if (a >= c) {
            printf("Largest number is: %d\n", a);
        } else {
            printf("Largest number is: %d\n", c);
        }
    } else {
        if (b >= c) {
            printf("Largest number is: %d\n", b);
        } else {
            printf("Largest number is: %d\n", c);
        }
    }
    
    return 0;
}   