#pragma comment(lib, "../egui_demo_lib/target/release/egui_demo_app_c_wrapper.lib")
#pragma comment(lib, "../egui_glium_pure/target/release/egui_glium_pure_example_lib.lib")


//Added for egui_demo_app_c_wrapper
#pragma comment(lib, "userenv.lib")
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "Comctl32.lib")
#pragma comment(lib, "UxTheme.lib")
#pragma comment(lib, "bcrypt.lib")
#pragma comment(lib, "dwmapi.lib")
#pragma comment(lib, "Imm32.lib")
#pragma comment(lib, "Opengl32.lib")

#include <iostream>
#include "../egui_demo_lib/src/c_wrapper.h";
#include "../egui_glium_pure/src/c_wrapper.h";

int main() {
    egui_glium_pure_example_c_wrapper();
    int n;
    std::cout << "Progress now we can close without crashing but rendered window stays in place!\nType numeric to continue..";
    std::cin >> n;

    std::cout << "The following egui demo crashes due to \"!\" i.e. never return type in eframe\nType numeric to continue..";
    std::cin >> n;
    start_egui_demo();
    std::cout << "\nSee doesn't reach : ";
    std::cin >> n;


    return 1;
}