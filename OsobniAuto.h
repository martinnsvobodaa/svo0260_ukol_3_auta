#pragma once

#include "Auto.h"


class OsobniAuto : public Auto
{
private:
    int vykon;
public:
    OsobniAuto(int k, int r, int d, int v);
    Auto get_maxRychlost();

};
