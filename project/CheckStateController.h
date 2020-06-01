#pragma once
#include "CheckStateService.h"
class CheckStateController
{
public:
	void CheckRoomState();
private:
	CheckStateService service;
};

