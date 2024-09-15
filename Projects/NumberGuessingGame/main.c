#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Welcoming
  printf("Welcome to the number guessing game!!!\n");
  printf("You have to guess a number between 1-100.\n");
  printf("Good luck!\n\n");

  // Random number
  srand(time(0));
  int random_number = (rand() % 100) + 1;

  // Guess of user
  int guess_of_user;
  int number_of_guesses = 0;
  do {
    number_of_guesses++;

    printf("Enter your guess: ");
    scanf("%d", &guess_of_user);

    // BUG: This would not detect wrong data type or an input higher/lower than limit.
    // Currently not sure how to do that whilst making this program

    if (guess_of_user < random_number) {
      printf("Guess a larger number!\n\n");
    } else if (guess_of_user > random_number) {
      printf("Guess a smaller number!\n\n");
    } else {
      if (number_of_guesses == 1) {
        printf("Only %d guess??? DaFaq!?\n", number_of_guesses);
      } else if (number_of_guesses < 10) {
        printf("Wow, you guessed the number in %d guesses only\n",
               number_of_guesses);
      } else {
        printf("You guessed the number in %d guesses... Try to do better.\n",
               number_of_guesses);
      }
    }
  } while (guess_of_user != random_number);

  return 0;
}
