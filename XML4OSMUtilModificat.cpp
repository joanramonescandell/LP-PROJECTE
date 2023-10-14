
#include "XML4OSMUtilModificat.h"

XML4OSMUtilModificat::XML4OSMUtilModificat() {
	construeixPrimerConjunt();
	construeixSegonConjunt();
	construeixTercerConjunt();
	construeixQuartConjunt();
}

void XML4OSMUtilModificat::construeixPrimerConjunt() {
	m_conjuntTest1 = {};

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "3699207612"),
				std::make_pair("lat", "41.4923857"),
				std::make_pair("lon", "2.1471044")
			},

			// children:
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "shop"),
						std::make_pair("v", "bakery")
					}
				)
			}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "361239083"),
				std::make_pair("lat", "41.4887861"),
				std::make_pair("lon", "2.1417598")
			},

		// children:
		{
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "360927044"),
				std::make_pair("lat", "41.4894257"),
				std::make_pair("lon", "2.1425477")
			},

		// children:
		{
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "1125567473"),
				std::make_pair("lat", "41.4915046"),
				std::make_pair("lon", "2.1484328")
			},

		// children:
		{
		}
		}
	);


	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "5370299407"),
				std::make_pair("lat", "41.4913967"),
				std::make_pair("lon", "2.1482614")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "access"),
					std::make_pair("v", "yes")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "isatrap")
				}
			)
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "1125567473"),
				std::make_pair("lat", "41.4915046"),
				std::make_pair("lon", "2.1484328")
			},

		// children:
		{
		}
		}
	);


	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "6783176580"),
				std::make_pair("lat", "41.4894730"),
				std::make_pair("lon", "2.1425895")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "crossing_ref"),
					std::make_pair("v", "zebra")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "highway"),
					std::make_pair("v", "crossing")
				}
			)
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "5108437668"),
				std::make_pair("lat", "41.4888072"),
				std::make_pair("lon", "2.1418469")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "crossing"),
					std::make_pair("v", "uncontrolled")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "highway"),
					std::make_pair("v", "crossing")
				}
			)
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "5108437663"),
				std::make_pair("lat", "41.4888606"),
				std::make_pair("lon", "2.1420670")
			},

		// children:
		{
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "1835227766"),
				std::make_pair("lat", "41.4902855"),
				std::make_pair("lon", "2.1433050")
			},

		// children:
		{
		}
		}
	);


	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "1835227935"),
				std::make_pair("lat", "41.4905586"),
				std::make_pair("lon", "2.1435364")
			},

		// children:
		{
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "3699218048"),
				std::make_pair("lat", "41.4918606"),
				std::make_pair("lon", "2.1465411")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "365")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "opening_hours"),
					std::make_pair("v", "Mo-Su,PH 06:00-22:00")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "shop"),
					std::make_pair("v", "bakery")
				}
			),
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "6783176578"),
				std::make_pair("lat", "41.4893752"),
				std::make_pair("lon", "2.1425048")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "crossing_ref"),
					std::make_pair("v", "zebra")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "highway"),
					std::make_pair("v", "crossing")
				}
			)
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "5108501276"),
				std::make_pair("lat", "41.4898995"),
				std::make_pair("lon", "2.1429666")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "crossing"),
					std::make_pair("v", "uncontrolled")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "highway"),
					std::make_pair("v", "crossing")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "tactile_paving"),
					std::make_pair("v", "no")
				}
			)
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "5108501275"),
				std::make_pair("lat", "41.4900251"),
				std::make_pair("lon", "2.1430759")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "crossing"),
					std::make_pair("v", "uncontrolled")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "highway"),
					std::make_pair("v", "crossing")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "tactile_paving"),
					std::make_pair("v", "no")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "itsatrap")
				}
			)
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "361239079"),
				std::make_pair("lat", "41.4899716"),
				std::make_pair("lon", "2.1430302")
			},

		// children:
		{
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "5155645054"),
				std::make_pair("lat", "41.4899985"),
				std::make_pair("lon", "2.1430529")
			},

		// children:
		{
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "5370299406"),
				std::make_pair("lat", "41.4913714"),
				std::make_pair("lon", "2.1482221")
			},

		// children:
		{
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "4448289431"),
				std::make_pair("lat", "41.4927379"),
				std::make_pair("lon", "2.1454207")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "Valero")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "opening_hours"),
					std::make_pair("v", "Mo-Sa 07:00-21:00, Su 07:00-14:00")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "outdoor_seating"),
					std::make_pair("v", "yes")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "shop"),
					std::make_pair("v", "bakery")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "wheelchair"),
					std::make_pair("v", "yes")
				}
			)
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "4448306727"),
				std::make_pair("lat", "41.4925669"),
				std::make_pair("lon", "2.1470194")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "amenity"),
					std::make_pair("v", "cafe")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "cuisine"),
					std::make_pair("v", "sandwich")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "Cafe gaucho")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "outdoor_seating"),
					std::make_pair("v", "yes")
				}
			)
		}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "4501079898"),
				std::make_pair("lat", "41.4933596"),
				std::make_pair("lon", "2.1432859")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "amenity"),
					std::make_pair("v", "cafe")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "Antull")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "opening_hours"),
					std::make_pair("v", "Mo-Sa 06:00-21:30, Su,PH 07:00-21:30")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "wheelchair"),
					std::make_pair("v", "yes")
				}
			)
		}
		}
	);


	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"way",

			// attribute:
			{
				std::make_pair("id", "28233854"),
			},

			// children:
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "361239083")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108437668")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108437663")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6783176578")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "360927044")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6783176580")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108501276")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "361239079")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5155645054")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108501275")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227766")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835227935")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de la Industria")
					}
				)
			}
		}
	);

	m_conjuntTest1.push_back(
		XmlElement{
			// name:
			"way",

			// attribute:
			{
				std::make_pair("id", "97173341"),
			},

			// children:
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1125567473")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5370299407")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5370299406")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de Santa Teresa")
					}
				)
			}
		}
	);

}

