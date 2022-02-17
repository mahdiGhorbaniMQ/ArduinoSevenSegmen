/*
 *  This sketch demonstrates how to set up a simple HTTP-like server.
 *  The server will set a GPIO pin depending on the request
 *    http://server_ip/gpio/0 will set the GPIO2 low,
 *    http://server_ip/gpio/1 will set the GPIO2 high
 *  server_ip is the IP address of the ESP8266 module, will be 
 *  printed to Serial when the module is connected.
 */

#include <ESP8266WiFi.h>

const char* ssid = "mahdi123";
const char* password = "44206020";

// Create an instance of the server
// specify the port to listen on as an argument
WiFiServer server(80);

void number(int x,int y){
  if(x==0){
    digitalWrite(D0, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D1, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D2, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D3, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D4, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D5, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D6, LOW);     // Initialize the LED_BUILTIN pin as an output
  }
  else if(x==1){
    digitalWrite(D0, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D1, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D2, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D3, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D4, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D5, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D6, LOW);     // Initialize the LED_BUILTIN pin as an output
  }
  else if(x==2){
    digitalWrite(D0, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D1, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D2, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D3, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D4, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D5, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D6, LOW);     // Initialize the LED_BUILTIN pin as an output
  }
  else if(x==3){
    digitalWrite(D0, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D1, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D2, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D3, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D4, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D5, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D6, LOW);     // Initialize the LED_BUILTIN pin as an output
  }
  else if(x==4){
    digitalWrite(D0, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D1, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D2, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D3, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D4, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D5, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D6, LOW);     // Initialize the LED_BUILTIN pin as an output
  }
  else if(x==5){
    digitalWrite(D0, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D1, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D2, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D3, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D4, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D5, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D6, HIGH);     // Initialize the LED_BUILTIN pin as an output
  }
  else if(x==6){
    digitalWrite(D0, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D1, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D2, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D3, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D4, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D5, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D6, HIGH);     // Initialize the LED_BUILTIN pin as an output
  }
  else if(x==7){
    digitalWrite(D0, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D1, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D2, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D3, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D4, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D5, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D6, LOW);     // Initialize the LED_BUILTIN pin as an output
  }
  else if(x==8){
    digitalWrite(D0, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D1, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D2, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D3, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D4, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D5, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D6, LOW);     // Initialize the LED_BUILTIN pin as an output
  }
  else if(x==9){
    digitalWrite(D0, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D1, HIGH);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D2, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D3, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D4, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D5, LOW);     // Initialize the LED_BUILTIN pin as an output
    digitalWrite(D6, LOW);     // Initialize the LED_BUILTIN pin as an output
  }
  if (y==1){
      digitalWrite(D7, LOW);     // Initialize the LED_BUILTIN pin as an output
      digitalWrite(D8, HIGH);     // Initialize the LED_BUILTIN pin as an output
  }
  else if(y==2){
      digitalWrite(D7, HIGH);     // Initialize the LED_BUILTIN pin as an output
      digitalWrite(D8, LOW);     // Initialize the LED_BUILTIN pin as an output
  }
  delay(1);
}


