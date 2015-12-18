#include <iostream>

#include "fe/example_library.h"

int main(int argc, char** argv) {
  std::cout << "Hello world. This should be 4: " << fe::example_function(2);
}
