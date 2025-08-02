#pragma once

#include "XEngine/Core/Application.h"
#include "XEngine/Core/Log.h"

extern XEngine::Core::Application* XEngine::Core::CreateApplication();

int main(int argc, char** argv) {
    XEngine::Core::Log::Init();

    auto app = XEngine::Core::CreateApplication();

    app->Run();

    delete app;

    return 0;
}