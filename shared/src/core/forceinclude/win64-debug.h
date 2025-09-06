/*===============================================
* core/forceinclude/win64-debug.h
=================================================
* Forceinclude configuration for Windows
* 64-bit debug builds.
* 
* Do not modify this file directly, if you
* have to, submit a PR.
* 
* Recommended to edit the forceinclude file
* on the project you're working on, e.g.,
* t1-config.h for the T1 project, instead
* of these files directly.
* 
* - Grant Abernathy
=================================================*/
#ifndef _CORE_FORCEINCLUDE_H_
#define _CORE_FORCEINCLUDE_H_

// Build definitions
#define __DEBUG					1	// Debug build
#define __PROFILE				0	// Profile build
#define __DEV 					1	// Dev build
#define __ASSERTIONS			1	// Enable assertions
#define __EXCEPTIONS			1	// Enable exceptions

#define __EDITOR				0	// Editor build
#define __TOOL					0	// Tool enabled build
#define __TOOL_CLI				0	// Tool command-line only

#define __RELEASE				0	// Release build
#define __FINAL			 		0	// Final build
#define __OPTIMIZED				0	// Optimized build

#define BUILD_DEBUG				(__DEBUG)		// Debug build
#define BUILD_PROFILE			(__PROFILE)		// Profile build
#define BUILD_DEV				(__DEV)			// Dev build
#define BUILD_RELEASE			(__RELEASE)		// Release build
#define BUILD_FINAL				(__FINAL)		// Final build
#define BUILD_OPTIMIZED			(__OPTIMIZED)	// Optimized build
#define BUILD_ASSERTIONS		(__ASSERTIONS)	// Enable assertions
#define BUILD_EXCEPTIONS		(__EXCEPTIONS)	// Enable exceptions

#define WITH_EDITOR				(__EDITOR)		// Has editor
#define WITH_TOOLS				(__TOOL)		// Has tools
#define BUILD_EDITOR			(__EDITOR)		// Editor build
#define BUILD_TOOL				(__TOOL)		// Tool enabled build
#define BUILD_TOOL_CLI			(__TOOL_CLI)	// Tool command-line only

// Modules
#define MODULE_CORE				1	// proj: corelib
#define MODULE_ASSET			1	// proj: assetlib
#define MODULE_AUDIO			1	// proj: audiolib
#define MODULE_DEBUG			1	// proj: debuglib
#define MODULE_INPUT			1	// proj: inputlib
#define MODULE_FWAPP			1	// proj: fwapp
#define MODULE_FWGAME			1	// proj: fwgame
#define MODULE_RENDERER			1	// proj: renderlib
#define MODULE_SHADER			1	// proj: shaderlib
#define MODULE_PHYSICS			1	// proj: physicslib
#define MODULE_PARTICLES		1	// proj: particlelib
#define MODULE_GEOMETRY			1	// proj: geolib
#define MODULE_FILE				1	// proj: file
#define MODULE_NETWORK			1	// proj: netlib
#define MODULE_IMGUI			1	// proj: imgui
#define MODULE_GUI2				1	// proj: gui2

// CPU
#define CPU_X86_64				1	// Intel/AMD 32-bit and 64-bit
#define CPU_X86 				0	// Intel/AMD 32-bit only
#define CPU_X64					1	// Intel/AMD 64-bit only
#define CPU_PPC32				0	// PowerPC 32-bit
#define CPU_PPC64				0	// PowerPC 64-bit
#define CPU_ARM32				0	// ARM 32-bit
#define CPU_ARM64				0	// ARM 64-bit

#define CPU_32BIT				(CPU_X86 || CPU_PPC32 || CPU_ARM32)
#define CPU_64BIT				(CPU_X64 || CPU_PPC64 || CPU_ARM64)

// Platform
#define __WIN64				1	// Windows 64-bit
#define __WIN32				0	// Windows 32-bit
#define __LINUX				0	// Linux 32-bit and 64-bit
#define __MACOS				0	// macOS 64-bit only

#define PLATFORM_WIN64			1	// Windows 64-bit
#define PLATFORM_WIN32			0	// Windows 32-bit
#define PLATFORM_LINUX 			0	// Linux 32-bit and 64-bit
#define PLATFORM_MACOS 			0	// macOS 64-bit only

#define __XENON				0	// Xbox 360
#define __DURANGO			0	// Xbox One
#define __SCARLETT			0	// Xbox Series X/S

#define PLATFORM_XENON			0	// Xbox 360
#define PLATFORM_DURANGO		0	// Xbox One
#define PLATFORM_SCARLETT		0	// Xbox Series X/S

#define PLATFORM_PS3			0	// PlayStation 3
#define PLATFORM_ORBIS			0	// PlayStation 4
#define PLATFORM_PROSPERO		0	// PlayStation 5

#define __PS3				0	// PlayStation 3
#define __ORBIS				0	// PlayStation 4
#define __PROSPERO			0	// PlayStation 5

#define PLATFORM_IOS 			0	// iOS (iPhone/iPad)
#define PLATFORM_ANDROID 		0	// Android

#define __IOS				0	// iOS (iPhone/iPad)
#define __ANDROID			0	// Android

#define __XDK				0	// XENON
#define __GDK				0	// XBOX-ONE --> SERIES|X|S
#define __SCE				0	// Sony

#define GDK					(__GDK)
#define XDK					(__XDK)
#define SCE					(__SCE)

// Renderers
#define __D3D9					0	// Direct3D 9
#define __D3D9_XENON			(__D3D9 && __XENON)
#define __D3D10					0	// Direct3D 10
#define __D3D11					0	// Direct3D 11
#define __D3D11_DURANGO			(__D3D11 && __DURANGO)
#define __D3D12					1	// Direct3D 12
#define __D3D12_DURANGO			(__D3D12 && __DURANGO)
#define __D3D12_SCARLETT		(__D3D12 && __SCARLETT)
#define __VULKAN				0	// Vulkan
#define __OGL 					0	// OpenGL
#define __OGLES					0	// OpenGL ES
#define __METAL					0	// Metal
#define __METAL_IOS				(__METAL && __IOS)
#define __GCM					0	// PS3 GCM
#define __GNM					0	// PS4 GNM
#define __GNM_ORBIS				(__GNM && __ORBIS)
#define __GNM_PROSPERO			(__GNM && __PROSPERO)


// Compilers
#define COMPILER_MSVC			1	// Microsoft Visual C++
#define COMPILER_CLANG			0	// Clang
#define COMPILER_GCC			0	// GNU GCC
#define COMPILER_APPLE_CLANG	0	// Apple Clang

#endif /* _CORE_FORCEINCLUDE_H_ */