void setup() {
  
  pinMode(D0, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(D1, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(D2, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(D3, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(D4, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(D5, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(D6, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(D7, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(D8, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  Serial.begin(115200);

  // prepare GPIO2  
  // Connect to WiFi network
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ...");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);
  

  Serial.println("");
  Serial.println("WiFi connected");
  
  // Start the server
  server.begin();
  Serial.println("Server started");

  // Print the IP address
  Serial.println(WiFi.localIP());
}

void loop() {

  WiFiClient client = server.available();
  if (!client) {
    return;
  }
  
  String req = client.readStringUntil('\r');
  client.flush();

  int vall;
//  for(int j=0;j<100;j++){
//    if (req.indexOf("/"+j) != -1)
//    val = j;
//  }
   if (req.indexOf("/mahdi-a") != -1)
    vall = 0;
   else if (req.indexOf("/mahdi-b") != -1)
    vall = 1;
   else if (req.indexOf("/mahdi-c") != -1)
    vall = 2;
   else if (req.indexOf("/mahdi-d") != -1)
    vall = 3;
   else if (req.indexOf("/mahdi-e") != -1)
    vall = 4;
   else if (req.indexOf("/mahdi-f") != -1)
    vall = 5;
   else if (req.indexOf("/mahdi-g") != -1)
    vall = 6;
   else if (req.indexOf("/mahdi-h") != -1)
    vall = 7;
   else if (req.indexOf("/mahdi-i") != -1)
    vall = 8;
   else if (req.indexOf("/mahdi-j") != -1)
    vall = 9;
   else if (req.indexOf("/mahdi-k") != -1)
    vall = 10;
   else if (req.indexOf("/mahdi-l") != -1)
    vall = 11;
   else if (req.indexOf("/mahdi-m") != -1)
    vall = 12;
   else if (req.indexOf("/mahdi-n") != -1)
    vall = 13;
   else if (req.indexOf("/mahdi-o") != -1)
    vall = 14;
   else if (req.indexOf("/mahdi-p") != -1)
    vall = 15;
   else if (req.indexOf("/mahdi-q") != -1)
    vall = 16;
   else if (req.indexOf("/mahdi-r") != -1)
    vall = 17;
   else if (req.indexOf("/mahdi-s") != -1)
    vall = 18;
   else if (req.indexOf("/mahdi-t") != -1)
    vall = 19;
   else if (req.indexOf("/mahdi-u") != -1)
    vall = 20;
   else if (req.indexOf("/mahdi-v") != -1)
    vall = 21;
   else if (req.indexOf("/mahdi-w") != -1)
    vall = 22;
   else if (req.indexOf("/mahdi-x") != -1)
    vall = 23;
   else if (req.indexOf("/mahdi-y") != -1)
    vall = 24;
   else if (req.indexOf("/mahdi-z") != -1)
    vall = 25;
   else {
    Serial.println("invalid request");
    client.stop();
    return;
  }


  client.flush();
  String s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n<!DOCTYPE HTML>\r\n<html>\r\n ";
  s += "<button><a href='/mahdi-a'>0</a></button>";
  s += "<button><a href='/mahdi-b'>1</a></button>";
  s += "<button><a href='/mahdi-c'>2</a></button>";
  s += "<button><a href='/mahdi-d'>3</a></button>";
  s += "<button><a href='/mahdi-e'>4</a></button>";
  s += "<button><a href='/mahdi-f'>5</a></button>";
  s += "<button><a href='/mahdi-g'>6</a></button>";
  s += "<button><a href='/mahdi-h'>7</a></button>";
  s += "<button><a href='/mahdi-i'>8</a></button>";
  s += "<button><a href='/mahdi-j'>9</a></button>";
  s += "<button><a href='/mahdi-k'>10</a></button>";
  s += "<button><a href='/mahdi-l'>11</a></button>";
  s += "<button><a href='/mahdi-m'>12</a></button>";
  s += "<button><a href='/mahdi-n'>13</a></button>";
  s += "<button><a href='/mahdi-o'>14</a></button>";
  s += "<button><a href='/mahdi-p'>15</a></button>";
  s += "<button><a href='/mahdi-q'>16</a></button>";
  s += "<button><a href='/mahdi-r'>17</a></button>";
  s += "<button><a href='/mahdi-s'>18</a></button>";
  s += "<button><a href='/mahdi-t'>19</a></button>";
  s += "<button><a href='/mahdi-u'>20</a></button>";
  s += "<button><a href='/mahdi-v'>21</a></button>";
  s += "<button><a href='/mahdi-w'>22</a></button>";
  s += "<button><a href='/mahdi-x'>23</a></button>";
  s += "<button><a href='/mahdi-y'>24</a></button>";
  s += "<button><a href='/mahdi-z'>25</a></button>";

  s += "</html>\n";  client.print(s);

  int vorodi;
  for(int j=0;j<1;){
    vorodi=(vall/10);
    number(vorodi,1); 
    vorodi=(vall%10);
    number(vorodi,2);
//    if(){
//      j++;
  }
  
}

