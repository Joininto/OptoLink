#pragma once
#include <PubSubClient.h>
#include "Logging.h"
#include <WiFi.h>

extern PubSubClient mqttClient;

void setupMqtt(String server, String clientid, String prefix);
void setupMqtt(String server, String clientid, String prefix, String username, String password);
void publishMqtt(String topic, const char* payload);
void checkMqtt();
void callback(char* topic, byte* payload, unsigned int length);