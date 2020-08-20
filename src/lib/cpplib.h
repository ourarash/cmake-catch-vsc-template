#pragma once

#include <map>
#include <string>
#include <vector>

/**
 *  Example class
 */
class CPPLib {
 public:
  std::string GetGreetingMessage();

  // Calculates the Nth Fibonacci number
  int fib(int N);

  // Finds the max element in a vector
  int FindMax(const std::vector<int> &inputs);

  template <class T>
  void PrintVector(std::vector<T> input);

 private:
  std::map<int, int> _m;
};