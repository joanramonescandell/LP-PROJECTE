 #pragma once
#include "Common.h"
#include "PuntDeInteresBase.h"
#include "PuntDeInteresBotigaSolucio.h"
#include "PuntDeInteresRestaurantSolucio.h"
#include "CamiBase.h"
#include "CamiSolucio.h"
#include <vector>
#include "MapaBase.h"

class MapaSolucio : public MapaBase {

public:
	MapaSolucio()
	{
		getPdis(m_PuntsInteres);
		getCamins(m_Camins);
	}

	void getPdis(std::vector<PuntDeInteresBase*>& pdis);
	void getCamins(std::vector<CamiBase*>& camins);
	void parsejaXmlElements(std::vector<XmlElement>& xmlElements);

private:

	std::vector<PuntDeInteresBase*> m_PuntsInteres;
	std::vector<CamiBase*> m_Camins;

	std::string ComprovarElements(XmlElement& xmlElement);
	PuntDeInteresBotigaSolucio* ExtreureDadesBotiga(XmlElement& xmlElementBotiga);
	PuntDeInteresRestaurantSolucio* ExtreureDadesRestaurant(XmlElement& xmlElementRestaurant);

	bool ComprovarCami(XmlElement& xmlElementCami);
	CamiSolucio* ExtreureDadesCami(XmlElement& xmlElementDadesCami, std::vector<XmlElement>& xmlElements);
};


