#pragma once
#include "MoveableBlock.h"
#include <vector>
class PatternCreator
{
public:
	PatternCreator();
	~PatternCreator();

	static void AddUniformAmount(std::vector<std::shared_ptr<LegoBlock>>&, int, int, int, float, float, float, ColourData);
};

