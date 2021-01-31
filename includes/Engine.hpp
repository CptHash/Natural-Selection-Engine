/*
** Natural Selection Engine
** Created by mathieu on 31/01/20201.
** File description:
** N/a
*/

#ifndef TEMPLATE_MACROS_HPP
#define TEMPLATE_MACROS_HPP

#define ERROR 84
#define SUCCES 0

#include <iostream>
#include <vector>

class NSEngine {
    public:
        NSEngine();
        ~NSEngine() {};
        void dump();
    private:
        int _id;
        std::string _name;
};

#endif //TEMPLATE_MACROS_HPP
