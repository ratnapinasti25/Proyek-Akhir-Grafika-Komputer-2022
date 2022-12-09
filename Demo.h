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
	GLuint shaderProgram, VBO, VAO, EBO, texture, // corner table
		VBO2, VAO2, EBO2, texture2, // plane
		VBO3, VAO3, EBO3, texture3, // wall
		VBO4, VAO4, EBO4, texture4, // art wall
		VBO5, VAO5, EBO5, texture5, // extra wall
		VBO6, VAO6, EBO6, texture6, // ceiling
		VBO7, VAO7, EBO7, texture7, // carpet
		VBO8, VAO8, EBO8, texture8, // art wall 2
		VBO9, VAO9, EBO9, texture9, // small sofa
		VBO10, VAO10, EBO10, texture10, // corner table black
		VBO11, VAO11, EBO11, texture11, // large sofa
		VBO12, VAO12, EBO12, texture12, // table lamp
		VBO13, VAO13, EBO13, texture13, // table lamp 2 
		VBO14, VAO14, EBO14, texture14, // glass window
		VBO15, VAO15, EBO15, texture15, // window
		VBO16, VAO16, EBO16, texture16, // ceiling fan 1 (penyangga kipas angin)
		VBO17, VAO17, EBO17, texture17, // ceiling fan 2 (baling-baling)
		VBO18, VAO18, EBO18, texture18, // door
		VBO19, VAO19, EBO19, texture19, //
		VBO20, VAO20, EBO20, texture20, // table (meja di tengah)
		VBO21, VAO21, EBO21, texture21, // spotlight 1
		VBO22, VAO22, EBO22, texture22, // spotlight 2
		VBO23, VAO23, EBO23, texture23, // spotlight 3
		VBO24, VAO24, EBO24, texture24, // spotlight 4
		VBO25, VAO25, EBO25, texture25; // skybox
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
	void BuildColoredCeilingFan1();
	void BuildColoredCeilingFan2();
	void BuildColoredDoor1();
	void BuildColoredTable();
	void BuildColoredSpotlight1();
	void BuildColoredSpotlight2();
	void BuildColoredSpotlight3();
	void BuildColoredSpotlight4();
	void BuildColoredPlane();
	void BuildColoredWall();
	void BuildColoredCeiling();
	void BuildColoredExtraWall();
	//void BuildColoredSkybox();

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
	void DrawColoredCeilingFan1();
	void DrawColoredCeilingFan2();
	void DrawColoredDoor1();
	void DrawColoredTable();
	void DrawColoredSpotlight1();
	void DrawColoredSpotlight2();
	void DrawColoredSpotlight3();
	void DrawColoredSpotlight4();
	void DrawColoredPlane();
	void DrawColoredWall();
	void DrawColoredCeiling();
	void DrawColoredExtraWall();
	//void DrawColoredSkybox();

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();

	float bezier(float t, float p0, float p1, float p2);
};

