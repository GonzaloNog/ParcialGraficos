#include"ejer1.h"

namespace parcial {
	void Par::mostrarCreditos() {
		printf("Zeiss Gonzalo Visual 2017");
	}
	float Par::diferencia(float a, float b) {
		a = a - b;
		if (a < 0) {
			a = a*(-1);
			return a;
		}
		else
		{
			return a;
		}

	}
}


