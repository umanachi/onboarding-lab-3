#include <VExercise1.h>

int main() {
  VExercise1 model;
  
  bool failed = false;
  
  for (model.op = 0; model.op < 4; model.op ++) {
    for (model.a = 0; model.a < 256; model.a ++) {
      for (model.b = 0; model.b < 256; model.b ++) {
        model.eval();
        if ((model.op == 0) && ((model.a ^ model.b) != model.out)) {
          failed = true;
        }
        
        if ((model.op == 1) && ((model.a << model.b) != model.out)) {
          failed = true;
        }
        
        if ((model.op == 2) && ((model.a % model.b) != model.out)) {
          failed = true;
        }
        
        if ((model.op == 3) && (~(model.a & model.b) != model.out)) {
          failed = true;
        }
      }
    }
  }
  
  return failed;
}
