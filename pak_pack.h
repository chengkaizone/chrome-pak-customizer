#pragma once
#ifndef __PAK_PACKER_UNPACKER_H__
#define __PAK_PACKER_UNPACKER_H__

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/stat.h>
#include <sys/types.h>
#endif
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

#include "pak_defs.h"
#include "pak_header.h"
#include "pak_file.h"
#include "pak_get_file_type.h"
#include "pak_file_io.h"
bool pakUnpack(void* buffer, char *outputPath);
PakFile pakPack(PakFile pakIndex, char* path);

#endif // __PAK_PACKER_UNPACKER_H__