#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(int rounds) {
  char player_move;
  char computer_move;

  int player_score = 0;
  int computer_score = 0;

  // Seed the random number generator outside the loop
  srand(time(NULL));

  for (int i = 1; i <= rounds; i++) {
    printf("\n\nRound %d\n", i);

    // Generate a random choice as the computer's move
    int randomNumber = (rand() % 3) + 1;
    switch (randomNumber) {
    case 1:
      computer_move = 'r'; // Rock
      break;
    case 2:
      computer_move = 'p'; // Paper
      break;
    case 3:
      computer_move = 's'; // Scissors
      break;
    }

    // Ask the player for their move
    printf("Please enter your choice (r/p/s): ");
    getchar(); // To consume any leftover newline character
    scanf("%c", &player_move);

    // Show the computer's move
    printf("\tComputer chose: %c\n", computer_move);

    // Check the status of the round
    if ((player_move == 'r' && computer_move == 'p') ||
        (player_move == 'p' && computer_move == 's') ||
        (player_move == 's' && computer_move == 'r')) {
      printf("You lost this round. XD\n");
      computer_score++;
    } else if ((player_move == 'r' && computer_move == 's') ||
               (player_move == 'p' && computer_move == 'r') ||
               (player_move == 's' && computer_move == 'p')) {
      printf("You won this round. Damn.\n");
      player_score++;
    } else {
      printf("This round was a tie. AHEmmmmmmm....\n");
    }

  }

  // Final result
  if (player_score > computer_score) {
    printf("Final scores: You: %d, Computer: %d\n", player_score, computer_score);
    printf("\nYou won the whole thing :)\n");
  } else if (player_score < computer_score) {
    printf("Final scores: You: %d, Computer: %d\n", player_score, computer_score);
    printf("\nYou lost the game. WOMP WOMP. I'm sorry...\n");
  } else {
    printf("Final scores: You: %d, Computer: %d\n", player_score, computer_score);
    printf("\nAll of this for a tie ???\n");
  }
}

int main() {
  printf("Welcome to Rock Paper Scissors!\n\n");
  printf("You have to enter r/p/s for rock/paper/scissors respectively.\n");

  // Ask for the number of rounds
  int rounds;
  printf("Please enter the number of rounds you would like to play: ");
  scanf("%d", &rounds);

  game(rounds);

  return 0;
}
