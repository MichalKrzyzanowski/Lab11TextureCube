#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <fstream>

#include <Vector3.h>
#include <Matrix3.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>


class Game
{
public:
	Game();
	~Game();
	void run();
private:
	sf::Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	void controlCube();
	std::string Game::loadShader(std::string& t_fileLocation);

	std::string fragmentLocation{ "fragmentShader.txt" };
	std::string vertexLocation{ "vertexShader.txt" };

	sf::Clock clock;
	sf::Time elapsed;

	float rotationAngle = 0.05f;

	Vector3 m_points[24];
};

#endif