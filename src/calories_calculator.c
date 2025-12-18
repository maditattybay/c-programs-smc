
// Programmer: Madi Tattybay
// No, I did not use ChatGPT at all.
// This program calculates total calories burned in a day
// based on multiple workout sessions.
// User enters minutes and workout type:
// r = running, w = walking, b = biking.
// Enter -1 to finish.

#include <stdio.h>

int minutes;
int calories;
int sum = 0;
char workoutType;

void howMuchMinutes(void);
void workoutTypeInput(void);
void calculateCalories(void);

int main(void) {
    howMuchMinutes();

    while (minutes != -1) {
        workoutTypeInput();
        calculateCalories();
        sum += calories;
        howMuchMinutes();
    }

    printf("Program ended. Your total calories burned = %d\n", sum);
    return 0;
}

void howMuchMinutes(void) {
    printf("How long did you train today? ");
    scanf("%d", &minutes);
}

void workoutTypeInput(void) {
    printf("Workout type (r = running, w = walking, b = biking): ");
    scanf(" %c", &workoutType);
}

void calculateCalories(void) {
    if (workoutType == 'r') {
        calories = 11 * minutes;
    } else if (workoutType == 'w') {
        calories = 4 * minutes;
    } else if (workoutType == 'b') {
        calories = 8 * minutes;
    } else {
        calories = 0;
    }
}
