#pragma once
class MainAC
{
public:
	bool SetMAC(int Mode, int TempHighLimit, int TempLowLimit,int DefaultTargetTemp, float FeeRateH,float FeeRateM, float FeeRateL);
	MainAC GetMACConfig();//��ȡ������ǰ״̬����
private:
	int TempHighLimit;
	int TempLowLimit;
	int TempDefault;
	int Mode;
	float FeeRateLow;
	float FeeRateMid;
	float FeeRateHigh;
};


