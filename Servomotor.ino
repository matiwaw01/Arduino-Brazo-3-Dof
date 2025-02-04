#include <Servo.h>

Servo miServo1;
Servo miServo2;
Servo miServo3;

int pinServo1 = 9;
int pinServo2 = 8;
int pinServo3 = 7;

void setup() {
    miServo1.attach(pinServo1);
    miServo2.attach(pinServo2);
    miServo3.attach(pinServo3);
}

void loop() {
    for (int angulo = 0; angulo <= 50; angulo++) {
        miServo1.write(angulo);
        delay(5);
    }

for (int angulo = 75; angulo >= 0; angulo--) {
        miServo2.write(angulo);
        delay(5);
    }
    
for (int angulo = 75; angulo >= 45; angulo--) {
        miServo3.write(angulo);
        delay(10);
        }

        for (int angulo = 45; angulo <= 75; angulo++) {
        miServo3.write(angulo);
        delay(10);
    }

    
for (int angulo = 0; angulo <= 75; angulo++) {
        miServo2.write(angulo);
        delay(5);
    }
        
    

    for (int angulo = 50; angulo >= 0; angulo--) {
        miServo1.write(angulo);
        delay(5);
    }


    
    
    while(1);
    
}
