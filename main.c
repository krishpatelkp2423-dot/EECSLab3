#include <stdio.h>
/*
Krish Patel
EECS Lab 3
11/6
*/


int perfect(int n) {
    int sum = 0;
    for (int i= 1; i < n; i++) 
        
        //this like bellow is the for loop that will find the divisors of the number
        {
            if (n % i == 0)
                sum += i;
        
    }
        //this if loop will add up all the factors of the number then the if loop bellow will check if the sum of the factors is equal to the number itself
        if (n == sum)
            return 1;
        else
            return 0;
    }
    


int main() {
    for (int k=6; k<=2000;k++) 
    {
    if (perfect(k)){
        printf("%d is a perfect number: 1", k);
            for (int i = 2; i < k; i++) {
                if (k % i == 0)
                    printf(", %d", i);
                //this second for and if loop is to print the factors of the perfect number
            }
            printf("\n");
    }
    
    
}
    return 0;
}
