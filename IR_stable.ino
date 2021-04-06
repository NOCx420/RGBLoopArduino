//Written by u/Z3r0Bytez and u/GFollower
//Infrared RGB loop

#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;
const int green1 = 5;
const int green2 = 6;
const int yellow1 = 8;
const int yellow2 = 9;
const int red1 = 10;
const int red2 = 11;
const int blue1 = 12;
const int blue2 = 3;
const int dly = 137;

const int x = 10000;
const int y = 4;

bool on = false;
bool off = true;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
   pinMode(yellow1, OUTPUT);
    pinMode(yellow2, OUTPUT);
     pinMode(red1, OUTPUT);
      pinMode(red2, OUTPUT);
       pinMode(blue1, OUTPUT);
        pinMode(blue2, OUTPUT);
}

void loop(){
    
    if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
    
    if (irrecv.decode(&results)){

       if(results.value == 0xFF02FD){

          on = true;

          }
          else{
            
          on = false;
            
            }

       
        
        while(on == true){

if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }

        
         if(results.value == 0xFFA25D){
                        
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;
            }
          
         digitalWrite(green1, HIGH);
            
   
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
             
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;           
            }
            
            delay(dly);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            
            if(results.value == 0xFFA25D){
              
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;          
            }
            
            digitalWrite(green2, HIGH);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
               
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;         
            }
            
            digitalWrite(yellow1, HIGH);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
          
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;           
            }
            
            digitalWrite(yellow2, HIGH);
            
          
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;           
            }
            
            delay(dly);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;           
            }
            
            digitalWrite(red1, HIGH);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;           
            }
            
            delay(dly);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(red2, HIGH);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);

            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
              
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;        
            }
            
            digitalWrite(blue1, HIGH);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            //
            digitalWrite(blue1, HIGH);
           // 
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(blue2, HIGH);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);

    if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(green1, LOW);
   
   
   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }


           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(green2, LOW);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(yellow1, LOW);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
          
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(yellow2, LOW);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(red1, LOW);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(red2, LOW);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
             
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;           
            }
            
            delay(dly);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(blue1, LOW);
            
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
         //
         //
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(blue2, HIGH);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
              
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;          
            }
            
            digitalWrite(blue1, HIGH);
            
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
              
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;          
            }
            
            digitalWrite(red2, HIGH);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(red1, HIGH);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
           
           if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(yellow2, HIGH);
            
   
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(yellow1, HIGH);
            
            
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
            
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(green2, HIGH);
            
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
          //
          //

  if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
  
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }


  if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(green1, HIGH);
           
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }

  if(results.value == 0xFFA25D){
              
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;          
            }
            
            delay(dly);


            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }


 if(results.value == 0xFFA25D){
              
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;          
            }
            
            digitalWrite(blue2, LOW);


            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }


 if(results.value == 0xFFA25D){
              
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;          
            }
            
            delay(dly);


            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }

if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(blue1, LOW);
   
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }

if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
   
            if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }

  if(results.value == 0xFFA25D){
               
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;         
            }
            
            digitalWrite(red2, LOW);
            
   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(red1, LOW);
            
   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);
            
   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(yellow2, LOW);
            
   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            
            if(results.value == 0xFFA25D){
              
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;          
            }
            
            delay(dly);
            
   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(yellow1, LOW);

   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
            
            
            if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);

if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }

            
           if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            digitalWrite(green2, LOW);
            
   
         //
         //
            
   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
           
           if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
            
            delay(dly);

   if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
  }
           
           if(results.value == 0xFFA25D){
            
            digitalWrite(green1,  LOW); digitalWrite(green2, LOW); digitalWrite(yellow1, LOW); digitalWrite(yellow2, LOW); digitalWrite(red1, LOW); digitalWrite(red2, LOW); digitalWrite(blue1, LOW); digitalWrite(blue2, LOW); break;            
            }
        
         irrecv.resume(); 
        
    }
  }
}
