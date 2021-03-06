#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Hubs,  S2, HTMotor,  HTMotor,  HTServo,  HTMotor)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     shooter,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     lift2,         tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_1,     leftDrive,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_2,     motorG,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C2_1,     rightDrive,    tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S2_C2_2,     conveyor,      tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C4_1,     armConveyor,   tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C4_2,     lift1,         tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S2_C3_1,    rightArm,             tServoStandard)
#pragma config(Servo,  srvo_S2_C3_2,    leftArm,              tServoStandard)
#pragma config(Servo,  srvo_S2_C3_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S2_C3_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S2_C3_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S2_C3_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.

task main()
{
  waitForStart(); // Wait for the beginning of autonomous phase.

  motor[shooter] = -100;
  wait1Msec(2000);
  motor[shooter] = 0;



  motor[rightDrive] = 100;
  	motor[leftDrive] = -100;
  	wait1Msec(2000);



  	motor[rightDrive] = 100;
  	motor[leftDrive] = 100;
  	wait1Msec(4250);

  	motor[rightDrive] = 0;
  	motor[leftDrive] = 0;
  	wait1Msec(100);
    //motor[rightDrive] = 100;
    //motor[leftDrive] = -100;
    //wait1Msec(500);

    //motor[rightDrive] = 0;
    //motor[leftDrive] = 0;

    //motor[rightDrive] = 100;
    //motor[leftDrive] = 100;
    //wait1Msec(1000);

    //motor[rightDrive] = 0;
    //motor[leftDrive] = 0;
    //wait1Msec(100);
}
