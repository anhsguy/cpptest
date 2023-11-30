#include <iostream>

using namespace std;


int add(int a, int b) {
  return a + b;
} 
class Car {
  private:
    std::string type;
    std::string color;

  public:
    Car(std::string type, std::string color) : type(type), color(color) {}

    void display() {
      std::cout << "Type: " << type << "\nColor: " << color << std::endl;
    }
};

int main() {
  cout << "Hello World!\n";
  cout << "2+3= " << add(2,3) << endl;
  Car myCar("Sedan", "Blue");
  myCar.display();
  return 0;
}