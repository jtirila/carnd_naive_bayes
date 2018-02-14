#include <iostream>
#include <sstream>
#include <fstream>
#include <math.h>
#include <vector>
#include "classifier.h"

/**
 * Initializes GNB
 */
GNB::GNB() {

}

GNB::~GNB() {}

void GNB::train(vector<vector<double>> data, vector<string> labels)
{

  // TODO: implement these so the avg's are computer separately for every label, use vector instead of individual double's

  int data_size = data.size();

  double s_sum;
  double d_sum;
  double s_dots_sum;
  double d_dots_sum;

  double s_avg;
  double d_avg;

  double s_dots_avg;
  double d_dots_avg;


  for(int i = 0; i < data_size; i++) {
    s_sum += data[i][0];
    d_sum += data[i][1];
    s_dots_sum += data[i][2];
    d_dots_sum += data[i][3];
  }


  s_avg = s_sum / data_size;
  d_avg = d_sum / data_size;
  s_dots_avg = s_dots_sum / data_size;
  d_dots_avg = d_dots_sum / data_size;

  std::cout << "s_avg, d_avg, s_dots_avg, d_dots_avg: ";
  std::cout << s_avg << ", ";
  std::cout << d_avg << ", ";
  std::cout << s_dots_avg << ", ";
  std::cout << d_dots_avg << "\n";




  /*
    Trains the classifier with N data points and labels.

    INPUTS
    data - array of N observations
      - Each observation is a tuple with 4 values: s, d,
        s_dot and d_dot.
      - Example : [
          [3.5, 0.1, 5.9, -0.02],
          [8.0, -0.3, 3.0, 2.2],
          ...
        ]

    labels - array of N labels
      - Each label is one of "left", "keep", or "right".
  */
}

string GNB::predict(vector<double> sample)
{
  /*
    Once trained, this method is called and expected to return
    a predicted behavior for the given observation.

    INPUTS

    observation - a 4 tuple with s, d, s_dot, d_dot.
      - Example: [3.5, 0.1, 8.5, -0.2]

    OUTPUT

    A label representing the best guess of the classifier. Can
    be one of "left", "keep" or "right".
    """
    # TODO - complete this
  */

  return this->possible_labels[1];

}