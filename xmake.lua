set_toolchains("gcc-13")
set_languages("c++23")
add_rules("mode.release","mode.debug")

target("test")
	set_kind("binary")
	add_files("src/*.mpp","src/test.cpp")

