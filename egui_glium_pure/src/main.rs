use egui_glium_pure_example_lib::egui_glium_pure_example;
use std::io::{stdin, stdout, Read, Write};

fn pause() {
    let mut stdout = stdout();
    stdout.write(b"\nThe window should have closed. Press Enter to continue...").unwrap();
    stdout.flush().unwrap();
    stdin().read_line(&mut String::new()).unwrap();
}

/// An implementation of the classic game "Breakout" with egui panels
fn main() {
    egui_glium_pure_example();
    pause();
}
