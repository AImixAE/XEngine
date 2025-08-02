add_includedirs("Include", "$(projectdir)/Core/Include")

target("Sandbox")
    set_kind("binary")
    add_files("Source/*.cpp")
    add_deps("Core")