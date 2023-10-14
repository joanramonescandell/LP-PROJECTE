#include <iostream>
#include <list>
#include <map>
#include <algorithm>
#include <iomanip>

#include "XML4OSMUtilModificat.h"
#include "MapaBase.h"
#include "MapaSolucio.h"

// POSA A 'true' PER VEURE ELS DETALLS DEL TESTS
// POSA A 'false' PER VEURE DIRECTAMENT NUMERO ESTUDIANTS I NOTA
bool mostraDetalls = true;

double primerTest1(MapaBase* mapaBase);
double primerTest2(MapaBase* mapaBase);
double primerTest3(MapaBase* mapaBase);

double segonTest1(MapaBase* mapaBase);
double segonTest2(MapaBase* mapaBase);

double tercerTest1(MapaBase* mapaBase);
double tercerTest2(MapaBase* mapaBase);

double quartTest1(MapaBase* mapaBase);

void printNotaAcumulat10(std::string id_test, double grade, int expected)
{
	if (mostraDetalls) {
		std::cout << "Comment :=>> ---------------------------------------------" << std::endl;
		std::cout << "Comment :=>> GRADE PER " << id_test << " ACUMULAT " << grade << " SOBRE " << expected << std::endl;
		std::cout << "Comment :=>> ---------------------------------------------" << std::endl;		
	}
}

int main() {
	double grade1 = 0.0;
	double grade2 = 0.0;
	double grade3 = 0.0;
	double grade4 = 0.0;
	double grade = 0.0;

	std::vector<XmlElement> vectorElements = {};
	XML4OSMUtilModificat xml4OsmModificat;

	// TODO: Assignar memoria per mapaSolucio amb la classe MapaSolucio definida
	MapaBase* mapaSolucio = new MapaSolucio();

	if (mapaSolucio == nullptr) {
		std::cout << "Comment :=>> No s'ha instanciat correctament mapaSolucio" << std::endl;
		std::cout << "Comment :=>> No es pot procedir en l'execucio dels tests" << std::endl;
		return -1;
	}

	xml4OsmModificat.retornaConjuntTest1(vectorElements);

	mapaSolucio->parsejaXmlElements(vectorElements);
	grade1 += primerTest1(mapaSolucio);
	printNotaAcumulat10("PRIMERTEST1[0]", grade1, 4);

	grade1 += primerTest2(mapaSolucio);
	printNotaAcumulat10("PRIMERTEST1[1]", grade1, 8);

	grade1 += primerTest3(mapaSolucio);
	printNotaAcumulat10("PRIMERTEST1[2]", grade1, 10);

	vectorElements.clear();
	xml4OsmModificat.retornaConjuntTest2(vectorElements);

	mapaSolucio->parsejaXmlElements(vectorElements);
	grade2 += segonTest1(mapaSolucio);
	printNotaAcumulat10("SEGONTEST1[0]", grade2, 8);

	grade2 += segonTest2(mapaSolucio);
	printNotaAcumulat10("SEGONTEST1[1]", grade2, 10);

	vectorElements.clear();
	xml4OsmModificat.retornaConjuntTest3(vectorElements);

	mapaSolucio->parsejaXmlElements(vectorElements);
	grade3 += tercerTest1(mapaSolucio);
	printNotaAcumulat10("TERCERTEST1[0]", grade3, 5);

	grade3 += tercerTest2(mapaSolucio);
	printNotaAcumulat10("TERCERTEST1[1]", grade3, 10);

	vectorElements.clear();
	xml4OsmModificat.retornaConjuntTest4(vectorElements);

	mapaSolucio->parsejaXmlElements(vectorElements);
	grade4 += quartTest1(mapaSolucio);
	printNotaAcumulat10("QUARTTEST[1]", grade3, 10);

	grade = 0.1 * grade1 + 0.6 * grade2 + 0.15 * grade3 + 0.15 * grade4;


	if (mostraDetalls) {
		std::cout << std::endl << std::endl;

		double perGrade1 = 0.1;
		double perGrade2 = 0.6;
		double perGrade3 = 0.15;
		double perGrade4 = 0.15;

		printf("Comment :=>> Nota desglossada (percentatge * nota): %.2f * %.2f + %.2f * %.2f + %.2f * %.2f + %.2f * %.2f \n", perGrade1, grade1, perGrade2, grade2, perGrade3, grade3, perGrade4, grade4);
	}

	if (mostraDetalls) {
		std::cout << "Comment :=>> Nota Primera Part Projecte: ";
	}

	std::cout << grade << std::endl;

	std::cout << "Grade :=>> " << grade << std::endl;

	return 0;
}


