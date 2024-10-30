#include <iostream>
#include <fstream>

int main(){
  // Open file and read out summands.
  std::ifstream fin("daten.txt");

  // Open output file.
  std::ofstream fout("datensumme.txt");

  // Loop over all lines in file.
  int summand_1, summand_2;
  for(int i = 0 ; i < 234; i++){
    fin >> summand_1 >> summand_2;

    // Write summands to the terminal.
    std::cout << "\nSummand 1: " << summand_1 << "\nSummand 2: " << summand_2 << std::endl;

    // Sum summands.
    int _sum = summand_1 + summand_2;

    // Write sum to the terminal.
    std::cout << "Sum: " << _sum << std::endl;

    // Write sum to file.
    fout << _sum << std::endl;
  }

  // Close files.
  fin.close();
  fout.close();

}