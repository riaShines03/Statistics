// stats.cpp
// Project UID 5366c7e2b77742d5b2142097e51561a5
#include "stats.h"
#include <cassert>
#include <vector>
#include "p1_library.h"
using namespace std;


//int v.size() = vector_size; can I make v.size a variable?


// this is a vector of multiple vectors
//eg -- an array containing multiple arrays
vector<vector<double> > summarize(vector<double> v) {
  assert(false);
}
int count(vector<double> v) {
  assert(false);
}


//this is a function with the name 'SUM'. It takes in a vector<double>
//use a for loop -- not accumulate
double sum(vector<double> v) {
  double sum_of_data = 0;
  for(int i = 0; i < v.size() ; i++){
    sum_of_data+=v[i];
  }
  return sum_of_data;
}

double mean(vector<double> v) {
  double sum_of_data = 0;
  for(int i = 0; i < v.size() ; i++){
    sum_of_data+=v[i];
  }
  double mean_of_data = sum_of_data/v.size();
  return mean_of_data;
}


double median(vector<double> v) {
  //sort elements in ascending order
  sort(v);
  double median_val;
  //even numbered vectors
  if((v.size()%2) == 0) {

    int almost_mid_el = (v.size()/2);
    double lower_element = v[almost_mid_el];
    double upper_element = v[almost_mid_el - 1];
    median_val = ((lower_element + upper_element)/2);
  }
  //odd numbered vectors
  else {
    int middle_elem_pos = ((v.size())/2);
    median_val = v[middle_elem_pos];
  }
  return median_val;
}

double mode(vector<double> v) {
    double mode_num;
    sort(v);
    for(int i = 0; i < v.size(); i++) {
      for(int b = i + 1; b < v.size(); b ++) {
        if (v[i] == v[b]) {
          mode_num = v[i];
        }
      
      }

    }
  
  return mode_num;
}

double min(vector<double> v) {
  sort(v);
  double min_val = v[0];
  return min_val;

}
double max(vector<double> v) {
  sort(v);
  double max_val = v[(v.size())-1];
  return max_val;
}
double stdev(vector<double> v) {

  return 0.0;
}
double percentile(vector<double> v, double p) {
  return 0.0;
}