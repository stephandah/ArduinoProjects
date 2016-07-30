/* RGB LED & HALL sensor
 */

int R_PIN =  9; //select the pin for the red LED
int G_PIN = 10; // select the pin for the green LED
int B_PIN = 11; // select the pin for the  blue LED
int HALL_PIN = 8;
int magnetic;

#define RED 255,0,0
#define GREEN 0,255,0

void setup() {
  pinMode(R_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
  pinMode(B_PIN, OUTPUT);
  pinMode(HALL_PIN, INPUT);
}

void color(int r, int g, int b){
   analogWrite(R_PIN, r);
   analogWrite(G_PIN, g);
   analogWrite(B_PIN, b);  
}

void loop() 
{
   magnetic = digitalRead(HALL_PIN);
   if(magnetic == HIGH){
      color(RED); 
   }else{
      color(GREEN);    
   }
}
