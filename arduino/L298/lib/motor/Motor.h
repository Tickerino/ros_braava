#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
    public:
        double current_rpm;
        double required_rpm;
        double pwm;


        static float Kp;
        static float Kd;
        static float Ki;

        static int max_rpm;
        static int counts_per_rev;
        static float wheel_diameter;

        Motor(int pwm_pin, int motor_pinA, int motor_pinB);
        void calculate_rpm(long current_encoder_ticks);
        void calculate_pwm();
        void spin();
        void stop();
        long previous_encoder_ticks;
        double previous_pid_error;



    private:
        int _pwm_pin;
        int _motor_pinA;
        int _motor_pinB;

        double _total_pid_error;
        unsigned long _previous_rpm_time;
        double _prev_pwm;
};

#endif
