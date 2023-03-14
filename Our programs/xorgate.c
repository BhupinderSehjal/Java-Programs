#include<stdio.h>

int main(){
    int a,b,i,temp;
    printf("A B  Output\n");
    for( i=0;i<4;i++)
    {
        temp=i;
        a=temp%2;
        temp/=2;
        b=temp%2;
        printf("%d %2d %3d\n",a,b,a^b);
    }
  
  
  
  /*  printf(\t\t\n\n\n);
    printf("The code prints the logical XOR operation of all possible combinations of two bits (0 and 1) for A and B.

Detailed Explanation:

The given code prints the output of the logical XOR (Exclusive OR) operation performed on two bits (A and B) for all possible combinations of inputs (i.e., 0 and 1 for A and B). It does this using a "for" loop that runs four times. Inside the loop, the "temp" variable takes the value of 0, 1, 2, or 3 in each iteration.

The "temp" is then used to calculate the values of A and B based on its binary representation. This is done by taking the "remainder" of "temp" when divided by 2, which gives us the value of A (0 or 1), and then dividing "temp" by 2 and taking the "remainder" again, which gives us the value of B (0 or 1).

The logical XOR operation is then performed on A and B, and the result is printed using the printf function. The output shows all possible combinations of A and B and their corresponding XOR results. 

For example:
A=0, B=0, A^B=0
A=1, B=0, A^B=1
A=0, B=1, A^B=1
A=1, B=1, A^B=0

The output clearly shows that the "XOR" operator returns true (1) when the inputs are different, and false (0) when they are the same.

References:
- C Programming Language (2nd Edition) by Brian Kernighan and Dennis Ritchie.");
    } */
    return 0;
}