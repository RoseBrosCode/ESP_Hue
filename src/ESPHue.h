/**************************************************************************
				= Philips Hue Library for ESP32 =

	This library is designed to access and control Philips Hue Lights Directly.

    Written by: Richard Wardlow @ Circuits for Fun, LLC
	Modified for ESP32 by: RoseBrosCode
    GNU GPL, include above text in redistribution
***************************************************************************/
#include <WiFi.h>

////////////////////////////////////////
// ESPHue Class
////////////////////////////////////////
class ESPHue
{
	public:
		ESPHue(WiFiClient& client, const char* APIKey, const char* host, uint8_t port);
		void setAPIKey(const char* APIKey);
		void setHubIP(const char* host);
		void setHubPort(uint8_t port);
		String getLightInfo(byte lightNum);
		int getLightState(byte lightNum);
		void setLight(byte lightNum, byte state, byte sat, byte bri, unsigned int hue);
		void setLight(byte lightNum, byte state, byte sat, byte bri, unsigned int hue, unsigned int trans);
		void setLight(byte lightNum, byte state, double xy[]);
		void setLight(byte lightNum, byte state, double xy[], unsigned int trans);
		void setLightColorloop(byte lightNum, byte state);
		void setLightTemperature(byte lightNum, byte state, byte bri, unsigned int ct);
		void setLightTemperature(byte lightNum, byte state, byte bri, unsigned int ct, unsigned int trans);
		void setLightPower(byte lightNum, byte state);
		void setLightBrightness(byte lightNum, byte bri);
		String getGroupInfo(byte groupNum);
		int getGroupState(byte groupNum);
		void setGroup(byte groupNum, byte state, byte sat, byte bri, unsigned int hue);
		void setGroup(byte groupNum, byte state, byte sat, byte bri, unsigned int hue, unsigned int trans);
		void setGroupTemperature(byte groupNum, byte state, byte bri, unsigned int ct);
		void setGroupTemperature(byte groupNum, byte state, byte bri, unsigned int ct, unsigned int trans);
		void setGroupPower(byte groupNum, byte state);
		int ON = 1;
		int OFF = 0; 
		
	private:
		const char* _host;
		const char* _apiKey;
		uint8_t _port;
		WiFiClient* _client;
		
};


