#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
  public:
    int rpm;

    Motor(int pwm_pin, int motor_pinA, int motor_pinB, int counts_per_rev);
    void updateSpeed(long encoder_ticks);
    void spin(int pwm);

  private:
    enum driver_ {L298, BTS7960};
    driver_ motor_driver_;
    long prev_encoder_ticks_;
    unsigned long prev_update_time_;
    int pwm_pin_;
    int motor_pinA_;
    int motor_pinB_;
    int counts_per_rev_;

  };

#endif
