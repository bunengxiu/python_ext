#include <Python.h>

static PyObject * add(PyObject *self, PyObject *args) {
    int arg1;
    int arg2;
    if (!PyArg_ParseTuple(args, "ii", &arg1, &arg2)) {
        return NULL;
    }
    return Py_BuildValue("i", arg1 + arg2);
}

static PyMethodDef demo_funcs[] = {
        { "add", add, METH_VARARGS, "add func with using C!" },
        { NULL, NULL, 0, NULL }
};

static PyModuleDef demo = {
        PyModuleDef_HEAD_INIT,
        "demo",   // name of module
        NULL,        // module documentation
        -1,          // size of per-interpreter state of module
        demo_funcs
};

PyMODINIT_FUNC
PyInit_demo(void) {
    return PyModule_Create(&demo);
}