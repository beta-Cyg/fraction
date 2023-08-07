set_languages("c++20")

target("test.out")
	set_kind("binary")
	add_files("src/*.mpp","src/*.cpp")
