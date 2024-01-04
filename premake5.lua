workspace "pge_testing"  
	configurations { "Debug", "Release" } 

project "pge_testing"  
	kind "ConsoleApp"   
	language "C++"   
	targetdir "target/%{cfg.buildcfg}" 
	objdir "target/%{cfg.buildcfg}/obj"

	files {
		"**.hpp",
		"**.cpp",
	} 

	includedirs {
		"vendor/olcPixelGameEngine/include",
	}

	filter "configurations:Debug"
		defines { "DEBUG" }  
		symbols "On" 

	filter "configurations:Release"  
		defines { "NDEBUG" }    
		optimize "On" 