#include <iostream>
#include <iomanip>
using namespace std;

const double FEET_TO_STEP = 2.5;
//define function FeetToSteps(); parameter double->feet walked; returns int-># of steps walked
int FeetToSteps(double feet_walked){
  int steps_walked;
  steps_walked = feet_walked / FEET_TO_STEP;
  return steps_walked;
}

int main(){
  double feet;
  //read in double-># of feet walked
  cin >> feet;
  //call function FeetToSteps()
  //output the number of steps
  cout << FeetToSteps(feet) << endl;
  return 0;
}