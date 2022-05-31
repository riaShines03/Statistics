/* stats_tests.cpp
 *
 * Unit tests for the simple statistics library
 * Project UID 5366c7e2b77742d5b2142097e51561a5
 *
 * EECS 280 Project 1
 *
 * Protip #1: Write tests for the functions BEFORE you implement them!  For
 * example, write tests for median() first, and then write median().  It sounds
 * like a pain, but it helps make sure that you are never under the illusion
 * that your code works when it's actually full of bugs.
 *
 * Protip #2: Instead of putting all your tests in main(),  put each test case
 * in a function!
 */


#include "stats.h"
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

void test_sum_small_data_set();
void test_median();
void test_mean();
void test_min();
void test_max();
void test_mode();

// Add prototypes for you test functions here.

int main() {
  test_sum_small_data_set();
  // Call your test functions here
  test_median();
  test_mean();
  test_min();
  test_max();
  test_mode();

  return 0;
}

void test_sum_small_data_set() {
  cout << "test_sum_small_data_set" << endl;

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(sum(data) == 6);

  cout << "PASS!" << endl;

}

// Add the test function implementations here.
void test_median() {
  cout << "test_median" << endl;

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(median(data) == 2);

  cout << "PASS!" << endl; 
}

void test_mean() {
  cout << "test_mean" << endl;

  vector<double> data;
  data.push_back(7);
  data.push_back(9);
  data.push_back(5);
  data.push_back(3);

  assert(median(data) == 6);

  cout << "PASS!" << endl;
  
}

void test_min() {
  cout << "test_min" << endl;

  vector<double> data;
  data.push_back(100);
  data.push_back(2);
  data.push_back(5);
  data.push_back(331);

  assert(min(data) == 2);

  cout << "PASS!" << endl;
}

void test_max() {
  cout << "test_max" << endl;

  vector<double> data;
  data.push_back(23);
  data.push_back(3);
  data.push_back(43);
  data.push_back(412);

  assert(max(data) == 412);

  cout << "PASS!" << endl;
}

void test_mode() {
  cout << "test_mode" << endl;

  vector<double> data;
  data.push_back(22);
  data.push_back(22);
  data.push_back(41);
  data.push_back(12);

  assert(mode(data) == 22);

  cout << "PASS!" << endl;
}
