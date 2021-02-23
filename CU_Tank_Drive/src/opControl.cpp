#include "vex.h"
#include "opControl.h"

using namespace vex;

void joyStickControl (){
  FrontLeft.spin(fwd,Controller1.Axis3.position(), pct);
  BackLeft.spin(fwd,Controller1.Axis3.position(), pct);
  FrontRight.spin(fwd,Controller1.Axis2.position(), pct);
  BackRight.spin(fwd,Controller1.Axis2.position(), pct);
}