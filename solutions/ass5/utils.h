#define TS ((double) clock())/CLOCKS_PER_SEC
#define PRECISION ".6f"

void print_double_matrix(double *, int);
void print_double_vector(double *, int);

double *gen_rand_tril(int);
double *gen_rand_vector(int);

// tries to write to a .m file the square matrix given
int matrix_to_matlab(double *, int, char *);
void print_vector_to_matlab(FILE *, double *, int);

double norm(double *, int);

double error(double *, double *, double *, int);
