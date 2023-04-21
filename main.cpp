#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>


int main() {
  std::cout << "Enter height: ";
  int height;
  std::cin >> height;
  if(height <= 0){
    std::cout << "Enter error!";
    return 1;
  }
  std::cout << "Enter width: ";
  int width;
  std::cin >> width;
  if(width <= 0){
    std::cout << "Enter error!";
    return 1;
  }
  bool picture[height][width];
  std::srand(std::time(nullptr));
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < width; ++j) {
      picture[i][j] = std::rand() % 2;
    }
  }
 std::string path = R"(C:\Users\User\Desktop\pic.txt)";
  std::ofstream pic(path);
  if(!pic.is_open()){
    std::cout << "File open error!";
    return 1;
  }
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < width; ++j) {
     pic << picture[i][j];
    }
    pic << std::endl;
  }
  pic.close();
  return 0;
}
