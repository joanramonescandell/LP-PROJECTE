#pragma once

#include <string>
#include "Common.h"
#include "PuntDeInteresBase.h"

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase {

private:
	std::string m_tagShop;
	std::string m_opening_hours;
	bool m_mobilitatReduida;

public:
	PuntDeInteresBotigaSolucio() {
		m_tagShop = "";
		m_opening_hours = "";
		m_mobilitatReduida = false;
	}

	PuntDeInteresBotigaSolucio(Coordinate coord, std::string name, std::string tag) : PuntDeInteresBase(coord, name) {
		m_tagShop = tag;
	}

	PuntDeInteresBotigaSolucio(Coordinate coord, std::string name, std::string tag, bool mobilitatReduida, std::string opening_hours) : PuntDeInteresBase(coord, name) {
		m_tagShop = tag;
		m_mobilitatReduida = mobilitatReduida;
		m_opening_hours = opening_hours;
	}
	PuntDeInteresBotigaSolucio* clone() { return new PuntDeInteresBotigaSolucio(*this); }
	unsigned int getColor();
	std::string getTagShop() { return m_tagShop; };
	std::string getOpening_Hours() { return m_opening_hours; };
	bool getMobilitatReduida() { return m_mobilitatReduida; };

};