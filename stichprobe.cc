#include <iostream>
#include <fstream>
#include <cmath>

int main(){

  //Open file.
  std::ifstream fin("datensumme.txt");

  //Sum all individual numbers.
  float _sum = 0;
  float _mean = 0;
  
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
  _mean = _sum / 234;

  //Write out mean to terminal.
  std::cout << "The mean is: " << _mean << std::endl;

  //Calculate variance.
  float _var = 0;
  
  //Open file.
  std::ifstream fvar("datensumme.txt");

  //Sum all individual numbers.
  float _sum_var = 0;

  for(int i = 0; i < 234; i++){

    //Read integers from datensumme.txt.
    int number;
    fvar >> number;

    //Add number to _sum_var.
    _sum_var += (number - _mean) * (number - _mean);
  }

  //Close file.
  fin.close();

  //Normalise sum_var.
  _var = _sum_var / 234;

  //Write out mean to terminal.
  std::cout << "The variance is: " << _var << std::endl;

  //Compute standard deviation.
  float _std = sqrt(_var);

  //Write out standard deviation.
  std::cout << "The standard deviation is: " << _std << std::endl;
}