// Reference,
// 1. https://wiki.seeedstudio.com/XIAO-RP2040-with-Arduino/
// 2. https://qiita.com/MergeCells/items/73273dac1d1327cfa3f2
#include <Adafruit_NeoPixel.h>
 
#define NUMPIXELS 1
#define NEO_PWR 11 //GPIO11
#define NEOPIX 12 //GPIO12

Adafruit_NeoPixel pixels(NUMPIXELS, NEOPIX, NEO_GRB + NEO_KHZ800);

void setup() { //core 0
  pixels.begin();
  pinMode(NEO_PWR,OUTPUT);  digitalWrite(NEO_PWR, HIGH);
  delay(200);
}

void loop() { //core 0
  //pixels.setPixelColor(0, pixels.Color(255, 0, 0));  pixels.show();  delay(200); //R
  //pixels.clear();  pixels.show();  delay(200);
  
  //pixels.setPixelColor(0, pixels.Color(0, 255, 0));  pixels.show();  delay(200); //G
  //pixels.clear();  pixels.show();  delay(200);
  
  //pixels.setPixelColor(0, pixels.Color(0, 0, 255));  pixels.show();  delay(200); //B
  //pixels.clear();  pixels.show();  delay(200);
    
  pixels.setPixelColor(0, pixels.Color(85, 85, 85));  pixels.show();  delay(200); //W
  pixels.clear();  pixels.show();  delay(200); 
}

#define redled 17 //GPIO17 //    //RX_LED
#define greenled 16 //GPIO16 //    //TX_LED
#define blueled 25 //GPIO25 //LED_BUILTIN //YELLOW_LED

void setup1() { //core 1
  pinMode(redled ,OUTPUT);  pinMode(greenled ,OUTPUT);  pinMode(blueled ,OUTPUT);
}

void loop1() { //core 1
  //digitalWrite(redled,LOW);  delay(200);
  //digitalWrite(redled,HIGH);  delay(200);
  
  //digitalWrite(greenled,LOW);  delay(200);
  //digitalWrite(greenled,HIGH);  delay(200);
  
  //digitalWrite(blueled,LOW);  delay(200);
  //digitalWrite(blueled,HIGH);  delay(200);
  
  //digitalWrite(redled,LOW);  digitalWrite(greenled,LOW);  digitalWrite(blueled,LOW);  delay(200);
  //digitalWrite(redled,HIGH);  digitalWrite(greenled,HIGH);  digitalWrite(blueled,HIGH);  delay(200);
}
