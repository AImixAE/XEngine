add_includedirs("Include")

target("Core")
    set_kind("shared")
    add_files("Source/*.cpp")