double primerTest1(MapaBase* mapaBase) {
	double grade = 0;
	if (mostraDetalls) {
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Primer Test 1" << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Provem que tenim dos camins i quatre punts de interes en el primer conjunt de dades" << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
	}

	std::vector<PuntDeInteresBase*> vecPdis = {};
	std::vector<CamiBase*> vecCamins = {};

	mapaBase->getPdis(vecPdis);
	mapaBase->getCamins(vecCamins);

	if (vecCamins.size() == 2) {
		grade += 2.0;
	}

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE CAMINS: " << 2 << std::endl;
		std::cout << "Comment :=>> NUMERO DE CAMINS ESTUDIANT: " << vecCamins.size() << std::endl;
		std::cout << "Comment :=>> PRIMERTEST1[0] : " << ((vecCamins.size() == 2) ? "CORRECTE" : "ERRONI") << std::endl;
	}

	if (vecPdis.size() == 4) {
		grade += 2.0;
	}

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE PUNTS DE INTERES: " << 4 << std::endl;
		std::cout << "Comment :=>> NUMERO DE PUNTS DE INTERES ESTUDIANT: " << vecPdis.size() << std::endl;
		std::cout << "Comment :=>> PRIMERTEST1[1] : " << ((vecPdis.size() == 4) ? "CORRECTE" : "ERRONI") << std::endl;

		std::cout << "Comment :=>> ====================" << std::endl;
		std::cout << "Comment :=>> FI PRIMER TEST  1" << std::endl;
		std::cout << "Comment :=>> PRIMERTEST1 GRADE1 : " << grade << " / 4"  << std::endl;
		std::cout << "Comment :=>> ====================" << std::endl;
	}

	return grade;
}

double primerTest2(MapaBase* mapaBase) {
	double grade = 0;

	if (mostraDetalls) {
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Primer Test 2" << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Provem que tenim un unic shop amb acces per persones amb mobilitat reduida amb color 0xE85D75 a coordenades especifiques." << std::endl;
		std::cout << "Comment :=>> Provem que tenim un Cafe Gaucho amb color el per defecte." << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
	}

	PuntDeInteresBase colorDefecte;

	std::vector<PuntDeInteresBase*> vecPdis = {};

	mapaBase->getPdis(vecPdis);
	int counter = 0;
	int countUnicShop = 0;
	int countUnicGaucho = 0;
	int colorCafeGaucho = 0x0;

	for (PuntDeInteresBase* pdi : vecPdis) {
		bool isLatRight = pdi->getCoord().lat >= 41.4927378 && pdi->getCoord().lat <= 41.4927381;
		bool isLonRight = pdi->getCoord().lon >= 2.145420 && pdi->getCoord().lon <= 2.1454210;
		if (isLatRight && isLonRight) {
			if (pdi->getColor() == 0xE85D75) {
				grade += 2.0;
				countUnicShop++;
			}
		}
		else if (pdi->getName() == "Cafe gaucho") {
			colorCafeGaucho = pdi->getColor();

			if (pdi->getColor() == colorDefecte.getColor()) {
				grade += 1.0;
				countUnicGaucho++;
			}
		}
		else {
			if (pdi->getColor() == colorDefecte.getColor()) {
				counter++;
			}
		}
	}

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE CAFE GAUCHO: " << 1 << std::endl;
		std::cout << "Comment :=>> NUMERO DE CAFE GAUCHO ESTUDIANT: " << countUnicGaucho << std::endl;
		std::cout << "Comment :=>> PRIMERTEST2[0] : " << ((countUnicGaucho == 1) ? "CORRECTE" : "ERRONI") << std::endl;

		std::cout << "Comment :=>> NUMERO DE BOTIGA A COORDENADES ESPECIFIQUES: " << 1 << std::endl;
		std::cout << "Comment :=>> NUMERO DE BOTIGA A COORDENADES ESPECIFIQUES ESTUDIANT: " << countUnicShop << std::endl;
		std::cout << "Comment :=>> PRIMERTEST2[1] : " << ((countUnicShop == 1) ? "CORRECTE" : "ERRONI") << std::endl;

		std::cout << "Comment :=>> COLOR CAFE GAUCHO: 0xFFA500" << std::endl;
		std::cout << "Comment :=>> COLOR CAFE GAUCHO ESTUDIANT: " << std::hex << std::uppercase << colorCafeGaucho << std::endl;
		std::cout << "Comment :=>> PRIMERTEST2[2] : " << ((colorCafeGaucho == 0xFFA500) ? "CORRECTE" : "ERRONI") << std::endl;
	}

	grade += (counter == 1) ? 1.0 : 0.0;

	// Existeixen mes d'un punt que apunten al mateix lloc, o no s'han trobat. 
	// Avaluem com a 0 aquesta part.
	grade = (countUnicShop != 1 && countUnicGaucho != 1) ? 0.0 : grade;
	

	if (mostraDetalls) {
		std::cout << "Comment :=>> ====================" << std::endl;
		std::cout << "Comment :=>> FI PRIMER TEST  2" << std::endl;
		std::cout << "Comment :=>> PRIMERTEST2 GRADE 1: " << grade << " / 4" << std::endl;
		std::cout << "Comment :=>> ====================" << std::endl;
	}

	return grade;
}


