#pragma once
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include "king_structs.h"
typedef uint8_t   byte;
typedef uint16_t  word;
typedef uint32_t  dword;
typedef uint32_t  uint;
typedef uint8_t   undefined;
typedef uint8_t   undefined1;
typedef uint16_t  undefined2;
typedef uint32_t  undefined4;
typedef uint64_t  undefined8;
// Windows Type Stubs
typedef void* HWND;
typedef void* HINSTANCE;
typedef void* HDC;
typedef void* HMODULE;
typedef void* HANDLE;
typedef void* HRESULT;
typedef uint32_t DWORD;
typedef uint16_t WORD;
typedef const char* LPCSTR;
typedef char* LPSTR;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
#define WINAPI
#define CALLBACK
#include "prototypes.h"
