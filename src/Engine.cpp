/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

#include "../includes/Engine.hpp"
#include <ctime>
#include <unistd.h>
#include <iomanip>
#include <iostream>

NSEngine::NSEngine()
{
    std::cout << "Engine created." << std::endl;
};

void NSEngine::dump()
{
    std::cout << "Dump" << std::endl;
}