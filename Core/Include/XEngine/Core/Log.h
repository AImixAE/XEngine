#pragma once

#include <memory>

#include "spdlog/spdlog.h"

namespace XEngine {
namespace Core {
extern "C" {
class Log {
   public:
    Log();
    ~Log();

    static void Init();

    inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
        return s_CoreLogger;
    }
    inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
        return s_ClientLogger;
    }

   private:
    static std::shared_ptr<spdlog::logger> s_CoreLogger;
    static std::shared_ptr<spdlog::logger> s_ClientLogger;
};
}
}  // namespace Core
}  // namespace XEngine