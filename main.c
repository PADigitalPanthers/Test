#include <kipr/botball.h>

int main()
{   
    wait_for_light(0);
    wait_for_milliseconds(20000);
    enable_servos(1);
    set_servo_position(1,0);
    motor(3,-90);
    motor(1,90);
    wait_for_milliseconds(2000);
    ao();
    enable_servos(0);
    set_servo_position(0,2047);
    wait_for_milliseconds(1000);
    motor(3,-60);
    motor(1,60);
    wait_for_milliseconds(1000);
    ao();
    motor(3, -100);
    motor(1, 100);
    wait_for_milliseconds(1000);
    ao();
    motor(3, -100);
    motor(1, 100);
    wait_for_milliseconds(1000);
    ao();
    motor(3, -100);
    motor(1, 100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-40);
    motor(1,40);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-55);
    motor(1,55);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-50);
    motor(1,50);
    wait_for_milliseconds(1000);
    ao();
    enable_servos(1);
    set_servo_position(1,881);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    motor(3,-100);
    motor(1,100);
    wait_for_milliseconds(1000);
    ao();
    enable_servos(0);
    set_servo_position(0,0);
    wait_for_milliseconds(1000);
    ao();
    enable_servos(1);
    set_servo_position(1,0);
    wait_for_milliseconds(1000);
    ao();
    return 0;
}
