#ifndef LINO_BASE_CONFIG_H
#define LINO_BASE_CONFIG_H

#define L298_DRIVER
// #define BTS7960_DRIVER

#define DEBUG 1

#define K_P 0.05 // P constant
#define K_I 0.2 // I constant
#define K_D 0.1 // D constant

// define your robot' specs here
#define MAX_RPM 230 // motor's maximum RPM
#define COUNTS_PER_REV_LEFT 680 // wheel encoder's no of ticks per rev
#define COUNTS_PER_REV_RIGHT 880
#define WHEEL_DIAMETER 0.05 // wheel's diameter in meters
#define PWM_BITS 8 // PWM Resolution of the microcontroller
#define BASE_WIDTH 0.155 // width of the plate you are using

// ENCODER PINS
// left side encoders pins
#define MOTOR1_ENCODER 12 // front_A

// right side encoders pins
#define MOTOR2_ENCODER 11 // front_A

#ifdef L298_DRIVER
  //left side motor pins
  #define MOTOR1_PWM 23
  #define MOTOR1_IN_A 14
  #define MOTOR1_IN_B 15

  //right side motor pins
  #define MOTOR2_PWM 22
  #define MOTOR2_IN_A 16
  #define MOTOR2_IN_B 17
#endif

#ifdef BTS7960_DRIVER
  // left side motor pins
  #define MOTOR1_IN_A 22
  #define MOTOR1_IN_B 23

  // right side motor pins
  #define MOTOR2_IN_A 6
  #define MOTOR2_IN_B 5
#endif

#endif
