// main.cpp
// Project UID 5366c7e2b77742d5b2142097e51561a5

#include "stats.h"
#include "p1_library.h"
#include <iostream> // for cout
#include <string>
#include <vector> // for vector
#include <cmath> // for various functions in math
#include <cassert> // for assert
#include <limits>
#include <iomanip>
using namespace std;

vector<vector<double> > vector_of_vectors = summarize(data);

int main() {
  //filename
  cout << "enter a filename\n";
  string x; 
  cin >> x;

  //column name
  cout << "enter a column name\n";
  string a;
  cin >> a;

  //informational message
  // fix b
  cout << "reading column B from" << x << "\n"; 

  vector<double> data = extract_column(x, a);

double sum_variable = sum(data);

}
