#pragma once
#ifdef LEAVERLIBRARY_EXPORTS
#define LEAVERLIBRARY __declspec(dllexport)
#else
#define LEAVERLIBRARY __declspec(dllimport)
#endif


class Leaver {
public:
	std::string LEAVERLIBRARY leave(std::string name);
};