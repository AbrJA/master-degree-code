#include <stdio.h>

int main() {
    int A[10];

    for(int i = 0; i < 10; i++) {
        A[i] = i * 2; // Initialize array with even numbers
    }
    return 0;
}

// Compile:
// gcc -std=c17 -o advanced_computing/compiled/array advanced_computing/array.c
