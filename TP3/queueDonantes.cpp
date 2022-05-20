#include "queueDonantes.h"

cColaDonantes::cColaDonantes() : cListaT<cDonante>() { }

cColaDonantes::cColaDonantes(u_int tam, bool flag) : cListaT<cDonante>(tam, flag) { }