void XML4OSMUtilModificat::construeixSegonConjunt() {
	m_conjuntTest2 = {};


	m_conjuntTest2.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "51782591316"),
				std::make_pair("lat", "41.4928803"),
				std::make_pair("lon", "2.1452381")
			},

			// children:
			{
			}
		}
	);

	m_conjuntTest2.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "51782591317"),
				std::make_pair("lat", "41.4929072"),
				std::make_pair("lon", "2.1452474")
			},

			// children:
			{
			}
		}
	);

	m_conjuntTest2.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "51782591318"),
				std::make_pair("lat", "41.4933070"),
				std::make_pair("lon", "2.1453852")
			},

			// children:
			{
			}
		}
	);

	m_conjuntTest2.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "51782591319"),
				std::make_pair("lat", "41.4939882"),
				std::make_pair("lon", "2.1456419")
			},

			// children:
			{
			}
		}
	);

	m_conjuntTest2.push_back(
		XmlElement{
			// name:
			"way",

			// attribute:
			{
				std::make_pair("id", "97173341"),
			},

			// children:
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "51782591316")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "51782591317")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "51782591318")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "51782591319")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Un carrer qualsevol")
					}
				)
			}
		}
	);


	m_conjuntTest2.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "1538184432"),
				std::make_pair("lat", "41.4918606"),
				std::make_pair("lon", "2.1465411")
			},

			// children:
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "La Millor Pastisseria")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "shop"),
						std::make_pair("v", "bakery")
					}
				)
			}
		}
	);


	m_conjuntTest2.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "4448289431"),
				std::make_pair("lat", "41.4902204"),
				std::make_pair("lon", "2.1406477")
			},

			// children:
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "El Millor Restaurant")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "amenity"),
						std::make_pair("v", "restaurant")
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "cuisine"),
						std::make_pair("v", "regional")
					}
				)
			}
		}
	);


}

