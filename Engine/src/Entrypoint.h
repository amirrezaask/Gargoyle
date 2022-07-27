#pragma once
#include <stdio.h>;
#include "Application.h"

extern Engine::Application* CreateApplication();


void main(int argc, char** args) 
{
	printf("Starting the engine...\n");
	Engine::CreateApplication();
}
