
#include <iostream>
#include <string>
#include <limits>

class contact
{
private:
    int id;
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string number;
    std::string darkest_secret;

public:
    void add(int i);
    void search(void);
    void print_all(void);

    // contact(int i);
// contact();
};