void XML4OSMUtilModificat::construeixTercerConjunt() {
	m_conjuntTest3 = {};

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "77532251"),
				std::make_pair("id", "357101444"),
				std::make_pair("lat", "41.4902204"),
				std::make_pair("lon", "2.1406477"),
				std::make_pair("timestamp", "2019-11-25T15:26:03Z"),
				std::make_pair("uid", "4946691"),
				std::make_pair("user", "MultiDavid2001b"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "amenity"),
						std::make_pair("v", "restaurant"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "cuisine"),
						std::make_pair("v", "regional"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "El Viejo Roble"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "wheelchair"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "58538236"),
				std::make_pair("id", "359211270"),
				std::make_pair("lat", "41.4902107"),
				std::make_pair("lon", "2.1411346"),
				std::make_pair("timestamp", "2018-04-29T21:27:48Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "amenity"),
						std::make_pair("v", "restaurant"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "cuisine"),
						std::make_pair("v", "chinese"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Nueva China"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "wheelchair"),
						std::make_pair("v", "no"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "49941425"),
				std::make_pair("id", "4943760852"),
				std::make_pair("lat", "41.4907316"),
				std::make_pair("lon", "2.1456752"),
				std::make_pair("timestamp", "2017-06-30T11:10:23Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "amenity"),
						std::make_pair("v", "restaurant"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "level"),
						std::make_pair("v", "0"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Anec de Pekin"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "75791124"),
				std::make_pair("id", "6886341369"),
				std::make_pair("lat", "41.4907410"),
				std::make_pair("lon", "2.1473352"),
				std::make_pair("timestamp", "2019-10-16T15:45:50Z"),
				std::make_pair("uid", "4946691"),
				std::make_pair("user", "MultiDavid2001b"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "amenity"),
						std::make_pair("v", "restaurant"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "la Tasca de Ca l'Enric"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "81180734"),
				std::make_pair("id", "7223095579"),
				std::make_pair("lat", "41.4905910"),
				std::make_pair("lon", "2.1450548"),
				std::make_pair("timestamp", "2020-02-18T16:42:16Z"),
				std::make_pair("uid", "4946691"),
				std::make_pair("user", "MultiDavid2001b"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "addr:city"),
						std::make_pair("v", "Cerdanyola del Vall�s"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "addr:street"),
						std::make_pair("v", "Avinguda de la Primavera"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "amenity"),
						std::make_pair("v", "restaurant"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Paco Junior"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "102562605"),
				std::make_pair("id", "8606512476"),
				std::make_pair("lat", "41.4928550"),
				std::make_pair("lon", "2.1426380"),
				std::make_pair("timestamp", "2021-04-08T12:04:11Z"),
				std::make_pair("uid", "3414856"),
				std::make_pair("user", "Interswd"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "amenity"),
						std::make_pair("v", "restaurant"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "cuisine"),
						std::make_pair("v", "pizza"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "El Colosseo"),
					}
				),
				// Atribut modificat del Cerdanyola mapa
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "wheelchair"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);

	// Carrer de la Pineda
	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "108342831"),
				std::make_pair("id", "1835240633"),
				std::make_pair("lat", "41.4893533"),
				std::make_pair("lon", "2.1475936"),
				std::make_pair("timestamp", "2021-07-21T00:31:54Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "5108476342"),
				std::make_pair("lat", "41.4893063"),
				std::make_pair("lon", "2.1476552"),
				std::make_pair("timestamp", "2017-09-15T21:56:27Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "5108476345"),
				std::make_pair("lat", "41.4892612"),
				std::make_pair("lon", "2.1476832"),
				std::make_pair("timestamp", "2017-09-15T21:56:27Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "52082719"),
				std::make_pair("id", "1835228084"),
				std::make_pair("lat", "41.4892160"),
				std::make_pair("lon", "2.1476900"),
				std::make_pair("timestamp", "2017-09-15T21:58:09Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "52082690"),
				std::make_pair("id", "172637098"),
				std::make_pair("timestamp", "2017-09-15T21:56:30Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "9"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835240633"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108476342"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "5108476345"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228084"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer de la Pineda"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "surface"),
						std::make_pair("v", "asphalt"),
					}
				),
			}
		}
	);

	// Carrer d'Altimira
	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "74271150"),
				std::make_pair("id", "1835228098"),
				std::make_pair("lat", "41.4900914"),
				std::make_pair("lon", "2.1386712"),
				std::make_pair("timestamp", "2019-09-09T15:54:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "81186376"),
				std::make_pair("id", "2798884355"),
				std::make_pair("lat", "41.4900494"),
				std::make_pair("lon", "2.1387747"),
				std::make_pair("timestamp", "2020-02-18T19:35:39Z"),
				std::make_pair("uid", "220932"),
				std::make_pair("user", "mor"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "74271150"),
				std::make_pair("id", "6783176628"),
				std::make_pair("lat", "41.4902404"),
				std::make_pair("lon", "2.1398993"),
				std::make_pair("timestamp", "2019-09-09T15:54:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "74271150"),
				std::make_pair("id", "361236983"),
				std::make_pair("lat", "41.4902536"),
				std::make_pair("lon", "2.1399715"),
				std::make_pair("timestamp", "2019-09-09T15:54:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "3"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "74271150"),
				std::make_pair("id", "6783176629"),
				std::make_pair("lat", "41.4902678"),
				std::make_pair("lon", "2.1400551"),
				std::make_pair("timestamp", "2019-09-09T15:54:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing_ref"),
						std::make_pair("v", "zebra"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55386027"),
				std::make_pair("id", "4943823158"),
				std::make_pair("lat", "41.4904349"),
				std::make_pair("lon", "2.1410368"),
				std::make_pair("timestamp", "2018-01-12T17:11:04Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "tactile_paving"),
						std::make_pair("v", "no"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "74271150"),
				std::make_pair("id", "357966798"),
				std::make_pair("lat", "41.4904397"),
				std::make_pair("lon", "2.1410612"),
				std::make_pair("timestamp", "2019-09-09T15:54:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "traffic_signals"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "35006809"),
				std::make_pair("id", "359178428"),
				std::make_pair("lat", "41.4904526"),
				std::make_pair("lon", "2.1411267"),
				std::make_pair("timestamp", "2015-11-01T08:20:27Z"),
				std::make_pair("uid", "581863"),
				std::make_pair("user", "pedrobv"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "55386027"),
				std::make_pair("id", "4943823156"),
				std::make_pair("lat", "41.4904733"),
				std::make_pair("lon", "2.1412260"),
				std::make_pair("timestamp", "2018-01-12T17:11:02Z"),
				std::make_pair("uid", "832276"),
				std::make_pair("user", "Sioul"),
				std::make_pair("version", "4"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "crossing"),
						std::make_pair("v", "traffic_signals"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "crossing"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "tactile_paving"),
						std::make_pair("v", "no"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "21768871"),
				std::make_pair("id", "2798884356"),
				std::make_pair("lat", "41.4904989"),
				std::make_pair("lon", "2.1413415"),
				std::make_pair("timestamp", "2014-04-18T14:01:27Z"),
				std::make_pair("uid", "2037414"),
				std::make_pair("user", "Xalocs"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "21768871"),
				std::make_pair("id", "2798884357"),
				std::make_pair("lat", "41.4905271"),
				std::make_pair("lon", "2.1414810"),
				std::make_pair("timestamp", "2014-04-18T14:01:27Z"),
				std::make_pair("uid", "2037414"),
				std::make_pair("user", "Xalocs"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "35006809"),
				std::make_pair("id", "2798884358"),
				std::make_pair("lat", "41.4905984"),
				std::make_pair("lon", "2.1415427"),
				std::make_pair("timestamp", "2015-11-01T08:20:27Z"),
				std::make_pair("uid", "581863"),
				std::make_pair("user", "pedrobv"),
				std::make_pair("version", "2"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "give_way"),
					}
				),
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"node",

			// attribute
			{
				std::make_pair("changeset", "21768871"),
				std::make_pair("id", "2798884359"),
				std::make_pair("lat", "41.4906473"),
				std::make_pair("lon", "2.1415473"),
				std::make_pair("timestamp", "2014-04-18T14:01:27Z"),
				std::make_pair("uid", "2037414"),
				std::make_pair("user", "Xalocs"),
				std::make_pair("version", "1"),
				std::make_pair("visible", "true"),
			},

			// children
			{
			}
		}
	);

	m_conjuntTest3.push_back(
		XmlElement{
			// name
			"way",

			// attribute
			{
				std::make_pair("changeset", "74271150"),
				std::make_pair("id", "28234410"),
				std::make_pair("timestamp", "2019-09-09T15:54:30Z"),
				std::make_pair("uid", "126203"),
				std::make_pair("user", "Jose Luis Infante"),
				std::make_pair("version", "12"),
				std::make_pair("visible", "true"),
			},

			// children
			{
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "1835228098"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "2798884355"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6783176628"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "361236983"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "6783176629"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823158"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "357966798"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "359178428"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "4943823156"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "2798884356"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "2798884357"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "2798884358"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("nd", {
						std::make_pair("ref", "2798884359"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "highway"),
						std::make_pair("v", "residential"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "lanes"),
						std::make_pair("v", "1"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "name"),
						std::make_pair("v", "Carrer d'Altimira"),
					}
				),
				std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
						std::make_pair("k", "oneway"),
						std::make_pair("v", "yes"),
					}
				),
			}
		}
	);




}

