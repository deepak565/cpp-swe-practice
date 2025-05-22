#include <iostream>

using namespace std;

class Animal
{
public:
  std::string name;
  int age;

  Animal(std::string n, int a)
  {
    name = n;
    age = a;
  }
};

class Dog : public Animal
{
public:
  int dogage;

  Dog(std::string dogname) : Animal(dogname, 10)
  {
    dogage = age;
  }

  void get()
  {
    std::cout << "Dog Name = " << name << std::endl;
    std::cout << "Dog Age = " << dogage << std::endl;
  }
};

int main()
{

  Dog dog("kittu");
  std::cout << "Animal name = " << dog.name << std::endl;
  dog.get();

  return 0;
}