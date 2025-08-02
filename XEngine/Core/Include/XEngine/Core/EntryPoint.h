#pragma once

#include "XEngine/Core/Application.h"
#include "XEngine/Core/Log.h"

using namespace XEngine::Core::Logger;

extern XEngine::Core::Application* XEngine::Core::CreateApplication();

int main(int argc, char** argv) {
    XEngine::Core::Log::Init();
    XE_CORE_WARN("Initialized Logger Module!");
    XE_INFO("Initialized Logger Module!");

    auto app = XEngine::Core::CreateApplication();

    app->Run();

    delete app;

    return 0;
}