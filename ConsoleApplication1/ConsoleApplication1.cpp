// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#pragma comment(lib, "../egui_demo_lib/target/release/egui_demo_app_c_wrapper.lib")
#pragma comment(lib, "userenv.lib")
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "Comctl32.lib")
#pragma comment(lib, "UxTheme.lib")
#pragma comment(lib, "bcrypt.lib")
#pragma comment(lib, "dwmapi.lib")
#pragma comment(lib, "Imm32.lib")
#pragma comment(lib, "Opengl32.lib")

#include <iostream>
#include "../egui_demo_lib/src/egui_demo_app_c_wrapper.h";

int main()
{
    int n;
    std::cout << "Hello World!\n";
    std::cout << "The following egui demo crashes due to \"!\" i.e. never return type in eframe\n Type numeric to continue..";
    std::cin >> n;
    start_egui_demo();
    std::cout << "\nSee doesn't reach : ";
    std::cin >> n;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
