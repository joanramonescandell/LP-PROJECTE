#pragma once

#include "Common.h"
#include <vector>
#include "CamiBase.h"
using namespace std;
class CamiSolucio : public CamiBase {
public:
	std::vector<Coordinate> getCamiCoords() { return m_coords; }
	void setCoords(std::vector<Coordinate>& coords) { m_coords = coords; }
	CamiSolucio* clone() { return new CamiSolucio(*this); }
private:
	vector<Coordinate> m_coords;
};

