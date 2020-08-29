#include <iostream>
#include <string>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/flags/usage.h"

ABSL_FLAG(bool, verbose, false,
          "Include 'advanced' options in the menu listing");
ABSL_FLAG(std::string, message, "Hello ", "Message to print");
ABSL_FLAG(std::string, name, "World", "Name of the greetee");

ABSL_FLAG(uint32_t, year, 2020, "Current year");

ABSL_FLAG(std::vector<std::string>, names,
          std::vector<std::string>({"jack", "jim", "jamal"}),
          "comma-separated list of names the program accepts");

int main(int argc, char *argv[]) {
  absl::ParseCommandLine(argc, argv);

  if (absl::GetFlag(FLAGS_verbose)) {
    std::cout << "Verbose: ";
  }
  
  std::cout << absl::GetFlag(FLAGS_message);
  std::cout << absl::GetFlag(FLAGS_name);
  std::cout << std::endl;

  return 0;
}