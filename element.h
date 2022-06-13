#pragma once
#include <iostream> 
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <windows.h> 
#include <gl/gl.h>
#include <memory>
#include <math.h>

#pragma comment(lib, "opengl32.lib") // opengl enable

struct color { // структура цвета
	float r, g, b;
};

enum isCases { 
	SELECT, CHECKED, // SELECT дл€ отрисовки рамки, CHECKED дл€ алгоритма поиска всех р€дом сто€щих €чеек одного цвета
	EXPLOSION, RECOLOR //костыль
};

class Element { //интерфейс
public:
	std::vector<bool> is = { false, false, false, false }; //булевый вектор
	

	virtual void DrawElement() const = 0; // чистые виртуальные функции
	virtual void DrawFrame() const = 0;
	virtual color getColor() const = 0;
	virtual void reColor() = 0;
	virtual void reColor(color const& newColor) = 0;
};

