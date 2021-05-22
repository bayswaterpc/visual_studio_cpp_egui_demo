// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#pragma comment(lib, "../egui_demo_lib/target/release/egui_demo_app_c_wrapper.lib")
#pragma comment(lib, "../bevy_egui_paneled_playground/target/release/egui_paneled_playground.lib")

//Added for egui_demo_app_c_wrapper
#pragma comment(lib, "userenv.lib")
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "Comctl32.lib")
#pragma comment(lib, "UxTheme.lib")
#pragma comment(lib, "bcrypt.lib")
#pragma comment(lib, "dwmapi.lib")
#pragma comment(lib, "Imm32.lib")
#pragma comment(lib, "Opengl32.lib")

//Added for egui_demo_app_c_wrapper
#pragma comment(lib, "d3dcompiler") //actually works

//#include <GLFW/glfw3.h>
//#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/glslang.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/HLSL.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/OGLCompiler.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/OSDependent.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPIRV.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPIRV-Tools.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPIRV-Tools-opt.lib")
//#pragma comment(lib, "../glslang-master-windows-x64-Release/lib/SPVRemapper.lib")

#include <iostream>
#include "../egui_demo_lib/src/c_wrapper.h";
#include "../bevy_egui_paneled_playground/src/c_wrapper.h";


#include "../glslang-master-windows-x64-Release/include/glslang/Include/glslang_c_interface.h";
#include "../glslang-master-windows-x64-Release/include/glslang/Public/ShaderLang.h";

int main()
{
    int n;
    std::cout << "Hello World!\n";

    std::cout << "Bevy egui app runs and closes no problem";
    std::cin >> n;
    //paneled_playground_c_wrapper();

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
