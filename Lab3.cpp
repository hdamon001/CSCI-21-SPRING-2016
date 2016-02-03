/*
 * Name        : lab_3.cpp
 * Author      : Hunter Damon
 * Description : Using branching statements, looping statements and string and
 *               character functions complete the functions
 */

#include "Lab3.h"

/*
 * Tell the story of Goldilocks. For example, if item is "bed" and number is 1,
 * the story will say "This bed is too soft". "item" parameter will be passed
 * in as all lowercase characters
 * Cases:
 * -item: "porridge", number: 1, return "This porridge is too hot"
 * -item: "porridge", number: 2, return "This porridge is too cold"
 * -item: "porridge", number: 3, return "This porridge is just right"
 * -item: "chair", number: 1, return "This chair is too big"
 * -item: "chair", number: 2, return "This chair is too small"
 * -item: "chair", number: 3, return "This chair is just right"
 * -item: "bed", number: 1, return "This bed is too hard"
 * -item: "bed", number: 2, return "This bed is too soft"
 * -item: "bed", number: 3, return "This bed is just right"
 * @param string item - Represents the item in the story ("porridge", "chair",
 *                      and "bed" are the only legal values -- will default to
 *                      "bed" on invalid argument)
 * @param int number - which item (1, 2, and 3 are the only legal values -- will
 *                     default to 3 on invalid argument)
 * @return string - The output string specified in the documentation above
 */
string Goldilocks(string item, int number) 
{
  string statement=" ";
  if (item=="porridge")
  {
      switch(number)
      {
        case 1:
            statement="This porridge is too hot.\n";
            break;
        case 2:
            statement="This porridge is too cold.\n";
            break;
        case 3:
            statement="This porridge is just right.\n";
            break;
      }
  }
  else if (item=="chair")
  {
      switch(number)
      {
        case 1:
            statement="This chair is too big.\n";
            break;
        case 2:
            statement="This chair is too small.\n";
            break;
        case 3:
           statement="This chair is just right.\n";
            break;
      }
  }
  else if (item=="bed")
  {
      switch(number)
      {
        case 1:
            statement="This bed is too hard.\n";
            break;
        case 2:
            statement="This bed is too soft.\n";
            break;
        case 3:
            statement="This bed is just right.\n";
            break;
      }
  }
  return statement;
}

/*
 * Compute the outcome of a round of a rock-scissor-paper game. Lowercase or
 * uppercase values for player_one and player_two arguments are acceptable.
 * Possible inputs: 'R' rock, 'S' scissor, 'P' paper
 * Conditions
 * -rocks beats scissors
 * -scissors beats paper
 * -paper beats rock
 * @param char player_one - Represents player one's "play" ('R', 'S', or 'P')
 * @param char player_two - Represents player two's "play" ('R', 'S', or 'P')
 * @return int - 1 if player one wins, 2 if player two wins, 3 on a draw,
 *               0 if invalud inputs
 */
int RockScissorPaper(char player_one, char player_two) 
{
  // YOU MUST USE A SWITCH IN THIS FUNCTION
  // CODE HERE
  int winner=0;
  player_one=toupper(player_one);
  player_two=toupper(player_two);
  switch(player_one)
  {
    case 'R':
      switch(player_two)
      {
        case 'R':
          winner=3;
          break;
        case 'P':
          winner=2;
          break;
        case 'S':
          winner=1;
          break;
        default:
          winner=0;
          break;
      }
      break;
    case 'P':
      switch(player_two)
      {
        case 'R':
          winner=1;
          break;
        case 'P':
          winner=3;
          break;
        case 'S':
          winner=2;
          break;
        default:
          winner=0;
          break;
      }
      break;
    case 'S':
      switch(player_two)
      {
        case 'R':
          winner=2;
          break;
        case 'P':
          winner=1;
          break;
        case 'S':
          winner=3;
          break;
        default:
          winner=0;
          break;
      }
      break;
    default:
      winner=0;
      break;
  }
  return winner;
}

/*
 * Return the input string with all characters converted to lowercase.
 * @param string input - The string that will be converted to all lowercase
 * @return string - a string containing the converted input string
 */
string ToLower(string input) 
{
  // CODE HERE
  for (int i=0;i<=input.length();i++)
  {
    input[i]=tolower(input[i]);
  }
  return input;
}

/*
 * Return the input string with all characters converted to uppercase.
 * @param string input - The string that will be converted to all uppercase
 * @return string - a string containing the converted input string
 */
string ToUpper(string input) 
{
  // CODE HERE
  for (int i=0;i<=input.length();i++)
  {
    input[i]=toupper(input[i]);
  }
  return input;
}

int main()
{
  string input="HeLlO wOrLd";
  cout<<ToLower(input)<<endl;
  cout<<ToUpper(input)<<endl;
  
  string item="chair";
  int number=2;
  cout<<Goldilocks(item, number);
  
  char player_one='p';
  char player_two='s';;
  cout<<RockScissorPaper(player_one, player_two);
  
  return 0;
}