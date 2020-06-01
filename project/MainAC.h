#pragma once
class MainAC
{
public:
	bool SetMAC(int Mode, int TempHighLimit, int TempLowLimit,int DefaultTargetTemp, float FeeRateH,float FeeRateM, float FeeRateL);
	MainAC GetMACConfig();//获取主机当前状态配置
private:
	int TempHighLimit;
	int TempLowLimit;
	int TempDefault;
	int Mode;
	float FeeRateLow;
	float FeeRateMid;
	float FeeRateHigh;
};


