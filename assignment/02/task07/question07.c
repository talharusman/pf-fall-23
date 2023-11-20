#include <stdio.h>

#define maxsharts 100

// Function to perform sorting based on age and price
void sortShirts(int n, int ages[], float prices[]) {
    // Bubble sort based on age in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ages[j] > ages[j + 1]) {
                // Swap ages
                int tempAge = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = tempAge;

                // Swap prices
                float tempPrice = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = tempPrice;
            }
        }
    }

    // Bubble sort based on price in descending order (within the same age)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // If ages are the same, sort by price in descending order
            if (ages[j] == ages[j + 1] && prices[j] < prices[j + 1]) {
                // Swap prices
                float tempPrice = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = tempPrice;
            }
        }
    }
}

// Function to print the sorted lists
void printSortLists(int n, int ages[], float prices[]) {
    printf("Sorted list in ascending order with respect to Age:\n");
    for (int i = 0; i < n; i++) {
        printf("Age: %d, Price: %.2f\n", ages[i], prices[i]);
    }

    printf("\nSorted list in descending order with respect to Price:\n");
    for (int i = 0; i < n; i++) {
        printf("Age: %d, Price: %.2f\n", ages[i], prices[i]);
    }
}

int main() {
    int n; // Number of shirts
    printf("Enter the number of shirts: ");
    scanf("%d", &n);

    // Input shirt details (age and price)
    int ages[maxsharts];
    float prices[maxsharts];

    printf("Enter the details for each shirt (age and price):\n");
    for (int i = 0; i < n; i++) {
        printf("Shirt %d:\n", i + 1);
        printf("Age: ");
        scanf("%d", &ages[i]);
        printf("Price: ");
        scanf("%f", &prices[i]);
    }

    sortShirts(n, ages, prices);
    printSortLists(n, ages, prices);

    return 0;
}