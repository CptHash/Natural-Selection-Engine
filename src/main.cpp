/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

#include "../includes/Engine.hpp"
#include "../includes/exception.hpp"
#include <iomanip>
#include <cstring>
#include <vector>
#include <iostream>
#include <fstream>
#include <iostream>


int main (int ac, char **av)
{
    NSEngine engine = NSEngine();

    engine.compute();
    return SUCCES;
}