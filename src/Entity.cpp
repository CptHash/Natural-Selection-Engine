/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

#include "../includes/Entity.hpp"
#include <ctime>
#include <unistd.h>
#include <iomanip>
#include <iostream>

Entity::Entity(int id) : _id(id)
{
    std::cout << "Entity " << _id << " created." << std::endl;
};

void Entity::dump() const
{
    std::cout << "Dump" << std::endl;
}

int Entity::getId() const
{
    return _id;
}