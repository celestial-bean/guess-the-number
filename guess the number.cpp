#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main() {
  srand(time(NULL));
  int guess;
  int answer=rand()%10+1;
  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  while (guess != answer && tries != 2){
    std::cout << "Wrong.\n"<<"Please guess it: ";
    std::cin >> guess;
    tries++;
  }

  if (guess == answer) {
    std::cout << "You got it!\n";
  }else{
    std::cout << "You failed. The number was " << answer<< ".\n";
  }
  
  system("PAUSE");
  return 0;
}