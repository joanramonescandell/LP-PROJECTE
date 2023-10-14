#ifndef LP_OSM_2122_XML4OSMUTILMODIFICAT_H
#define LP_OSM_2122_XML4OSMUTILMODIFICAT_H

#include <string>
#include <vector>
#include "Common.h"

class XML4OSMUtilModificat {

private:
    std::vector<XmlElement> m_conjuntTest1;
    std::vector<XmlElement> m_conjuntTest2;
    std::vector<XmlElement> m_conjuntTest3;
    std::vector<XmlElement> m_conjuntTest4;


    void construeixPrimerConjunt();
    void construeixSegonConjunt();
    void construeixTercerConjunt();
    void construeixQuartConjunt();


public:
    XML4OSMUtilModificat();
    ~XML4OSMUtilModificat();

    void retornaConjuntTest1(std::vector<XmlElement>& out1);
    void retornaConjuntTest2(std::vector<XmlElement>& out2);
    void retornaConjuntTest3(std::vector<XmlElement>& out3);
    void retornaConjuntTest4(std::vector<XmlElement>& out4);



};

#endif //LP_OSM_2122_XML4OSMUTIL_H
