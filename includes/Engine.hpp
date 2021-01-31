/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

#ifndef ENGINE_HPP
#define ENGINE_HPP

#define ERROR 84
#define SUCCES 0

#include "Entity.hpp"
#include <iostream>
#include <vector>

class NSEngine {
    public:
        NSEngine();
        ~NSEngine() {};

        std::vector<Entity*> getEntities() const;
        void dump() const;
    private:
        int _id;
        std::string _name;
        std::vector<Entity*> _entities;
};

#endif //ENGINE_HPP
