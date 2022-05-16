#include "pch.h"
#include "CppUnitTest.h"
#include <ctime>
#include <iostream>
#include "Fecha.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test_TP3 {
	TEST_CLASS(TestTP3) {
	public:
		
		TEST_METHOD(TestRandom) {
			srand(time(NULL));

			for (int i = 0; i < 15; i++) {
				bool flagOut = ((rand() % 2) - 1) == 0 ? true : false;
				if (flagOut)
					Logger::WriteMessage("True");
				else
					Logger::WriteMessage("False");
			}
		}
	};
}

namespace Test_Fecha {
	TEST_CLASS(Fecha) {
	public:
		TEST_METHOD(Imprimir) {
			cFecha* Fecha = new cFecha("31/5/1995 12:12");
			Assert::AreEqual("31/5/1995 12:12", Fecha->tostring().c_str());
		}
		TEST_METHOD(Convertir) {
			cFecha* Fecha = new cFecha("31/05/1995 12:12");
			int valor = cFecha::StringToTime(Fecha->tostring());
			Logger::WriteMessage(to_string(valor).c_str());
		}
		TEST_METHOD(Diferencia) {
			cFecha* Fecha = new cFecha("31/05/1995 12:12"),
				  * FechaII = new cFecha("02/02/1995 15:25");

			bool value = cFecha::OrganoTrasplantable(cFecha::StringToTime(Fecha->tostring()), cFecha::StringToTime(FechaII->tostring()));

			Logger::WriteMessage(value ? "T\n" :  "F\n");

			Fecha = new cFecha("31/05/1995 12:12");
			FechaII = new cFecha("31/05/1995 15:25");

			value = cFecha::OrganoTrasplantable(cFecha::StringToTime(Fecha->tostring()), cFecha::StringToTime(FechaII->tostring()));

			Logger::WriteMessage(value ? "T\n" : "F\n");
		}
	};
}

namespace Test_CentroSalud {
	TEST_CLASS(CentroSalud) {
	public:

	};
}

namespace Test_Paciente {

	TEST_CLASS(Paciente) {
	public:

	};
}

namespace Test_INCUCAI {
	TEST_CLASS(INCUCAI) {
	public:

	};
}

namespace Test_Listas {
	TEST_CLASS(Listas) {
	public:

	};

	TEST_CLASS(Lista_CentroSalud) {
	public:

	};

	TEST_CLASS(Listas_Paciente) {
	public:

	};

	TEST_CLASS(Lista_Organo) {
	public:

	};
}