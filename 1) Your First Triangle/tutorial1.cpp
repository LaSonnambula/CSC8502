#pragma comment (lib, "nclgl.lib")
#include "./nclgl/window.h"
#include "Renderer.h"

int main()	{
	Window w("My First OpenGL Triangle!", 1280, 720, false);

	if(!w.HasInitialised()) {
		return -1;
	}
	
	Renderer renderer(w);
	if(!renderer.HasInitialised()) {
		return -1;
	}

	while (w.UpdateWindow() &&
		!Window::GetKeyboard() -> KeyDown(KEYBOARD_ESCAPE)) {
		renderer.RenderScene();
		
	}
	return 0;
}