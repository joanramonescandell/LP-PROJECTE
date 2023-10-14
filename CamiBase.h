#pragma once

#include "Common.h"
#include <vector>

class CamiBase {
public:
	virtual std::vector<Coordinate> getCamiCoords() = 0;
	virtual CamiBase* clone() = 0;

};

