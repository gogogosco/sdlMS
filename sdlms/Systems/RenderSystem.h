#pragma once
#include "Systems/System.h"
#include "Components/Sprite.h"
#include "Components/AnimatedSprite.h"
#include "Components/Transform.h"

class RenderSystem : public System
{
public:
	void run(World &world) override;

private:
	void render_sprite(Transform *tr, Sprite *spr, World &world);
	void render_animated_sprite(Transform *tr, AnimatedSprite *aspr, World &world);
};