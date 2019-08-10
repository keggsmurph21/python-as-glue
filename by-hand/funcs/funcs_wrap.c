#include <Python.h>
#include "funcs.h"

PyObject *wrap_fact(PyObject* self, PyObject* args) {
    int n, result;
    if (! PyArg_ParseTuple(args, "i", &n))
        return NULL;
    result = fact(n);
    return Py_BuildValue("i", result);
}

PyObject *wrap_mod(PyObject* self, PyObject* args) {
    int x, y, result;
    if (! PyArg_ParseTuple(args, "ii", &x, &y))
        return NULL;
    result = mod(x, y);
    return Py_BuildValue("i", result);
}

PyObject *wrap_diff(PyObject* self, PyObject* args) {
    int x, y, result;
    if (! PyArg_ParseTuple(args, "ii", &x, &y))
        return NULL;
    result = diff(x, y);
    return Py_BuildValue("i", result);
}

static PyMethodDef methods[] = {
    { "fact", wrap_fact, 1 },
    { "mod", wrap_mod, 2 },
    { "diff", wrap_diff, 2 },
};

void initfuncs() {
    PyObject *m = Py_InitModule("funcs", methods);
}
