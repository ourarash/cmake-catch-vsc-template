#pragma once

#include <map>
#include <string>
#include <vector>

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  std::string PrintHelloWorld();

  // Calculates the Nth Fibonacci number
  int fib(int N);
  
  // Finds the max element in a vector
  int FindMax(const std::vector<int> &inputs); 
  
  private : std::map<int, int> _m;
};