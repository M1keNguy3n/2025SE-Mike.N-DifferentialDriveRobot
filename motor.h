#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>
#include <Servo.h>
class Motor{
  private:
    Servo l_servo;
    Servo r_servo;
    byte l_pin;
    byte r_pin;
    unsigned long runtime;
  public:
    Motor(){}
    Motor(Servo &l_servo, Servo &r_servo, unsigned long runtime);
    void init(byte l_pin, byte r_pin);
    void stop_motor();
    void forward();
    void backward();
    int set_r_speed(int percent);
    int set_l_speed(int percent);
    void turn_left();
    void turn_right();
    void test();
    void adjust_left(int r_speed);
    void adjust_right(int l_speed);
};
#endif