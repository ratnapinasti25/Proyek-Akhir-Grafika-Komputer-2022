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
		VBO5, VAO5, EBO5, texture5, VBO6, VAO6, EBO6, texture6, VBO7, VAO7, EBO7, texture7, VBO8, VAO8, EBO8, texture8, VBO9, VAO9, 
		EBO9, texture9, VBO10, VAO10, EBO10, texture10, VBO11, VAO11, EBO11, texture11, VBO12, VAO12, EBO12, texture12, VBO13, VAO13,
		EBO13, texture13, VBO14, VAO14, EBO14, texture14, VBO15, VAO15, EBO15, texture15, VBO16, VAO16, EBO16, texture16, VBO17, VAO17,
		EBO17, texture17, VBO18, VAO18, EBO18, texture18, VBO19, VAO19, EBO19, texture19, VBO20, VAO20, EBO20, texture20;
	// vao -> corner table, vao2 -> plane, vao3 -> wall, vao4 -> art wall, vao5 -> extra wall, vao6 -> ceiling, vao7 -> carpet,
	// vao8 -> art wall besar, vao9 -> sofa kecil, vao10 -> corner table black, vao11 -> sofa besar, vao12 -> lampu meja, vao13->lampu meja 2
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;

	float rute_x[27] =
	{
		0, 0, 0,
		0, 0, 0,
		0, -5, -5,
		-10, -10, -5,
		-5, 0, 0,
		5, 5, 10,
		10, 5, 5,
		5, 5, 0,
		0, 0, 0
	};

	float rute_y[27] =
	{
		0, 0, 5,
		5, 10, 10,
		10, 15, 15,
		20, 20, 25,
		25, 25, 25,
		25, 25, 20,
		20, 15, 15,
		10, 10, 5,
		5, 0, 0
	};

	int ukuranBC = 27;
	int skalaBC = 3;
	int idxPos = 0;
	float px = 0;
	float py = 0;
	float segment = 0;
	bool translate = false;
	float segmentCount = 600;

	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);

	void BuildColoredCornerTable();
	void BuildColoredCornerTableBlack();
	void BuildColoredArtWall();
	void BuildColoredArtWall2();
	void BuildColoredCarpet();
	void BuildColoredSmallSofa();
	void BuildColoredLargeSofa();
	void BuildColoredTableLamp();
	void BuildColoredTableLamp2();
	void BuildColoredWindow();
	void BuildColoredGlassWindow();
	/*
	void BuildColoredCeilingFan1();
	void BuildColoredCeilingFan2();
	*/
	void BuildColoredDoor1();
	void BuildColoredDoor2();
	void BuildColoredTable();
	void BuildColoredPlane();
	void BuildColoredWall();
	void BuildColoredCeiling();
	void BuildColoredExtraWall();

	void DrawColoredCornerTable();
	void DrawColoredCornerTableBlack();
	void DrawColoredArtWall();
	void DrawColoredArtWall2();
	void DrawColoredCarpet();
	void DrawColoredSmallSofa();
	void DrawColoredLargeSofa();
	void DrawColoredTableLamp();
	void DrawColoredTableLamp2();
	void DrawColoredWindow();
	void DrawColoredGlassWindow();
	/*
	void DrawColoredCeilingFan1();
	void DrawColoredCeilingFan2();
	*/
	void DrawColoredDoor1();
	void DrawColoredDoor2();
	void DrawColoredTable();
	void DrawColoredPlane();
	void DrawColoredWall();
	void DrawColoredCeiling();
	void DrawColoredExtraWall();

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();

	float bezier(float t, float p0, float p1, float p2);
};

