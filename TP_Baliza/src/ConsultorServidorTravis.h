#include <Arduino_JSON.h>

class ConsultorServidorTravis
{
    public:
    ConsultorServidorTravis();
    JSONVar obtenerBuild();
    String obtenerEstado();

    private:
        String _url;

};