#include <iostream>

#include "src/timer.hpp"

//compare system to to the timer class

int main() {
  Timer timer;

  std::cout << "starting timer!" << std::endl;
  timer.start();
  
  double dummy = 0;

  for (int i = 0; i < 100000000; ++i)
  {
    dummy += i * 0.000001;
  }

  timer.stop();

  std::cout << "elapsed time:" << timer.elapsed() << " seconds\n";

  return 0;
}
