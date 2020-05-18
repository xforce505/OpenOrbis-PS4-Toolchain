#ifndef _SCE_HID_CONTROL_H_
#define _SCE_HID_CONTROL_H_

#include <stdint.h>

#ifdef __cplusplus 
extern "C" {
#endif

// Empty Comment
void sceHidControlDisconnectPort();
// Empty Comment
void sceHidControlGetBatteryState();
// Empty Comment
void sceHidControlGetDeviceInfo();
// Empty Comment
void sceHidControlGetDeviceName();
// Empty Comment
void sceHidControlGetSparkState();
// Empty Comment
void sceHidControlSetApplicationFocus();
// Empty Comment
int sceHidControlSetUserColor(int deviceId, uint32_t userColor); // userColor must be 0-3, same as pad

#endif

#ifdef __cplusplus
}
#endif
