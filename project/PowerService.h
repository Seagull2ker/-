#pragma once
#include <vector>
#include "RoomAC.h"
#include "DBFacade.h"
#include "ClientService.h"
#include "Dispatcher.h"
#include "MainAC.h"

class PowerService
{
public:
	void SetPara(int Mode, float TempHighLimit, float TempLowLimit, float DefaultTargetTemp, float FeeRateH, float FeeRateM, float FeeRateL);
private:
	std::vector<ClientService> clist;
	std::vector<RoomAC> wlist;
	Dispatcher dispatcher;
	MainAC mainac;
};


