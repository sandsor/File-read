
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

void readfile();

int main()
{
    readfile();
}

void readfile() {

  /*  std::fstream File("text.txt", std::ios::in);

    if (File) {
        perror("File exist  ");
    }
    else {
        perror("read from file  ");
    }*/

    int age = {};
    std::string name;
    float savings{};

    std::string Buffer = "";

    std::fstream File("text.txt", std::ios::in);
    if (File.is_open()) {
        perror("File exists");
        while (File >> name >> age >> savings) {
            std::cout << "_______________________________________________" << std::endl;
            std::cout << "|Name| :" << name << "   |Age|  :" << age << "   |Savings|  :" << savings << "" << std::endl;
        }
    }
    else {
        perror("File  ");
    }
    File.close();

}