#include <iostream>
#include <fstream>
#include <cmath>

int main(){

  //Open input files.
  std::ifstream fin("datensumme.txt");
  std::ifstream fvar("datensumme.txt");

  //Open output files.
  std::ofstream fomean("mittelwerte.txt");  
  std::ofstream fovar("varianzen.txt");

  //Compute mean and variance for each nine consecutive numbers.
  for(int i =0; i < 26; i++){
  
    //Sum all individual numbers.
    float _sum = 0;
    float _mean = 0;
  
    for(int i = 0; i < 9; i++){
    
      //Read integers from datensumme.txt.
      int number;
      fin >> number;
    
      //Add number to _sum.
      _sum += number;
    }

    //Normalise sum.
    _mean = _sum / 9;

    //Write out mean to terminal.
    std::cout << "The mean is: " << _mean << std::endl;

    //Write mean into file.
    fomean << _mean << std::endl;

    //Calculate variance.
    float _var = 0;

    //Sum all individual numbers.
    float _sum_var = 0;

    for(int i = 0; i < 9; i++){

      //Read integers from datensumme.txt.
      int number;
      fvar >> number;

      //Add number to _sum_var.
      _sum_var += (number - _mean) * (number - _mean);
    }

    //Normalise sum_var.
    _var = _sum_var / 9;

    //Write out mean to terminal.
    std::cout << "The variance is: " << _var << std::endl;

    //Write variance into file.
    fovar << _var << std::endl;

    //Compute standard deviation.
    float _std = sqrt(_var);

    //Write out standard deviation.
    std::cout << "The standard deviation is: " << _std << std::endl;
  }

  //Close output files.
  fomean.close();
  fovar.close();

  //Close input files.
  fin.close();
  fvar.close();
}