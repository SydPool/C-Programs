#include <iostream>

class Laptop{
     public:
  std::string model;
  int gen;


 

      Laptop(std::string model, int gen);
      std::string get_model();
      int get_gen();
};

Laptop::Laptop(std::string new_model, int new_gen){
  model = new_model;
  gen = new_gen;
};

std::string Laptop::get_model(){
  return model;

}

int Laptop::get_gen(){

  return gen;
};


int main() {

    Laptop Laptop1("Dell", 13);

    std::cout << Laptop1.get_model()<<' ' << Laptop1.get_gen() << '\n' ;
  return 0;     
}