double primerTest3(MapaBase* mapaBase) {
	double grade = 0;
	if (mostraDetalls) {
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Primer Test 3" << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Provem que tenim dos camins amb numero de coordenades especifiques pel primer conjunt de dades." << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
	}

	std::vector<CamiBase*> vecCamins = {};

	std::vector<Coordinate> resultCami1 = {
		Coordinate {std::stod("41.4887861"), std::stod("2.1417598")}, // 361239083
		Coordinate {std::stod("41.4888072"), std::stod("2.1418469")}, // 5108437668
		Coordinate {std::stod("41.4888606"), std::stod("2.1420670")}, // 5108437663
		Coordinate {std::stod("41.4893752"), std::stod("2.1425048")}, // 6783176578
		Coordinate {std::stod("41.4894257"), std::stod("2.1425477")}, // 360927044
		Coordinate {std::stod("41.4894730"), std::stod("2.1425895")}, // 6783176580
		Coordinate {std::stod("41.4898995"), std::stod("2.1429666")}, // 5108501276
		Coordinate {std::stod("41.4899716"), std::stod("2.1430302")}, // 361239079
		Coordinate {std::stod("41.4899985"), std::stod("2.1430529")}, // 5155645054
		Coordinate {std::stod("41.4900251"), std::stod("2.1430759")}, // 5108501275
		Coordinate {std::stod("41.4902855"), std::stod("2.1433050")}, // 1835227766
		Coordinate {std::stod("41.4905586"), std::stod("2.1435364")}  // 1835227935
	};

	std::vector<Coordinate> resultCami2 = {
		Coordinate {std::stod("41.4915046"), std::stod("2.1484328")},	// 1125567473
		Coordinate {std::stod("41.4913967"), std::stod("2.1482614")},	// 5370299407
		Coordinate {std::stod("41.4913714"), std::stod("2.1482221")}	// 5370299406
	};

	mapaBase->getCamins(vecCamins);

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE CAMINS: " << std::dec << 2 << std::endl;
		std::cout << "Comment :=>> NUMERO DE CAMINS ESTUDIANT: " << std::dec << vecCamins.size() << std::endl;
		std::cout << "Comment :=>> PRIMERTEST3[0] : " << ((vecCamins.size() == 2) ? "CORRECTE" : "ERRONI - NO CONTINUEM PRIMERTEST3") << std::endl;
	}

	if (vecCamins.size() != 2) {
		std::cout << "Comment :=>> PRIMERTEST3 GRADE 1: 0/2" << std::endl;
		return 0;
	}

	CamiBase* cami1 = vecCamins[0];
	int countResultatsCami1 = 0;
	int idx = 0;
	for (Coordinate coord : cami1->getCamiCoords()) {
		if (coord.lat == resultCami1[idx].lat && coord.lon == resultCami1[idx].lon) {
			countResultatsCami1++;
		}
		idx++;
	}

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE COORDENADES PEL PRIMER CAMI: " << std::dec << resultCami1.size() << std::endl;
		std::cout << "Comment :=>> NUMERO DE COORDENADES PEL PRIMER CAMI ESTUDIANT: " << std::dec << countResultatsCami1 << std::endl;
	}

	grade += (countResultatsCami1 == resultCami1.size()) ? 1.0 : 0.0;

	CamiBase* cami2 = vecCamins[1];
	int countResultatsCami2 = 0;
	idx = 0;
	for (Coordinate coord : cami2->getCamiCoords()) {
		if (coord.lat == resultCami2[idx].lat && coord.lon == resultCami2[idx].lon) {
			countResultatsCami2++;
		}
		idx++;
	}

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE COORDENADES PEL SEGON CAMI: " << std::dec << resultCami2.size() << std::endl;
		std::cout << "Comment :=>> NUMERO DE COORDENADES PEL SEGON CAMI ESTUDIANT: " << std::dec << countResultatsCami2 << std::endl;
	}

	grade += (countResultatsCami2 == resultCami2.size()) ? 1.0 : 0.0;

	if (mostraDetalls) {
		std::cout << "Comment :=>> ====================" << std::endl;
		std::cout << "Comment :=>> FI PRIMER TEST 3" << std::endl;
		std::cout << "Comment :=>> PRIMERTEST3 GRADE 1 : " << grade << " / 2" << std::endl;
		std::cout << "Comment :=>> ====================" << std::endl;
	}

	return grade; 
}


