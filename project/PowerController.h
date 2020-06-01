#pragma once
#include "PowerService.h"

class PowerController 
{
public:
	void SetPara(int Mode, float TempHighLimit, float TempLowLimit, float DefaultTargetTemp, float FeeRateH, float FeeRateM, float FeeRateL);

private:
	PowerService pservice;

};



