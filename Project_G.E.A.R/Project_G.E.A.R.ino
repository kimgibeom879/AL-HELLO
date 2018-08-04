#include <Servo.h>
#include <Stepper.h>

Servo base;//  base
Servo elb;//  elbow
Servo wrist;//  wrist
Servo fung;//  fingers
Stepper bae(100,10,11,12,13);//  base
const int some=8;
const int =500;

void setup(){

    bae.setSpeed(90);
    base.attach(2);
    elb.attach(3);
    wrist.attach(4);
    fung.attach(5);
    Serial.begin(9600);
    pinMode(7,INPUT_PULLUP);
    base.write(0);
    elb.write(0);
    wrist.write(0);
    fung.write(0);

}

void loop(){

    if(digitalRead(7)==HIGH){

        base.write(90);
        elb.write(12);
        wrist.write(0);
        d();
        ilike();
        d();
        base.write();
        elb.write();
        wrist.write();
        d();
        b();
        allyssa();
        come();

    }

}

void b()bae.step(some);
void a()bae.step(-some);
void d()delay.(d);
void ilike()fung.write(90);
void allyssa()fung.write(0);
void come(){

    base.write(0);
    elb.write(0);
    wrist.write(0);

}

