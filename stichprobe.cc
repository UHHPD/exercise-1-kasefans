#include <iostream>
#include <fstream>

int main(){

  //Open file.
  std::ifstream fin("datensumme.txt");

  //Sum all individual numbers.
  float _sum = 0;

  for(int i = 0; i < 234; i++){
    
    //Read integers from datensumme.txt.
    int number;
    fin >> number;
    
    //Add number to _sum.
    _sum += number;
  }

  //Close file.
  fin.close();

  //Normalise sum.
  _sum /= 234;

  //Write out mean to terminal.
  std::cout << "The mean is: " << _sum << std::endl;
}