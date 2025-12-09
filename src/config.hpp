#pragma once

#include <string>
#include <unordered_map>

struct NumaConfig {};

std::string get_curr_hostname();

static std::string default_repository_path = "";
static std::unordered_map<std::string, std::string> HOST_TO_PERF_CONFIG_FILE{};
