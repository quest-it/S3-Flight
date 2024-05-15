/*
 *              20231110 Version 1.0
 *              
  20231120 CLI_V1.0 Required to make a complete program - this file, CLI_V1.0,Quest_CLI.h, Quest_Flight.h,Quest_flight.cpp
                  cmd_takeSphot , cmd_takeSpiphoto, nophotophoto, nophoto30K --,clean up code for understanding.


*/

#ifndef __QUEST_CLI_H__
#define __QUEST_CLI_H__

void Hostinterupt();
void softuartwrite(uint8_t x);
void send_T_host(uint8_t x);
void my_cli();
int takeSPI(void);
void Pulse13(void);
void Pulse12(void);
void Pulse11(void);
void Pulse10(void);
void Pulse9(void);
void Pulse4(void);
void Pulse13high(void);
void Pulse13low(void);
void Pulse12high(void);
void Pulse12low(void);
void Pulse11high(void);
void Pulse11low(void);
void Pulse10high(void);
void Pulse10low(void);
void Pulse9high(void);
void Pulse9low(void);
void Pulse4high(void);
void Pulse4low(void);
void cli_init();
int cmd_help();
int cmd_led();
int cmd_exit();
int cmd_scani2c();
int cmd_bme680();
int cmd_time();
int cmd_settime();
int cmd_dir();
int cmd_mkdir();
int cmd_rmdir();
int cmd_open();
int cmd_erase();
int cmd_rtcreg();
int cmd_DotStar();
int cmd_dump();
int cmd_sphoto();
int cmd_upload();
int cmd_io();
int cmd_ana();
int cmd_takeSphoto();
int cmd_stackandheap();
int cmd_text();
int cmd_view();
int cmd_tdump();
int cmd_tc();
int cmd_trtc();
int cmd_format();
int cmd_free();
int cmd_takeSpiphoto();
int framdump();
int initfram();
int framclear();
int SystemSet();
void setPCF85263();
void readPCF85263();
void help_led();
void help_exit();
void help_help();
void help_scani2c();
void help_settime();
int freeMemory();
void logit(uint8_t  x);
void logit_string();
void getMissionClock();
void send_T_host(uint8_t x);
void dateTime(uint16_t* date, uint16_t* time, uint8_t* ms10);
void SoftwareReset(void);
void setup();
void loop();
void cli_init();
void my_cli();
void read_line();
void parse_line();
int execute();
int cmd_help();
void help_DotStar();
void help_exit();
void help_scani2c();
void  help_settime();
void help_bme680();
void help_time();
void help_dir();
void help_mkdir();
void help_rmdir();
void help_open();
void help_erase();
void help_rtcreg();
void help_dump();
void help_sphoto();
void help_upload();
void help_io();
void help_ana();
void help_takeSphoto();
void help_stackandheap();
void help_initQueue();
void help_text();
void help_view();
void help_tdump();
int cmd_tdump();
int cmd_dir();
int cmd_enterTeamID();
int cmd_mkdir();
int cmd_rmdir();
int cmd_open();
int cmd_erase();
int cmd_led();
int cmd_DotStar();
int cmd_exit();
int cmd_scani2c();
int read_bme680();
int cmd_bme680();
byte bcdToDec(byte value);
byte decToBcd(byte value);
void readPCF85263();
int cmd_time();
void setPCF85263();
int cmd_settime();
int cmd_rtcreg();
int cmd_dump();
void getPicture_callback(uint32_t pictureSize, uint16_t packetSize, uint32_t packetStartPosition, byte* packet);
void CameraCleanReturn();
void  WriteText(void);
int cmd_upload();
int cmd_io();
int cmd_ana();
int cmd_view();
void Readmaster();
void serial1Flush();
void printError(int x);
void Hostinterupt();
void  softuartwrite(uint8_t data);
byte  softuartread();
void Chardelay();
byte softuartread();
void  softuartwrite(uint8_t data);
void Hostinterupt();
int cmd_text();
int cmd_format();
void  readAin();
void fill_text();
void RTCregW(uint8_t x, uint8_t y);
uint8_t RTCregR(uint8_t x);
int cmd_trtc();
int   initSD();
int  cmd_stackandheap();
void SPIgetPicture_callback(uint32_t pictureSize, uint16_t packetSize, uint32_t packetStartPosition, byte* packet);
int cmd_takeSpiphoto();
int takeSPI();
int cmd_initfram();
int cmd_initQueue();
int cmd_listQue();
int getQstatus();
int SystemSetup();
uint8_t Getchar();
int ReadSetup();

#define LOG_FILENAME "syslog.txt"
#define DOTSTAR_DELAY 1500

#endif
