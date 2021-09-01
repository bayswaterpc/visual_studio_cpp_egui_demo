#[no_mangle]
pub extern fn start_egui_demo() {
    let app = egui_demo_lib::WrapApp::default();
    let options = eframe::NativeOptions {
        ..Default::default()
    };
    eframe::run_native(Box::new(app), options);
    println!("[start_egui_demo] Egui window should shut");

    //thread '<unnamed>' panicked at 'Initializing the event loop outside of the main thread is a significant cross-platform compatibility hazard. If you really, absolutely need to create an EventLoop on a different thread, please use the `EventLoopExtWindows::new_any_thread` function.', C:\Users\jmw99\.cargo\registry\src\github.com-1ecc6299db9ec823\winit-0.24.0\src\platform_impl\windows\event_loop.rs:136:9
    //note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace

    //fails with runtime error
    // let child = std::thread::spawn( move || {
    //     let app = egui_demo_lib::WrapApp::default();
    //     let options = eframe::NativeOptions {
    //         // Let's show off that we support transparent windows
    //         transparent: true,
    //         decorated: true,
    //         ..Default::default()
    //     };
    //     eframe::run_native_graceful(Box::new(app), options);
    // });
    // child.join();
    //println!("Why no reach?");
}
