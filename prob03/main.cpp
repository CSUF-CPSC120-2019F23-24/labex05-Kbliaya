// Name: Kaylee Bliaya
// Random Rectangle

#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

int main ()
{
  //Set the maximum base of the rectangle to 40.
  int max = 40;
  int base;

  //Generate random value for length of rectangle.
  unsigned seed = time (0);
  srand (seed);
  base = rand() % max + 1;

  //Print out the rectangle.
  std::string rectangle;
  rectangle.assign(base, '#');
  std::cout << rectangle << '\n';
  std::cout << rectangle << '\n';
  std::cout << rectangle << '\n';

  return 0;
}
