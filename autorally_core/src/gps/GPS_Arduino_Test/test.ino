
/*This script is meant to send serial communication to the 20 pin header that interfaces the compute box and GPS in order to check electronic connections. 
On the Arduino Due, there are 4 native serial ports (one being the built-in tx/rx, referenced as just "Serial"). The Arduino essentially takes the place of the 
GPS (P307), so to wire, attach arduino serial pins as if they are serial in/out of the gps. */

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial2.begin(115200);
  Serial3.begin(115200);
  
  //we initialized the normal serial so you can troubleshoot if necessary. The script will print information coming into the regular serial port.
}

void loop() {

  Serial1.write("This is Serial 1");
  Serial2.write("This is Serial 2");
  Serial3.write("This is Serial 3");
  
  if (Serial.available()) {      
    Serial.write(Serial.read());   
  }

  if (Serial1.available()) {     )
    Serial.write("Serial 1: ")
    Serial.write(Serial1.read());   
    
  }
}
