// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "82481f03-3c71-49b4-98bc-a0424ef3dc80";

const char SSID[]        = SECRET_SSID;          // Network SSID (name)
const char PASS[]        = SECRET_PASS;          // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onRelay1StateChange();
void onRelay2StateChange();
void onRelay3StateChange();
void onRelay4StateChange();

bool relay_1_state;
bool relay_2_state;
bool relay_3_state;
bool relay_4_state;

float TDS_water;
float T_air;
float RH_air;
float T_water;
float Ev_ambient;
bool  SEN0503_state;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);

  ArduinoCloud.addProperty(relay_1_state, READWRITE, ON_CHANGE, onRelay1StateChange);
  ArduinoCloud.addProperty(relay_2_state, READWRITE, ON_CHANGE, onRelay2StateChange);
  ArduinoCloud.addProperty(relay_3_state, READWRITE, ON_CHANGE, onRelay3StateChange);
  ArduinoCloud.addProperty(relay_4_state, READWRITE, ON_CHANGE, onRelay4StateChange);

  ArduinoCloud.addProperty(TDS_water,     READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(T_air,         READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(RH_air,        READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(T_water,       READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(Ev_ambient,    READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(SEN0503_state, READ, ON_CHANGE, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
