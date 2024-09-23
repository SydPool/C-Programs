#include <iostream>

int main(){

    std::string students[]={"ram","hari","sita","radha", "gulab", "homenath"};

  /* 
  
  for (int i=0 ; i< sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i]<<'\n';
    }

  */ 


     for(std::string stu : students){
        
        std::cout << stu << '\n';

     }

    return 0;
}

