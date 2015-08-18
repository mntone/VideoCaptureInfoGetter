#pragma once

#include "targetver.h"

#include <cassert>

#include <vector>
#include <memory>
#include <algorithm>

#include <winapifamily.h>
#define WIN32_LEAN_AND_MEAN
#define NOMETAFILE
#define NOMINMAX
#define NOOPENFILE
#define NOSERVICE
#define NOSOUND
#define NOCOMM
#define NOHELP
#define NOPROFILER
#define NODEFERWINDOWPOS
#define NOMCX
#include <windows.h>
#include <wrl\client.h>
#include <dshow.h>