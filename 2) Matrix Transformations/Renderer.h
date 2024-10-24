#pragma once
#include "../nclgl/OGLRenderer.h"

 class Renderer : public OGLRenderer {
 public:
	Renderer(Window & parent);
	virtual ~Renderer(void);
	
	 virtual void RenderScene();
	
	 void SwitchToPerspective();
	 void SwitchToOrthographic();
	
	 inline void SetScale(float s) { scale = s; }
	 inline void SetRotation(float r) { rotation = r; }
	 inline void SetPosition(Vector3 p) { position = p; }

	 inline void SetFov(float f){ fov = f; }
	
protected:
	 Mesh * triangle;
	
	 float scale;
	 float rotation;
	 float fov = 45.0f;
	 Vector3 position;
	
};
