#include "XEngine/Core/Application.h"
#include "XEngine/Core/EntryPoint.h"

class Sandbox : public XEngine::Core::Application {
   public:
    Sandbox() {}
    ~Sandbox() {}
};

XEngine::Core::Application* XEngine::Core::CreateApplication() {
    return new Sandbox();
}