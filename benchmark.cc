#include <iostream>
#include "c_api_types.h"
#include "benchmark_main.h"

int main () {
  std::cout << RunCPU("detect.tflite");
}
