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
    int n;
    std::cout << "Hello World!\n";

    std::cout << "The following egui demo crashes due to \"!\" i.e. never return type in eframe\n Type numeric to continue..";
    std::cin >> n;
    start_egui_demo();
    std::cout << "\nSee doesn't reach : ";
    std::cin >> n;

    std::cout << "Egui glium app has the same problem";
    egui_glium_pure_example_c_wrapper();
    std::cin >> n;

    return 1;
}