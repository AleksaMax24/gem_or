#include "gem.h"

namespace rgb { //палитра цветов
	color palette[8] = {
		{0.0f, 0.0f, 0.0f},
		{1.0f, 1.0f, 1.0f},
		{1.0f, 0.0f, 0.0f},
		{0.0f, 1.0f, 0.0f},
		{0.0f, 0.0f, 1.0f},
		{1.0f, 1.0f, 0.0f},
		{1.0f, 0.0f, 1.0f},
		{0.0f, 1.0f, 1.0f},
	};
};

const int FromRed = 2;
const int SixColors = 6;

Gem::Gem() { gemColor = rgb::palette[FromRed + rand() % (SixColors)]; } // инициализация случайного по цвету гемса
Gem::Gem(color const& newColor) { gemColor = newColor; } // инициализация определенного по цвету гемса

color Gem::getColor() const { return gemColor; }
void Gem::reColor() { gemColor = rgb::palette[FromRed + rand() % (SixColors)]; } // перекрашивание гемса
void Gem::reColor(color const& newColor) { gemColor = newColor; } // перекрашивание гемса

