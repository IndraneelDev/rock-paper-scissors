//CLI rock paper scissors game
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int game(char user){
  char computer;
  int n;

  //chooses a random number every time
  srand(time(NULL));

  //make the random number less than 100, then correlate that to a symbol
  n = rand() % 100;

  if (n <= 33){
    computer = 'r'; //rock
    printf("Computer:\n'rock'\n");

    if(user == computer)
      return -1;
    else if(user == 'p')
      return 1;
    else
      return 0;
  }
  
  else if(n > 33 && n <= 66){
    computer = 'p';
    printf("Computer:\n'paper'\n");
    
    if (user == computer)
      return -1;
    else if(user == 's')
      return 1;
    else
      return 0;
  }

 else{
    computer = 's';
    printf("Computer:\n'scissors'\n");

    if (user == computer)
      return -1;
    else if(user == 'r')
      return 1;
    else
      return 0;
  }
}

int main (){
  char user;
  int result;

  printf("Rock ('r')  ||  Paper ('p')  ||  Scissors ('s')\n");\
  printf("Enter your choice:\n");
  scanf("%c", &user);

  result = game(user);

  if (result == -1)
    printf("Tie.\n");

  else if(result == 1)
    printf("You win!\n");
  else
    printf("You lose :(\n");
  return 0;
}
