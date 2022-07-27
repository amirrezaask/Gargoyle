#include "Engine.h";

Engine::Application* Engine::CreateApplication() {
	auto engine = new Engine::Application();
	return engine;
}