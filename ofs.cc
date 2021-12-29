// ofstream constructor.
#include <fstream>      // std::ofstream

int main () {

  //std::ofstream ofs ("test.txt", std::ofstream::out);
  std::ofstream ofs ("/Users/heeh/Project/tensorflow-r2.5/LOG/out.txt", std::ofstream::out);
  ofs << "lorem ipsum";

  ofs.close();

  return 0;
}
