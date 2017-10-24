//
// Created by enrico on 21-Jun-17.
//

#ifndef INC_777_NEMICO_H
#define INC_777_NEMICO_H

#include "ElementoGrafico.hpp"



class Nemico: public ElementoGrafico
{

public:
    int attacco;
    int vita=30;
    //identificativo nemico
    int id;
    bool cancellato;

    Nemico(int tipo_nemico, int x, int y, int identificatore, int attacco_nemico );

};

#endif //INC_777_NEMICO_H
