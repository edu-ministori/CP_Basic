#include "Ex08-1_MemberClass.h"

void MemberPrint()
{
	std::string ID[4] = {"A01", "A02", "B01", "B02"};

	std::string Name[4] = {
		"태권브이",
		"마징가",
		"메칸더브이",
		"그래다이저"
	};

	int Point[4] = {10,20,30,40};

	Member People[4];

	for (int i = 0; i < 4; i++) {
		People[i].SetId(ID[i]);
		People[i].SetName(Name[i]);
		People[i].SetPoint(Point[i]);
	}

	for (int i = 0; i < 4; i++) {
		People[i].PrintMember();
	}
}