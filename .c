//21. What will be the output of following code segment?
#include <stdio.h>

int main() {
    int i, k = 0;
    float c[100] = {0}; // Initialize all elements to 0

    for (i = 0; i < 10; i += 3) // Ensure index stays within bounds
    { if((i + 20) < 100 && (i + 16) < 100) {
            if (&c[i + 20] - &c[i + 16]) {
                k += &c[i + 3] - &c[i];
            } else {
                k++;
            }
        }
    }

    printf("k = %d\n", k);
    return 0;
}
// A) 12
// B) 30    
// C) 48
// D) Compiler Error
// Answer: A) 12
// Explanation: The code is syntactically correct, and the loop iterates 10 times. The pointer arithmetic in the if condition evaluates to a non-zero value, so k is incremented by the difference of the two pointers. The final value of k is 12.         
// The code is syntactically correct, and the loop iterates 10 times. The pointer arithmetic in the if condition evaluates to a non-zero value, so k is incremented by the difference of the two pointers. The final value of k is 12.
// The code is syntactically correct, and the loop iterates 10 times. The pointer arithmetic in the if condition evaluates to a non-zero value, so k is incremented by the difference of the two pointers. The final value of k is 12.  
