#include "cpplib.h"

#include <iostream>

#include "limits"
std::string CPPLib::GetGreetingMessage() { return "**** Hello World ****"; }

// Calculates the Nth Fibonacci number
int CPPLib::fib(int N) {
  if (N == 0) {
    return 0;
  }

  if (N == 1) {
    return 1;
  }

  return fib(N - 1) + fib(N - 2);
}

int CPPLib::FindMax(const std::vector<int> &inputs) {
  int result = std::numeric_limits<int>::min();

  for (auto n : inputs) {
    if (n > result) {
      result = n;
    }
  }
  return result;
}

template <class T>
void CPPLib::PrintVector(std::vector<T> input) {
  std::cout << "{ ";
  unsigned int count = 0;
  for (auto n : input) {
    count++;
    std::cout << n;
    if (count < input.size()) std::cout << ", ";
  }
  std::cout << " }" << std::endl;
}