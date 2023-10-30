#include <ESP8266WebServer.h>
#include "rfid.h"

ESP8266WebServer server(80);

void runRFIDCardScan(){
  int state = -1;

  while(state != 1){
     RFID_DATA = "";
     state = getUID();
     if(state == 0x3){
       printString("Invalid Card");
       delay(1000);
       RFID_DATA = "";
     }else{
      printString("Scanning..."); 
     } 
  }
}

void scanCard(){
  runRFIDCardScan();
  printString("SCAN COMPLETE");
  delay(1000);
  server.send(200, "text/plain", RFID_DATA);
}

void initServer(){
  server.on("/scan", scanCard);
  server.begin();
  initRFID();
}

void handleRequests(){
  server.handleClient();
  printString("Place a card");
  delay(100);
}
