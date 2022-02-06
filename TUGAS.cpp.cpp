#include <iostream>
#include <string>

using namespace std;


int main()
{
  string usia;
  cout << "berapa usiamu? ";
  getline (std::cin, usia);
  cout << "Ternyata umurmu, " << usia << "!\n";
}