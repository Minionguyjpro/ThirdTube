#pragma once

#include <3ds.h>
#include <algorithm>
#include <cstring>
#include <malloc.h>
#include <string>
#include <unistd.h>
#include "citro2d.h"

#include "definitions.hpp"
#include "system/draw/draw.hpp"
#include "system/draw/external_font.hpp"
#include "system/util/change_setting.hpp"
#include "system/util/error.hpp"
#include "system/util/explorer.hpp"
#include "system/util/file.hpp"
#include "system/util/hid.hpp"
#include "system/util/httpc.hpp"
#include "system/util/log.hpp"
#include "system/util/camera.hpp"
#include "system/util/converter.hpp"
#include "system/util/image.hpp"
#include "system/util/network_decoder.hpp"
#include "system/util/network_io.hpp"
#include "system/util/thumbnail_loader.hpp"
#include "system/util/webpage_loader.hpp"
#include "system/util/encoder.hpp"
#include "system/util/mic.hpp"
#include "system/util/muxer.hpp"
#include "system/util/speaker.hpp"
#include "system/util/swkbd.hpp"
#include "system/util/util.hpp"
#include "variables.hpp"
#include "scene_switcher.hpp"
#include "types.hpp"
#include "system/cpu_limit.hpp"
#include "youtube_parser/parser.hpp"
