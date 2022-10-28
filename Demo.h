#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBO3, VAO3, EBO3, texture3, VBO4, VAO4, EBO4, texture4,
		VBO5, VAO5, EBO5, texture5, VBO6, VAO6, EBO6, texture6;
	// vao -> corner table, vao2 -> plane, vao3 -> wall, vao4 -> art wall, vao5 -> extra wall, vao6 -> ceiling
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCornerTable();
	void BuildColoredArtWall();
	void BuildColoredPlane();
	void BuildColoredWall();
	void BuildColoredCeiling();
	void BuildColoredExtraWall();

	void DrawColoredCornerTable();
	void DrawColoredArtWall();
	void DrawColoredPlane();
	void DrawColoredWall();
	void DrawColoredCeiling();
	void DrawColoredExtraWall();

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

