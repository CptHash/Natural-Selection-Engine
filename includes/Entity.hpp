/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

#ifndef ENTITY_HPP
#define ENTITY_HPP

#define ERROR 84
#define SUCCES 0

#include <iostream>
#include <vector>

class Entity {
    public:
        Entity(int id);
        ~Entity() {};

        void dump() const;
        int getId() const;
        float getMinimumTemp() const;
        float getMaximumTemp() const;
    
    private:
        int _id = 0;
        std::string _name;
        float _minimumTemp; //Survive Range
        float _maximumTemp;
};

#endif //ENTITY_HPP
