/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

#define ERROR 84
#define SUCCES 0

#include <iostream>
#include <vector>

class Environment {
    public:
        Environment();
        ~Environment() {};

        void dump() const;
        float getMinimumTemp() const;
        float getMaximumTemp() const;
    
    private:
        float _minimumTemp; //Survive Range
        float _maximumTemp;
};

#endif //ENVIRONMENT_HPP
