typedef struct Nodo Nodo;
typedef struct Lista Lista;
typedef struct Computadora Computadora;

Lista crearLista();
void print_list(Lista, Computadora);
void addPrincipioLista(Lista *, Computadora);
void addFinalLista(Lista *, Computadora);
void borrarPrimero(Lista *);
void borrarUltimo(Lista *);
int busqueda(Lista *, Computadora, int);
void agregar_nesimo(Lista *, Computadora, int);
void eliminar_nesimo(Lista *, int);