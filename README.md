# visual_studio_cpp_egui_demo
 Project to show linking [egui demo lib](https://emilk.github.io/egui/index.html) to a visual studio built c++ project.\  All linking settings are in main.cpp so it should take little effort to reporpuse for unix systems.

 The app is linked currently, but cannot callback successfully due to eframe's `!` i.e. `never` return type

 # TODO
 Investigate how to get a graceful exit with eframe or glium, potentially using tokio to spawn a thread which runs eframe 
