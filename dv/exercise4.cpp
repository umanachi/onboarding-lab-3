#include <VExercise4.h>

int main() {
  VExercise4 model;
  bool failed = false;
  
  model.alpha = 0;
  model.beta = 1;
  model.gamma = 2;
  
  //check sel Don't Care
  model.cs = 0;
  for (model.s = 0; model.s < 4; model.s++) {
    model.eval();
    if (model.out != 0) {
      failed = true;
    }
  }
  
  //check selectors 0 - 2
  model.cs = 0;
  for (model.s = 0; model.s < 3; model.s++) {
    model.eval();
    if (model.out != model.s) {
      failed = true;
    }
  }
  
  //check selector 3
  model.eval();
  if (model.out != (model.alpha & (model.beta | model.gamma))) {
    failed = true;
  }
}
