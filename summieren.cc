#include <fstream>

// Open file and read out summands. Close file.
std::ifstream fin("daten.txt");

// Loop over all lines in file.
int summand_1, summand_2;
for(int i = 0; i < 234; i++){
  
}

fin >> summand_1 >> summand_2;
fin.close();

// Write summands to the terminal.
std::cout << "Summand 1: " << summand_1 << "Summand 2: " << summand_2 << std::endl;

// Sum summands.
int _sum = summand_1 + summand_2;
