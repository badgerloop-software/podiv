#ifndef __HV_IOX_H__
#define __HV_IOX_H__

#include <stdbool.h>
#include <mcp23017.h>
#include <i2c.h>

#define HV_IND_EN       MCP_GPIOB_0
#define MCU_LATCH       MCP_GPIOB_1
#define BMS_MULTI_IN    MCP_GPIOB_2

#define IMD_STAT_FDBK   MCP_GPIOA_7
#define INRT_STAT_FDBK  MCP_GPIOA_6
#define HV_EN_FDBK      MCP_GPIOA_5
#define MCU_HV_EN       MCP_GPIOA_4
#define PS_FDBK         MCP_GPIOA_3
#define BMS_STAT_FDBK   MCP_GPIOA_2
#define E_STOP_FDBK     MCP_GPIOA_1
#define MSTR_SW_FDBK    MCP_GPIOA_0


#ifdef __cplusplus
class HVIox {
  public:
    HVIox(bool hardStart);
    
    i2c_settings getHVIoxDev(void);
    
    int isHVIndicatorEnabled(void);
    
    int setMCULatch(bool val);
    
    int getBMSMultiIn(void);
    
    int getIMDStatus(void);
    
    int getINRTStatus(void);
    
    int isHVEnabled(void);
    
    int isMCUHVEnabled(void);
    
    int getPsStatus(void);
    
    int getBMSStatus(void);
    
    int isEStopOn(void);
    
    int getMasterSwFeedback(void);
    
    int setMCUHVEnabled(int val);
};
extern HVIox *hv_iox;
#else
  typedef struct HVIox hv_iox;
  extern HVIox hv_iox;
  #endif
#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif
#endif
