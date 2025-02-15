﻿#pragma once

// This is a trick to make the byte sizes of these types the same as the game.
#pragma push_macro("_ITERATOR_DEBUG_LEVEL")
#undef _ITERATOR_DEBUG_LEVEL
#define _ITERATOR_DEBUG_LEVEL 0

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <detours.h>

#include <d3d11.h>

#include <cstdint>
#include <cstdio>

#include <filesystem>
#include <list>
#include <map>
#include <string>
#include <vector>

#include <Helpers.h>
#include <toml.hpp>

#undef _ITERATOR_DEBUG_LEVEL
#pragma pop_macro("_ITERATOR_DEBUG_LEVEL")