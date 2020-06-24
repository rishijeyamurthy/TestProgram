#include "auton.h"
#include "vex.h"

using namespace vex;

void moveForwardSimple(int speed){
  frontLeft.spin(fwd, speed, pct);
  backLeft.spin(fwd, speed, pct);
  frontRight.spin(fwd, speed, pct);
  backRight.spin(fwd, speed, pct);
}

void moveForwardWalk(int speed, double distanceIN){
  double wheelDiamter = 3.25;
  double circumfrence = 3.14 * wheelDiamter;
  double degreesToRotate = ((360 * distanceIN) / circumfrence);

  frontLeft.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct, false);
  frontRight.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct, false);
  backLeft.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct, false);
  backRight.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct);
}

void turnLeft(int speed, double distanceIN){
   double wheelDiamter = 3.25;
  double circumfrence = 3.14 * wheelDiamter;
  double degreesToRotate = ((360 * distanceIN) / circumfrence);

  frontLeft.rotateFor(fwd, -degreesToRotate, rotationUnits::deg, -speed, velocityUnits::pct, false);
  frontRight.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct, false);
  backLeft.rotateFor(fwd, -degreesToRotate, rotationUnits::deg, -speed, velocityUnits::pct, false);
  backRight.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct);
}

void turnRight(int speed, double distanceIN){
   double wheelDiamter = 3.25;
  double circumfrence = 3.14 * wheelDiamter;
  double degreesToRotate = ((360 * distanceIN) / circumfrence);

  frontLeft.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct, false);
  frontRight.rotateFor(fwd, -degreesToRotate, rotationUnits::deg, -speed, velocityUnits::pct, false);
  backLeft.rotateFor(fwd, degreesToRotate, rotationUnits::deg, speed, velocityUnits::pct, false);
  backRight.rotateFor(fwd, -degreesToRotate, rotationUnits::deg, -speed, velocityUnits::pct);
}