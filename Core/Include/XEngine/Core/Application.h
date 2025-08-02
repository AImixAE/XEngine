#pragma once

namespace XEngine {
namespace Core {
extern "C" {
class Application {
   public:
    Application();
    virtual ~Application();

    void Run();
};

Application* CreateApplication();
}
}  // namespace Core
}  // namespace XEngine