void XML4OSMUtilModificat::construeixQuartConjunt() {
	m_conjuntTest4 = {};


	m_conjuntTest4.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "3699218001"),
				std::make_pair("lat", "41.4906783"),
				std::make_pair("lon", "2.1417052")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "UnaBakery")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "shop"),
					std::make_pair("v", "bakery")
				}
			),
		}
		}
	);

	m_conjuntTest4.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "3699218001"),
				std::make_pair("lat", "41.4906783"),
				std::make_pair("lon", "2.1417052")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "UnaBakeryAmbMobRedOberta")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "shop"),
					std::make_pair("v", "bakery")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "wheelchair"),
					std::make_pair("v", "yes")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "opening_hours"),
					std::make_pair("v", "Tots els dies a 06:00-22:00. Pista: utilitza el find \n de std::string i no copiis el que posa aqui per comparar :-).")
				}
			)
		}
		}
	);

	m_conjuntTest4.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "3699218001"),
				std::make_pair("lat", "41.4906783"),
				std::make_pair("lon", "2.1417052")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "UnaBakeryAmbMobRedTancada")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "shop"),
					std::make_pair("v", "bakery")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "wheelchair"),
					std::make_pair("v", "yes")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "opening_hours"),
					std::make_pair("v", "22:00-23:00")
				}
			)
		}
		}
	);

	m_conjuntTest4.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "3699218002"),
				std::make_pair("lat", "41.4909194"),
				std::make_pair("lon", "2.1411956")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "UnTobacco")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "shop"),
					std::make_pair("v", "tobacco")
				}
			),
		}
		}
	);

	m_conjuntTest4.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "3699218003"),
				std::make_pair("lat", "41.4910867"),
				std::make_pair("lon", "2.1408014")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "UnSupermarket")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "shop"),
					std::make_pair("v", "supermarket")
				}
			),
		}
		}
	);

	m_conjuntTest4.push_back(
		XmlElement{
			// name:
			"node",

			// attribute:
			{
				std::make_pair("id", "3699218003"),
				std::make_pair("lat", "45.4910867"),
				std::make_pair("lon", "2.1508014")
			},

		// children:
		{
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "name"),
					std::make_pair("v", "UnaShopRestant")
				}
			),
			std::make_pair<std::string, std::vector<PAIR_ATTR_VALUE>>("tag", {
					std::make_pair("k", "shop"),
					std::make_pair("v", "noexisteixo")
				}
			),
		}
		}
	);


}

void XML4OSMUtilModificat::retornaConjuntTest1(std::vector<XmlElement>& out) {
	out = m_conjuntTest1;
}

void XML4OSMUtilModificat::retornaConjuntTest2(std::vector<XmlElement>& out) {
	out = m_conjuntTest2;
}

void XML4OSMUtilModificat::retornaConjuntTest3(std::vector<XmlElement>& out) {
	out = m_conjuntTest3;
}

void XML4OSMUtilModificat::retornaConjuntTest4(std::vector<XmlElement>& out) {
	out = m_conjuntTest4;
}

XML4OSMUtilModificat::~XML4OSMUtilModificat()
{

}

