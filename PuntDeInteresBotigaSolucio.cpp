
#include "PuntDeInteresBase.h"
#include "PuntDeInteresBotigaSolucio.h"

unsigned int PuntDeInteresBotigaSolucio::getColor()
{
	unsigned int color;

	if (m_tagShop == "supermarket")
	{
		color = 0xA5BE00;
	}
	else if (m_tagShop == "tobacco")
	{
		color = 0xFFAD69;
	}
	else if (m_tagShop == "bakery")
	{
		if (m_mobilitatReduida)
		{
			color = 0x4CB944;
		}
		else if (m_opening_hours.find("06:00-22:00") != std::string::npos) {
			color = 0xFFA500;
		}
		
		else
		{
			color = 0xE85D75;
		}
	}
	else
	{
		color = 0xEFD6AC;
	}

	return color;
}
