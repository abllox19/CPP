#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
    std::string shout;

public:
    Zombie(std::string name);
    Zombie(void);
	void	announce(void);
    void    change_name(std::string name);

    ~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif