#include <EspNow.h>

Peer remote;
int value;
void setup()
{
  Serial.begin(115200);
  pinMode(22, OUTPUT);
  pinMode(23,OUTPUT);
  setId("ReLM");
  remote.init("TenZZ");
  remote.setOnRecieve(relayLow, "close");
  remote.setOnRecieve(relayHigh, "open");
}
void loop() 
{
 
}
void relayLow(JSONVar msg)
{
  digitalWrite(22,LOW);
  digitalWrite(23,LOW);
  Serial.println("low");
}
void relayHigh(JSONVar msg)
{
  digitalWrite(22,HIGH);
  digitalWrite(23,HIGH);
  Serial.println("high");
}
