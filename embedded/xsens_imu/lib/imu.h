/*
* imu.h
* Author: Rohan Daruwala
*/

#ifndef IMU_H
#define IMU_H

#define I2C_ADDRESS 0x1D
#define STATUS_REG 0x04
#define DATA_REG 0x06

typedef struct {
	//Delta velocity
	float dVx;
	float dVy;
	float dVz;
	
	//Acceleration (Based off of dV)
	float accelX;
	float accelY;
	float accelZ;
	
	//Orientation data (Quaternions) 
	float q0;
	float q1;
	float q2;
	float q3;
	
} IMU_data;

void SetupIMU();
void *IMULoop();

void getDeltaVData(float *fData);
float getDeltaVX();
float getDeltaVY();
float getDeltaVZ();

void getAccelData(float *fData);
float getAccelX();
float getAccelY();
float getAccelZ();

void getDeltaOrientationData(float *fData);
float getOrientationQ0();
float getOrientationQ1();
float getOrientationQ2();
float getOrientationQ3();
 

#endif