double  segonTest1(MapaBase* mapaBase) {
	double grade = 0;
	if (mostraDetalls) {
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Segon Test 1" << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Provem que tenim dos punts de interes pel segon conjunt de dades, i que son \"la Millor Pastisseria\" i \"el Millor Restaurant\"." << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
	}

	std::vector<PuntDeInteresBase*> vecPdis = {};
	mapaBase->getPdis(vecPdis);

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE PUNTS DE INTERES: " << std::dec << 2 << std::endl;
		std::cout << "Comment :=>> NUMERO DE PUNTS DE INTERES ESTUDIANT: " << std::dec << vecPdis.size() << std::endl;
		std::cout << "Comment :=>> SEGONTEST1[0] : " << ((vecPdis.size() == 2) ? "CORRECTE" : "ERRONI") << std::endl;
	}

	bool millorRestaurant = false;
	bool millorPastisseria = false;

	if (vecPdis.size() == 2) {
		PuntDeInteresBase colorDefecte;
		for (PuntDeInteresBase* pdi : vecPdis) {
			bool isBotigaLatRight = pdi->getCoord().lat >= 41.49186059 && pdi->getCoord().lat <= 41.49186061;
			bool isBotigaLonRight = pdi->getCoord().lon >= 2.14654109 && pdi->getCoord().lon <= 2.14654111;

			if (isBotigaLatRight && isBotigaLonRight && pdi->getName() == "La Millor Pastisseria" && pdi->getColor() == 0xE85D75) {
				grade += 4;
				millorPastisseria = true;
			}


			bool isRestaurantLatRight = pdi->getCoord().lat >= 41.49022039 && pdi->getCoord().lat <= 41.49022041;
			bool isRestaurantLonRight = pdi->getCoord().lon >= 2.14064769 && pdi->getCoord().lon <= 2.14064771;

			if (isRestaurantLatRight && isRestaurantLonRight && pdi->getName() == "El Millor Restaurant" && pdi->getColor() == colorDefecte.getColor()) {
				grade += 4;
				millorRestaurant = true;
			}
		}
	}
	
	std::cout << "Comment :=>> SEGONTEST1[1] : MILLOR PASTISSERIA TROBADA: " << (millorPastisseria? "CORRECTE" : "ERRONI") << std::endl;
	std::cout << "Comment :=>> SEGONTEST1[2] : MILLOR RESTAURANT TROBAT: " << (millorRestaurant? "CORRECTE" : "ERRONI") << std::endl;

	if (mostraDetalls) {
		std::cout << "Comment :=>> ====================" << std::endl;
		std::cout << "Comment :=>> FI SEGON TEST 1" << std::endl;
		std::cout << "Comment :=>> SEGONTEST1 GRADE 2 : " << grade << " / 8"  << std::endl;
		std::cout << "Comment :=>> ====================" << std::endl;
	}

	return grade;
}

