#pragma once

#include"renderable.h"
#include"PhysicsBody.h"
#include"fuel.h"

#include<vector>

// Lunar Lander Obejct
class Lander : public Renderable {

public:
	// Static constants for the lander
	const static float s_Width;
	const static float s_Height;

private:
	std::vector<Vertex> m_LanderVerticesMain;
	std::vector<Vertex> m_LanderVerticesLower;

	Vector2 m_LandingGearPosition[2];

	PhysicsBody m_PhysicsBody;
	FuelBar m_FuelBar;

	Vector4 m_Color = Vector4(1, 1, 1, 1);

public:
	Lander();
	~Lander();

	void lost();
	void reset();
	void draw() override;
	void update();

};