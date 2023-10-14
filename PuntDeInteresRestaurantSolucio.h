#pragma once

#include <string>
#include "Common.h"
#include "PuntDeInteresBase.h"

class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase {

private:

	std::string m_cuisine;
	bool m_mobilitatReduida;

public:
	PuntDeInteresRestaurantSolucio();
	PuntDeInteresRestaurantSolucio(Coordinate coord, std::string name, std::string cuisine, bool mobilitatReduida) : PuntDeInteresBase(coord, name)
	{
		m_cuisine = cuisine;
		m_mobilitatReduida = mobilitatReduida;
	}
	PuntDeInteresRestaurantSolucio* clone() { return new PuntDeInteresRestaurantSolucio(*this); }
	unsigned int getColor();
	std::string getCuisine() { return m_cuisine; };
	bool getMobilitatReduida() { return m_mobilitatReduida; };

};