double segonTest2(MapaBase* mapaBase)
{
	double grade = 0.0;

	if (mostraDetalls) {
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Segon Test 2" << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Provem que tenim un cami, amb quatre coordenades, pel segon conjunt de dades." << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
	}

	std::vector<CamiBase*> vecCamins = {};

	mapaBase->getCamins(vecCamins);

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE CAMINS: " << 1 << std::endl;
		std::cout << "Comment :=>> NUMERO DE CAMINS ESTUDIANT: " << vecCamins.size() << std::endl;
		std::cout << "Comment :=>> SEGONTEST2[0] : " << ((vecCamins.size() == 1) ? "CORRECTE" : "ERRONI - NO COMPROVEM NUMERO DE COORDENADES") << std::endl;
	}

	if (vecCamins.size() == 1) {
		grade += 1;

		if (mostraDetalls) {
			std::cout << "Comment :=>> NUMERO DE COORDENADES PEL PRIMER CAMI: " << 4 << std::endl;
			std::cout << "Comment :=>> NUMERO DE COORDENADES PEL PRIMER CAMI ESTUDIANT: " << vecCamins[0]->getCamiCoords().size() << std::endl;
			std::cout << "Comment :=>> SEGONTEST3[0] : " << ((vecCamins[0]->getCamiCoords().size() == 4) ? "CORRECTE" : "ERRONI") << std::endl;
		}

		if (vecCamins[0]->getCamiCoords().size() == 4) {
			grade += 1;
		}
	}

	if (mostraDetalls) {
		std::cout << "Comment :=>> ====================" << std::endl;
		std::cout << "Comment :=>> FI SEGON TEST 2" << std::endl;
		std::cout << "Comment :=>> SEGONTEST2 GRADE 2 : " << grade << " / 2"  << std::endl;
		std::cout << "Comment :=>> ====================" << std::endl;
	}

	return grade;
}


struct PdiResult {
	Coordinate coordenada;
	unsigned int color;
};

double tercerTest1(MapaBase* mapaBase)
{
	double grade = 0;
	if (mostraDetalls) {
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Tercer Test 1" << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Provem que tenim els restaurants de Cerdanyola amb els colors pertinents, amb el tercer conjunt de dades." << std::endl;
		std::cout << "Comment :=>> Aquests son:" << std::endl;
		std::cout << "Comment :=>> \t El Viejo Roble 0x251351" << std::endl;
		std::cout << "Comment :=>> \t Nueva China amb color 0xA6D9F7" << std::endl;
		std::cout << "Comment :=>> \t Anec de Pekin amb color per defecte" << std::endl;
		std::cout << "Comment :=>> \t La Tasca de Ca l'Enric amb color per defecte" << std::endl;
		std::cout << "Comment :=>> \t Paco Junior amb color per defecte" << std::endl;
		std::cout << "Comment :=>> \t El Colosseo amb color 0x03FCBA " << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
	}

	double eps = 0.0000001;
	std::vector<PuntDeInteresBase*> vecPdis = {};
	PuntDeInteresBase* quinColorDefecteTinc = new PuntDeInteresBase();
	
	mapaBase->getPdis(vecPdis);

	std::map<std::string, int> estudiantMap;

	std::map<std::string, PdiResult> resultatMap;
	resultatMap.insert({ "El Viejo Roble", PdiResult { Coordinate{ 41.4902204, 2.1406477 }, 0x251351} });
	resultatMap.insert({ "Nueva China", PdiResult { Coordinate{ 41.4902107, 2.1411346 }, 0xA6D9F7} });
	resultatMap.insert({ "Anec de Pekin", PdiResult { Coordinate{ 41.4907316, 2.1456752 }, quinColorDefecteTinc->getColor()} });
	resultatMap.insert({ "la Tasca de Ca l'Enric", PdiResult { Coordinate{ 41.4907410, 2.1473352 }, quinColorDefecteTinc->getColor()} });
	resultatMap.insert({ "Paco Junior", PdiResult { Coordinate{ 41.4905910, 2.1450548 }, quinColorDefecteTinc->getColor()} });
	resultatMap.insert({ "El Colosseo", PdiResult { Coordinate{ 41.4928550, 2.1426380 }, 0x03FCBA} });

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE PUNTS DE INTERES: " << 6 << std::endl;
		std::cout << "Comment :=>> NUMERO DE PUNTS DE INTERES ESTUDIANT: " << vecPdis.size() << std::endl;
		std::cout << "Comment :=>> TERCERTEST1[0] : " << ((vecPdis.size() == 6) ? "CORRECTE" : "ERRONI") << std::endl;
	}

	if (vecPdis.size() == resultatMap.size()) {
		grade += 0.5;
	}

	int i = 1;
	for (PuntDeInteresBase* pdi : vecPdis) {
		std::cout << std::endl; 
		if (resultatMap.count(pdi->getName()) == 0) {
			std::cout << "Comment :=>> PUNT DE INTERES ESTUDIANT TERCERTEST1[" << i << "] NO TROBAT " + pdi->getName() + " EN EL CONJUNT DE RESULTATS = ERRONI" << std::endl;
			i++;
			continue;
		} 

		PdiResult pdiResult = resultatMap[pdi->getName()];
		resultatMap.erase(pdi->getName());

		if (pdiResult.color != pdi->getColor() || Util::DistanciaHaversine(pdiResult.coordenada, pdi->getCoord()) > eps) {
			if (mostraDetalls) {
				std::cout << "Comment :=>> PUNT DE INTERES ESTUDIANT TERCERTEST1[" << i << "] [" << pdi->getName() << "] ERRONI -> COORDENADA = (" << pdi->getCoord().lat << ", " << pdi->getCoord().lon << " ) i COLOR = 0x" << std::hex << std::uppercase << pdi->getColor() << std::endl;
			}
		}
		else {
			if (pdi->getColor() == quinColorDefecteTinc->getColor()) {
				grade += 0.5;
			} 
			else {
				grade += 1;
			}
			if (mostraDetalls) {
				std::cout << "Comment :=>> PUNT DE INTERES ESTUDIANT TERCERTEST1[" << i << "] [" << pdi->getName() << "] CORRECTE -> COORDENADA = (" << pdi->getCoord().lat << ", " << pdi->getCoord().lon << " ) i COLOR = 0x" << std::hex << std::uppercase << pdi->getColor() << std::endl;
			}
		}
		if (mostraDetalls) {
			std::cout << "Comment :=>> PUNT DE INTERES RESULTAT TERCERTEST1[" << i << "] [" << pdi->getName() << "] -> COORDENADA = (" << pdiResult.coordenada.lat << ", " << pdiResult.coordenada.lon << ") i COLOR = 0x" << std::hex << std::uppercase << pdiResult.color << std::endl;
		}

		i++;
	}

	if (mostraDetalls) {
		std::cout << "Comment :=>> ====================" << std::endl;
		std::cout << "Comment :=>> FI TERCER TEST 1" << std::endl;
		std::cout << "Comment :=>> TERCERTEST1 GRADE 3 : " << grade << " / 5"  << std::endl;
		std::cout << "Comment :=>> ====================" << std::endl;
	}
	
	return grade;
}

