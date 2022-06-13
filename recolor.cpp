#include "recolor.h"

ReColor::ReColor(color const& prev) { prevColor = prev; is[RECOLOR] = true; } //бонус перекрашивания хранит в себе предыдущий цвет



color ReColor::getColor() const { return prevColor; }
void ReColor::reColor() {}
void ReColor::reColor(color const& newColor) {}