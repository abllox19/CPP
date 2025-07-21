#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
        std::string shout;

    public:
        void Zombie(std::string name);
        void announce(void);
};