#include <iostream>
#include <string>

std::string myFullName = "Evan Jere Denny";
std::string myInitials = "EJD";

struct Name {
    std::string *name = &myFullName;
    std::string *initials = &myInitials;
} name;

int main() {
    std::cout << *name.name << ' ' << *name.initials << std::endl;
    return 0;
}
