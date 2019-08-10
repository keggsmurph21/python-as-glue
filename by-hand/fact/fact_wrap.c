#include <Python.h>
#include "fact.h"

PyObject *wrap_fact(PyObject *self, PyObject *args) {
    int n, result;
    if (!PyArg_ParseTuple(args, "i:fact", &n))
        return NULL;
    result = fact(n);
    return Py_BuildValue("i", result);
}

static PyMethodDef methods[] = {
    { "fact", wrap_fact, 1 },
};

void initfact() {
    PyObject *m = Py_InitModule("fact", methods);
}
