#pragma once

#include <memory>
#include "spdlog/spdlog.h"

namespace XEngine {
namespace Core {
extern "C" {
namespace Logger {
#define XE_CORE_ERROR(...) \
    XEngine::Core::Log::GetCoreLogger()->error(__VA_ARGS__)
#define XE_CORE_WARN(...) XEngine::Core::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define XE_CORE_INFO(...) XEngine::Core::Log::GetCoreLogger()->info(__VA_ARGS__)
#define XE_CORE_TRACE(...) \
    XEngine::Core::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define XE_CORE_FATAL(...) \
    XEngine::Core::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define XE_ERROR(...) XEngine::Core::Log::GetClientLogger()->error(__VA_ARGS__)
#define XE_WARN(...) XEngine::Core::Log::GetClientLogger()->warn(__VA_ARGS__)
#define XE_INFO(...) XEngine::Core::Log::GetClientLogger()->info(__VA_ARGS__)
#define XE_TRACE(...) XEngine::Core::Log::GetClientLogger()->trace(__VA_ARGS__)
#define XE_FATAL(...) XEngine::Core::Log::GetClientLogger()->fatal(__VA_ARGS__)
}  // namespace Logger

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