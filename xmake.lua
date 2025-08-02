add_rules("mode.debug", "mode.release")

add_cxxflags("-std=c++17")
if is_mode("debug") then
    add_defines("XE_DEBUG")
elseif is_mode("release") then
    add_defines("XE_RELEASE")
end

set_targetdir("Build")
includes("XEngine")