double tercerTest2(MapaBase* mapaBase)
{
	double grade = 0.0;
	std::cout << std::dec;

	if (mostraDetalls) {
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Tercer Test 2" << std::endl;
		std::cout << "Comment :=>> Provem que tenim dos carrers, el Carrer Pineda i Altimira, del tercer conjunt de dades." << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
	}

	double eps = 0.0000001;

	double temporalGrade = 0.0;

	std::vector<CamiBase*> vecCamins = {};
	mapaBase->getCamins(vecCamins);

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE CAMINS: " << 2 << std::endl;
		std::cout << "Comment :=>> NUMERO DE CAMINS ESTUDIANT: " << vecCamins.size() << std::endl;
		std::cout << "Comment :=>> TERCERTEST2[0] : " << ((vecCamins.size() == 2) ? "CORRECTE" : "ERRONI - NO CONTINUEM AQUEST TERCERTEST2") << std::endl;
	}

	if (vecCamins.size() == 2) {
		grade += 1;

		int idxCamiPineda = vecCamins[0]->getCamiCoords().size() == 4 ? 0 : 1;
		int idxCamiAltimira = vecCamins[1]->getCamiCoords().size() == 13 ? 1 : 0;

		std::vector<Coordinate> pinedaCords = vecCamins[idxCamiPineda]->getCamiCoords();
		std::vector<bool> trobat;
		trobat.resize(pinedaCords.size(), false);

		if (mostraDetalls) {
			std::cout << "Comment :=>> BUSQUEM COORDENADES DEL PRIMER CAMI [Pineda]" << std::endl;
		}

		for (int i = 0; i < pinedaCords.size(); i++) {
			if (Util::DistanciaHaversine(pinedaCords[i], Coordinate{ 41.4893533, 2.1475936 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4893533, 2.1475936 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(pinedaCords[i], Coordinate{ 41.4893063, 2.1476552 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4893063, 2.1476552 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(pinedaCords[i], Coordinate{ 41.4892612, 2.1476832 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4892612, 2.1476832 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(pinedaCords[i], Coordinate{ 41.4892160, 2.1476900 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4892160, 2.1476900 } TROBADA" << std::endl;
			}
		}

		std::cout << "Comment :=>> COORDENADES ESTUDIANT PEL CAMI PINEDA: " << std::endl;
		

		std::vector<Coordinate> altimiraCords = vecCamins[idxCamiAltimira]->getCamiCoords();
		trobat.clear();
		trobat.resize(altimiraCords.size(), false);

		if (mostraDetalls)
			std::cout << "Comment :=>> BUSQUEM COORDENADES DEL SEGON CAMI [Altimira]" << std::endl;

		for (int i = 0; i < altimiraCords.size(); i++) {
			if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4900914, 2.1386712 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4900914, 2.1386712 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4900494, 2.1387747 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4900494, 2.1387747 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4902404, 2.1398993 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4902404, 2.1398993 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4902536, 2.1399715 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4902536, 2.1399715 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4902678, 2.1400551 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4902678, 2.1400551 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4904349, 2.1410368 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4904349, 2.1410368 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4904397, 2.1410612 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4904397, 2.1410612 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4904526, 2.1411267 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4904526, 2.1411267 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4904733, 2.1412260 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4904733, 2.1412260 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4904989, 2.1413415 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4904989, 2.1413415 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4905271, 2.1414810 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4905271, 2.1414810 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4905984, 2.1415427 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4905984, 2.1415427 } TROBADA" << std::endl;
			}
			else if (Util::DistanciaHaversine(altimiraCords[i], Coordinate{ 41.4906473, 2.1415473 }) <= eps) {
				temporalGrade += 1;
				if (mostraDetalls)
					std::cout << "Comment :=>> Coordinate{ 41.4906473, 2.1415473 } TROBADA" << std::endl;
			}
		}


		int i = 0;
		std::cout << "Comment :=>> COORDENADES ESTUDIANT PINEDA:" << std::endl;
		for (auto resultatPineda : pinedaCords) {
			std::cout << "Comment :=>> "  << "[" << i << "] - Altimira Estudiant Coordinate { " << resultatPineda.lat << ", " << resultatPineda.lon << " } " << std::endl;
			i++;
		}
		i = 0;

		std::list<Coordinate> pinedaResultatCarrer;
		pinedaResultatCarrer.push_back(Coordinate{ 41.4893533, 2.1475936 });
		pinedaResultatCarrer.push_back(Coordinate{ 41.4893063, 2.1476552 });
		pinedaResultatCarrer.push_back(Coordinate{ 41.4892612, 2.1476832 });
		pinedaResultatCarrer.push_back(Coordinate{ 41.4892160, 2.1476900 });

		std::cout << "Comment :=>> COORDENADES RESULTAT PINEDA: " << std::endl;
		for (auto resultatPineda : pinedaResultatCarrer) {
			std::cout << "Comment :=>> " << "[" << i << "] - Pineda Resultat Coordinate { " << resultatPineda.lat << ", " << resultatPineda.lon << " } " << std::endl;
			i++;
		}

		i = 0;

		std::cout << "Comment :=>> COORDENADES ESTUDIANT ALTIMIRA: " << std::endl;
		for (auto resultatAltimira : altimiraCords) {
			std::cout << "Comment :=>> " << "[" << i << "] - Altimira Estudiant Coordinate { " << resultatAltimira.lat << ", " << resultatAltimira.lon << " } " << std::endl;
			i++;
		}

		std::list<Coordinate> altimiraResultatCarrer;
		altimiraResultatCarrer.push_back(Coordinate{ 41.4900914, 2.1386712 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4900494, 2.1387747 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4902404, 2.1398993 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4902536, 2.1399715 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4902678, 2.1400551 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4904349, 2.1410368 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4904397, 2.1410612 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4904526, 2.1411267 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4904733, 2.1412260 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4904989, 2.1413415 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4905271, 2.1414810 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4905984, 2.1415427 });
		altimiraResultatCarrer.push_back(Coordinate{ 41.4906473, 2.1415473 });

		std::cout << "Comment :=>> COORDENADES RESULTAT ALTIMIRA: " << std::endl;

		i = 0;
		for (auto resultatAltimira : altimiraResultatCarrer) {
			std::cout << "Comment :=>> [" << i << "] - Altimira Resultat Coordinate { " << resultatAltimira.lat << ", " << resultatAltimira.lon << " } " << std::endl;
			i++;
		}
	}


	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE COORDENADES TROBADES PELS DOS CAMINS: " << 17 << std::endl;
		std::cout << "Comment :=>> NUMERO DE COORDANDES TROBADES PELS DOS CAMINS ESTUDIANT: " << temporalGrade << std::endl;
		std::cout << "Comment :=>> TERCERTEST2[1] : " << ((temporalGrade == 17) ? "CORRECTE" : "ERRONI") << std::endl;
	}

	temporalGrade = 4 * (temporalGrade / 17);
	grade += temporalGrade;

	if (mostraDetalls) {
		std::cout << "Comment :=>> ====================" << std::endl;
		std::cout << "Comment :=>> FI TERCER TEST 2" << std::endl;
		std::cout << "Comment :=>> TERCERTEST2 GRADE 3 : " << grade << " / 5"  << std::endl;
		std::cout << "Comment :=>> ====================" << std::endl;
	}

	return grade;

}


double quartTest1(MapaBase* mapaBase)
{
	double grade = 0.0;

	if (mostraDetalls) {
		std::cout << "Comment :=>> -------------" << std::endl;
		std::cout << "Comment :=>> Quart Test 1" << std::endl;
		std::cout << "Comment :=>> Provem que tenim quatre punts de interes botiga, amb els seus colors corresponents, del quart conjunt de dades." << std::endl;
		std::cout << "Comment :=>> Aquests son:" << std::endl;
		std::cout << "Comment :=>> \t UnSupermarket amb color 0xA5BE00" << std::endl;
		std::cout << "Comment :=>> \t UnTobacco amb color 0xFFAD69" << std::endl;
		std::cout << "Comment :=>> \t UnaBakery amb color 0xE85D75" << std::endl;
		std::cout << "Comment :=>> \t UnaBakeryAmbMobRedTancada amb color 0xE85D75" << std::endl;
		std::cout << "Comment :=>> \t UnaBakeryAmbMobRedOberta amb color 0x4CB944" << std::endl;
		std::cout << "Comment :=>> \t Un Shop restant amb color 0xEFD6AC" << std::endl;
		std::cout << "Comment :=>> -------------" << std::endl;
	}

	std::vector<PuntDeInteresBase*> vec_pdis = {};
	mapaBase->getPdis(vec_pdis);

	if (mostraDetalls) {
		std::cout << "Comment :=>> NUMERO DE PUNTS DE INTERES: " << 6 << std::endl;
		std::cout << "Comment :=>> NUMERO DE PUNTS DE INTERES ESTUDIANT: " << vec_pdis.size() << std::endl;
		std::cout << "Comment :=>> QUARTTEST1[0] : " << ((vec_pdis.size() == 6) ? "CORRECTE" : "ERRONI") << std::endl;
	}

	for (auto pdi : vec_pdis)
	{
		if (pdi->getName() == "UnSupermarket" && pdi->getColor() == 0xA5BE00) {
			if (mostraDetalls)
				std::cout << "Comment :=>> ESTUDIANT HA TROBAT EL UNSUPERMARKET" << std::endl;
			grade += 4;
		}
		else if (pdi->getName() == "UnTobacco" && pdi->getColor() == 0xFFAD69) {
			if (mostraDetalls)
				std::cout << "Comment :=>> ESTUDIANT HA TROBAT UNTOBACCO" << std::endl;
			grade += 1;
		}

		else if (pdi->getName() == "UnaBakery" && pdi->getColor() == 0xE85D75) {
			if (mostraDetalls)
				std::cout << "Comment :=>> ESTUDIANT HA TROBAT UNABAKERY" << std::endl;
			grade += 1;
		}

		else if (pdi->getName() == "UnaBakeryAmbMobRedOberta" && pdi->getColor() == 0x4CB944) {
			if (mostraDetalls)
				std::cout << "Comment :=>> ESTUDIANT HA TROBAT UNABAKERY PER MOB. REDUIDA OBERTA" << std::endl;
			grade += 2;
		}

		else if (pdi->getName() == "UnaBakeryAmbMobRedTancada" && pdi->getColor() == 0xE85D75) {
			if (mostraDetalls)
				std::cout << "Comment :=>> ESTUDIANT HA TROBAT UNABAKERY PER MOB. REDUIDA TANCADA" << std::endl;
			grade += 1;
		}

		else if (pdi->getName() == "UnaShopRestant" && pdi->getColor() == 0xEFD6AC) {
			if (mostraDetalls)
				std::cout << "Comment :=>> ESTUDIANT HA TROBAT UN ALTRE SHOP" << std::endl;
			grade += 1;
		}
	}
	if (mostraDetalls) {
		std::cout << "Comment :=>> ====================" << std::endl;
		std::cout << "Comment :=>> FI QUART TEST 1" << std::endl;
		std::cout << "Comment :=>> QUARTEST1 GRADE 4 : " << grade << " / 10"  << std::endl;
		std::cout << "Comment :=>> ====================" << std::endl;
	}

	return grade;
}

