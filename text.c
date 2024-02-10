#include <stdio.h>

int main() {
    int total_people;
    
    // Prompt user to enter the number of individuals in the party
    printf("Enter the number of individuals in the party: ");
    scanf("%d", &total_people);
    
    // Calculate the number of each type of pizza needed
    int large_pizzas = total_people / 8;
    int medium_pizzas = (total_people % 8) / 6;
    int regular_pizzas = ((total_people % 8) % 6) / 4;
    int small_pizzas = ((total_people % 8) % 6) % 4;
    
    // Display the distribution of pizza types
    printf("If there are %d individuals:\n", total_people);
    printf("1. We will need %d Large pizza(s)\n", large_pizzas);
    printf("2. We will need %d Medium pizza(s)\n", medium_pizzas);
    printf("3. We will need %d Regular pizza(s)\n", regular_pizzas);
    printf("4. We will need %d Small pizza(s)\n", small_pizzas);
    
    return 0;
}
