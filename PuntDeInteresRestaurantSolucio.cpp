
#include "PuntDeInteresBase.h"
#include "PuntDeInteresBotigaSolucio.h"
#include "PuntDeInteresRestaurantSolucio.h"

unsigned int PuntDeInteresRestaurantSolucio::getColor()
{
	unsigned int color;

	if (m_cuisine == "pizza" && m_mobilitatReduida)
	{
		color = 0x03FCBA;
	}
	else if (m_cuisine == "chinese")
	{
		color = 0xA6D9F7;
	}
	else if (m_mobilitatReduida)
	{
		color = 0x251351;
	}
	else
	{
		color = 0xFFA500;
	}

	return color;
}

