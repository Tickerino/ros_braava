#ifndef LINO_BASE_CONFIG_H
#define LINO_BASE_CONFIG_H

#define DEBUG 0

#define LEFT_BIAS 0 //compensate left wheel speed to be straighter
#define RIGHT_BIAS 0.15 //compensate wheel speed to be straighter

const float K_P = 0.05; // P constant
const float K_I = 0.2;  // I constant
const float K_D = 0.1; // D constant

//define your motors' specs here

const int MAX_RPM = 230; //motor's maximum RPM //230
const int COUNTS_PER_REV = 810; //wheel encoder's no of ticks per rev(gear_ratio * pulse_per_rev)
const float WHEEL_DIAMETER = 0.05; //wheel's diameter in meters

#define BASE_WIDTH 0.155 // width of the plate you are using

//ENCODER PINS
// left side encoders pins
#define MOTOR1_ENCODER 12 //front_A

// right side encoders pins
#define MOTOR2_ENCODER 11 //front_A

//don't change this if you followed the schematic diagram
//MOTOR PINS
//left side motor pins
#define MOTOR1_PWM 23
#define MOTOR1_IN_A 14
#define MOTOR1_IN_B 15

//right side motor pins
#define MOTOR2_PWM 22
#define MOTOR2_IN_A 16
#define MOTOR2_IN_B 17

#endif
