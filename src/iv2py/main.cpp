#include <pybind11/pybind11.h>

namespace py = pybind11;
void init_fasta_mod(py::module& mod);
void init_sam_mod(py::module& mod);

PYBIND11_MODULE(iv2py, mod) {
    init_fasta_mod(mod);
    init_sam_mod(mod);
}