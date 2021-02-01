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

#include "Environment.hpp"
#include "Entity.hpp"
#include <iostream>
#include <vector>

class NSEngine {
    public:
        NSEngine();
        ~NSEngine() {};

        std::vector<Entity*> getEntities() const;
        void dump() const;
        void compute() const;
    private:
        int _id;
        std::string _name;
        std::vector<Entity*> _entities;
        Environment _environment;
};

#endif //ENGINE_HPP
