/* 0.9.7.2 on Sat Sep  5 16:08:41 2009 */

#define PY_SSIZE_T_CLEAN
#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#if PY_VERSION_HEX < 0x02050000
  typedef int Py_ssize_t;
  #define PY_SSIZE_T_MAX INT_MAX
  #define PY_SSIZE_T_MIN INT_MIN
  #define PyInt_FromSsize_t(z) PyInt_FromLong(z)
  #define PyInt_AsSsize_t(o)	PyInt_AsLong(o)
#endif
#ifndef WIN32
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
#include <math.h>
#include "include_math.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static PyObject *__Pyx_GetItemInt(PyObject *o, Py_ssize_t i); /*proto*/

static PyObject *__Pyx_UnpackItem(PyObject *); /*proto*/
static int __Pyx_EndUnpack(PyObject *); /*proto*/

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/

static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb); /*proto*/

static void __Pyx_WriteUnraisable(char *name); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static int __Pyx_SetVtable(PyObject *dict, void *vtable); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from rabbyt.primitives */

struct __pyx_t_6rabbyt_10primitives_Point2d {
  float x;
  float y;
};

struct __pyx_t_6rabbyt_10primitives_float2 {
  float a;
  float b;
};

struct __pyx_obj_6rabbyt_10primitives_Quad {
  PyObject_HEAD
  struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *__pyx_vtab;
  struct __pyx_t_6rabbyt_10primitives_Point2d v[4];
  float bounding_radius;
};


struct __pyx_vtabstruct_6rabbyt_10primitives_Quad {
  void (*_shift_x)(struct __pyx_obj_6rabbyt_10primitives_Quad *,float);
  void (*_shift_y)(struct __pyx_obj_6rabbyt_10primitives_Quad *,float);
  struct __pyx_t_6rabbyt_10primitives_float2 (*_bounds_x)(struct __pyx_obj_6rabbyt_10primitives_Quad *);
  struct __pyx_t_6rabbyt_10primitives_float2 (*_bounds_y)(struct __pyx_obj_6rabbyt_10primitives_Quad *);
  void (*_update_bounding_radius)(struct __pyx_obj_6rabbyt_10primitives_Quad *);
};
static struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *__pyx_vtabptr_6rabbyt_10primitives_Quad;

static PyTypeObject *__pyx_ptype_6rabbyt_10primitives_Quad = 0;


/* Implementation of rabbyt.primitives */

static char __pyx_k1[] = "\n        The width between the left-most and right-most vertexes.\n\n        Assigning to this property will scale all vertexes from the center.  So\n        the ``x`` property will remain the same, but ``left`` and ``right``\n        properties will change.\n        ";
static char __pyx_k2[] = "\n        The height between the top-most and bottom-most vertexes.\n\n        Assigning to this property will scale all vertexes from the center.  So\n        the ``y`` property will remain the same, but ``top`` and ``bottom``\n        properties will change.\n        ";
static char __pyx_k3[] = "\n        Halfway between ``left`` and ``right``.\n        ";
static char __pyx_k4[] = "\n        Halfway between ``top`` and ``bottom``.\n        ";
static char __pyx_k5[] = "\n        The coordinates of the center of the Quad.\n        ";
static char __pyx_k6[] = " The x coordinate of the left-most point. ";
static char __pyx_k7[] = " The x coordinate of the right-most point. ";
static char __pyx_k8[] = " The y coordinate of the bottom-most point. ";
static char __pyx_k9[] = " The y coordinate of the top-most point. ";
static char __pyx_k10[] = "\nCopyright (C) 2007  Matthew Marshall\n\nPermission is hereby granted, free of charge, to any person obtaining a copy\nof this software and associated documentation files (the \"Software\"), to deal\nin the Software without restriction, including without limitation the rights\nto use, copy, modify, merge, publish, distribute, sublicense, and/or sell\ncopies of the Software, and to permit persons to whom the Software is\nfurnished to do so, subject to the following conditions:\n\nThe above copyright notice and this permission notice shall be included in\nall copies or substantial portions of the Software.\n\nTHE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\nIMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\nFITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\nAUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\nLIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\nOUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN\nTHE SOFTWARE.\n";
static char __pyx_k11[] = "Matthew Marshall <matthew@matthewmarshall.org>";

static PyObject *__pyx_n___credits__;
static PyObject *__pyx_n___author__;
static PyObject *__pyx_n_Quad;
static PyObject *__pyx_n___docs_all__;

static PyObject *__pyx_k10p;
static PyObject *__pyx_k11p;

static PyObject *__pyx_n___setitem__;

static PyObject *__pyx_k13p;

static char __pyx_k13[] = "Don't know what to do with %r";

static int __pyx_f_6rabbyt_10primitives_4Quad___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_definition = 0;
  PyObject *__pyx_v_l;
  PyObject *__pyx_v_r;
  PyObject *__pyx_v_b;
  PyObject *__pyx_v_t;
  PyObject *__pyx_v_d;
  int __pyx_v_i;
  PyObject *__pyx_v_v;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  int __pyx_3;
  PyObject *__pyx_4 = 0;
  Py_ssize_t __pyx_5;
  PyObject *__pyx_6 = 0;
  PyObject *__pyx_7 = 0;
  PyObject *__pyx_8 = 0;
  PyObject *__pyx_9 = 0;
  PyObject *__pyx_10 = 0;
  PyObject *__pyx_11 = 0;
  static char *__pyx_argnames[] = {"definition",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_definition)) return -1;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_definition);
  __pyx_v_l = Py_None; Py_INCREF(Py_None);
  __pyx_v_r = Py_None; Py_INCREF(Py_None);
  __pyx_v_b = Py_None; Py_INCREF(Py_None);
  __pyx_v_t = Py_None; Py_INCREF(Py_None);
  __pyx_v_d = Py_None; Py_INCREF(Py_None);
  __pyx_v_v = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":68 */
  /*try:*/ {
    __pyx_1 = __Pyx_GetItemInt(__pyx_v_definition, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 69; goto __pyx_L2;}
    __pyx_2 = __Pyx_GetItemInt(__pyx_1, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 69; goto __pyx_L2;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    Py_DECREF(__pyx_2); __pyx_2 = 0;
  }
  goto __pyx_L3;
  __pyx_L2:;
  Py_XDECREF(__pyx_1); __pyx_1 = 0;
  Py_XDECREF(__pyx_2); __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":70 */
  __pyx_3 = PyErr_ExceptionMatches(PyExc_TypeError);
  if (__pyx_3) {
    __Pyx_AddTraceback("rabbyt.primitives.__init__");
    if (__Pyx_GetException(&__pyx_1, &__pyx_2, &__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; goto __pyx_L1;}
    __pyx_5 = PyObject_Length(__pyx_v_definition); if (__pyx_5 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 71; goto __pyx_L1;}
    __pyx_3 = (__pyx_5 == 2);
    if (__pyx_3) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":72 */
      __pyx_6 = __Pyx_GetItemInt(__pyx_v_definition, 0); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; goto __pyx_L1;}
      __pyx_7 = PyNumber_Negative(__pyx_6); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; goto __pyx_L1;}
      Py_DECREF(__pyx_6); __pyx_6 = 0;
      __pyx_6 = PyInt_FromLong(2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; goto __pyx_L1;}
      __pyx_8 = PyNumber_Divide(__pyx_7, __pyx_6); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; goto __pyx_L1;}
      Py_DECREF(__pyx_7); __pyx_7 = 0;
      Py_DECREF(__pyx_6); __pyx_6 = 0;
      Py_DECREF(__pyx_v_l);
      __pyx_v_l = __pyx_8;
      __pyx_8 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":73 */
      __pyx_7 = __Pyx_GetItemInt(__pyx_v_definition, 0); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 73; goto __pyx_L1;}
      __pyx_6 = PyInt_FromLong(2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 73; goto __pyx_L1;}
      __pyx_8 = PyNumber_Divide(__pyx_7, __pyx_6); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 73; goto __pyx_L1;}
      Py_DECREF(__pyx_7); __pyx_7 = 0;
      Py_DECREF(__pyx_6); __pyx_6 = 0;
      Py_DECREF(__pyx_v_r);
      __pyx_v_r = __pyx_8;
      __pyx_8 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":74 */
      __pyx_7 = __Pyx_GetItemInt(__pyx_v_definition, 1); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 74; goto __pyx_L1;}
      __pyx_6 = PyNumber_Negative(__pyx_7); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 74; goto __pyx_L1;}
      Py_DECREF(__pyx_7); __pyx_7 = 0;
      __pyx_8 = PyInt_FromLong(2); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 74; goto __pyx_L1;}
      __pyx_7 = PyNumber_Divide(__pyx_6, __pyx_8); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 74; goto __pyx_L1;}
      Py_DECREF(__pyx_6); __pyx_6 = 0;
      Py_DECREF(__pyx_8); __pyx_8 = 0;
      Py_DECREF(__pyx_v_b);
      __pyx_v_b = __pyx_7;
      __pyx_7 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":75 */
      __pyx_6 = __Pyx_GetItemInt(__pyx_v_definition, 1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 75; goto __pyx_L1;}
      __pyx_8 = PyInt_FromLong(2); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 75; goto __pyx_L1;}
      __pyx_7 = PyNumber_Divide(__pyx_6, __pyx_8); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 75; goto __pyx_L1;}
      Py_DECREF(__pyx_6); __pyx_6 = 0;
      Py_DECREF(__pyx_8); __pyx_8 = 0;
      Py_DECREF(__pyx_v_t);
      __pyx_v_t = __pyx_7;
      __pyx_7 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":76 */
      __pyx_6 = PyTuple_New(2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; goto __pyx_L1;}
      Py_INCREF(__pyx_v_l);
      PyTuple_SET_ITEM(__pyx_6, 0, __pyx_v_l);
      Py_INCREF(__pyx_v_t);
      PyTuple_SET_ITEM(__pyx_6, 1, __pyx_v_t);
      __pyx_8 = PyTuple_New(2); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; goto __pyx_L1;}
      Py_INCREF(__pyx_v_r);
      PyTuple_SET_ITEM(__pyx_8, 0, __pyx_v_r);
      Py_INCREF(__pyx_v_t);
      PyTuple_SET_ITEM(__pyx_8, 1, __pyx_v_t);
      __pyx_7 = PyTuple_New(2); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; goto __pyx_L1;}
      Py_INCREF(__pyx_v_r);
      PyTuple_SET_ITEM(__pyx_7, 0, __pyx_v_r);
      Py_INCREF(__pyx_v_b);
      PyTuple_SET_ITEM(__pyx_7, 1, __pyx_v_b);
      __pyx_9 = PyTuple_New(2); if (!__pyx_9) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; goto __pyx_L1;}
      Py_INCREF(__pyx_v_l);
      PyTuple_SET_ITEM(__pyx_9, 0, __pyx_v_l);
      Py_INCREF(__pyx_v_b);
      PyTuple_SET_ITEM(__pyx_9, 1, __pyx_v_b);
      __pyx_10 = PyList_New(4); if (!__pyx_10) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; goto __pyx_L1;}
      PyList_SET_ITEM(__pyx_10, 0, __pyx_6);
      PyList_SET_ITEM(__pyx_10, 1, __pyx_8);
      PyList_SET_ITEM(__pyx_10, 2, __pyx_7);
      PyList_SET_ITEM(__pyx_10, 3, __pyx_9);
      __pyx_6 = 0;
      __pyx_8 = 0;
      __pyx_7 = 0;
      __pyx_9 = 0;
      Py_DECREF(__pyx_v_definition);
      __pyx_v_definition = __pyx_10;
      __pyx_10 = 0;
      goto __pyx_L4;
    }
    __pyx_5 = PyObject_Length(__pyx_v_definition); if (__pyx_5 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 77; goto __pyx_L1;}
    __pyx_3 = (__pyx_5 == 4);
    if (__pyx_3) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":78 */
      __pyx_6 = PyObject_GetIter(__pyx_v_definition); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; goto __pyx_L1;}
      __pyx_8 = __Pyx_UnpackItem(__pyx_6); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; goto __pyx_L1;}
      Py_DECREF(__pyx_v_l);
      __pyx_v_l = __pyx_8;
      __pyx_8 = 0;
      __pyx_7 = __Pyx_UnpackItem(__pyx_6); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; goto __pyx_L1;}
      Py_DECREF(__pyx_v_t);
      __pyx_v_t = __pyx_7;
      __pyx_7 = 0;
      __pyx_9 = __Pyx_UnpackItem(__pyx_6); if (!__pyx_9) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; goto __pyx_L1;}
      Py_DECREF(__pyx_v_r);
      __pyx_v_r = __pyx_9;
      __pyx_9 = 0;
      __pyx_10 = __Pyx_UnpackItem(__pyx_6); if (!__pyx_10) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; goto __pyx_L1;}
      Py_DECREF(__pyx_v_b);
      __pyx_v_b = __pyx_10;
      __pyx_10 = 0;
      if (__Pyx_EndUnpack(__pyx_6) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; goto __pyx_L1;}
      Py_DECREF(__pyx_6); __pyx_6 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":79 */
      __pyx_8 = PyTuple_New(2); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 79; goto __pyx_L1;}
      Py_INCREF(__pyx_v_l);
      PyTuple_SET_ITEM(__pyx_8, 0, __pyx_v_l);
      Py_INCREF(__pyx_v_t);
      PyTuple_SET_ITEM(__pyx_8, 1, __pyx_v_t);
      __pyx_7 = PyTuple_New(2); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 79; goto __pyx_L1;}
      Py_INCREF(__pyx_v_r);
      PyTuple_SET_ITEM(__pyx_7, 0, __pyx_v_r);
      Py_INCREF(__pyx_v_t);
      PyTuple_SET_ITEM(__pyx_7, 1, __pyx_v_t);
      __pyx_9 = PyTuple_New(2); if (!__pyx_9) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 79; goto __pyx_L1;}
      Py_INCREF(__pyx_v_r);
      PyTuple_SET_ITEM(__pyx_9, 0, __pyx_v_r);
      Py_INCREF(__pyx_v_b);
      PyTuple_SET_ITEM(__pyx_9, 1, __pyx_v_b);
      __pyx_10 = PyTuple_New(2); if (!__pyx_10) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 79; goto __pyx_L1;}
      Py_INCREF(__pyx_v_l);
      PyTuple_SET_ITEM(__pyx_10, 0, __pyx_v_l);
      Py_INCREF(__pyx_v_b);
      PyTuple_SET_ITEM(__pyx_10, 1, __pyx_v_b);
      __pyx_6 = PyList_New(4); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 79; goto __pyx_L1;}
      PyList_SET_ITEM(__pyx_6, 0, __pyx_8);
      PyList_SET_ITEM(__pyx_6, 1, __pyx_7);
      PyList_SET_ITEM(__pyx_6, 2, __pyx_9);
      PyList_SET_ITEM(__pyx_6, 3, __pyx_10);
      __pyx_8 = 0;
      __pyx_7 = 0;
      __pyx_9 = 0;
      __pyx_10 = 0;
      Py_DECREF(__pyx_v_definition);
      __pyx_v_definition = __pyx_6;
      __pyx_6 = 0;
      goto __pyx_L4;
    }
    __pyx_5 = PyObject_Length(__pyx_v_definition); if (__pyx_5 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 80; goto __pyx_L1;}
    __pyx_3 = (__pyx_5 == 12);
    if (__pyx_3) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":82 */
      Py_INCREF(__pyx_v_definition);
      Py_DECREF(__pyx_v_d);
      __pyx_v_d = __pyx_v_definition;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":83 */
      __pyx_8 = __Pyx_GetItemInt(__pyx_v_d, 9); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 84; goto __pyx_L1;}
      __pyx_7 = __Pyx_GetItemInt(__pyx_v_d, 10); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 84; goto __pyx_L1;}
      __pyx_9 = PyTuple_New(2); if (!__pyx_9) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 84; goto __pyx_L1;}
      PyTuple_SET_ITEM(__pyx_9, 0, __pyx_8);
      PyTuple_SET_ITEM(__pyx_9, 1, __pyx_7);
      __pyx_8 = 0;
      __pyx_7 = 0;
      __pyx_10 = __Pyx_GetItemInt(__pyx_v_d, 6); if (!__pyx_10) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 85; goto __pyx_L1;}
      __pyx_6 = __Pyx_GetItemInt(__pyx_v_d, 7); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 85; goto __pyx_L1;}
      __pyx_8 = PyTuple_New(2); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 85; goto __pyx_L1;}
      PyTuple_SET_ITEM(__pyx_8, 0, __pyx_10);
      PyTuple_SET_ITEM(__pyx_8, 1, __pyx_6);
      __pyx_10 = 0;
      __pyx_6 = 0;
      __pyx_7 = __Pyx_GetItemInt(__pyx_v_d, 3); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 86; goto __pyx_L1;}
      __pyx_10 = __Pyx_GetItemInt(__pyx_v_d, 4); if (!__pyx_10) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 86; goto __pyx_L1;}
      __pyx_6 = PyTuple_New(2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 86; goto __pyx_L1;}
      PyTuple_SET_ITEM(__pyx_6, 0, __pyx_7);
      PyTuple_SET_ITEM(__pyx_6, 1, __pyx_10);
      __pyx_7 = 0;
      __pyx_10 = 0;
      __pyx_7 = __Pyx_GetItemInt(__pyx_v_d, 0); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 87; goto __pyx_L1;}
      __pyx_10 = __Pyx_GetItemInt(__pyx_v_d, 1); if (!__pyx_10) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 87; goto __pyx_L1;}
      __pyx_11 = PyTuple_New(2); if (!__pyx_11) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 87; goto __pyx_L1;}
      PyTuple_SET_ITEM(__pyx_11, 0, __pyx_7);
      PyTuple_SET_ITEM(__pyx_11, 1, __pyx_10);
      __pyx_7 = 0;
      __pyx_10 = 0;
      __pyx_7 = PyList_New(4); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; goto __pyx_L1;}
      PyList_SET_ITEM(__pyx_7, 0, __pyx_9);
      PyList_SET_ITEM(__pyx_7, 1, __pyx_8);
      PyList_SET_ITEM(__pyx_7, 2, __pyx_6);
      PyList_SET_ITEM(__pyx_7, 3, __pyx_11);
      __pyx_9 = 0;
      __pyx_8 = 0;
      __pyx_6 = 0;
      __pyx_11 = 0;
      Py_DECREF(__pyx_v_definition);
      __pyx_v_definition = __pyx_7;
      __pyx_7 = 0;
      goto __pyx_L4;
    }
    /*else*/ {
      __pyx_10 = PyNumber_Remainder(__pyx_k13p, __pyx_v_definition); if (!__pyx_10) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 89; goto __pyx_L1;}
      __pyx_9 = PyTuple_New(1); if (!__pyx_9) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 89; goto __pyx_L1;}
      PyTuple_SET_ITEM(__pyx_9, 0, __pyx_10);
      __pyx_10 = 0;
      __pyx_8 = PyObject_CallObject(PyExc_ValueError, __pyx_9); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 89; goto __pyx_L1;}
      Py_DECREF(__pyx_9); __pyx_9 = 0;
      __Pyx_Raise(__pyx_8, 0, 0);
      Py_DECREF(__pyx_8); __pyx_8 = 0;
      {__pyx_filename = __pyx_f[0]; __pyx_lineno = 89; goto __pyx_L1;}
    }
    __pyx_L4:;
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    goto __pyx_L3;
  }
  goto __pyx_L1;
  __pyx_L3:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":90 */
  #ifndef PYREX_WITHOUT_ASSERTIONS
  __pyx_5 = PyObject_Length(__pyx_v_definition); if (__pyx_5 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  if (!(__pyx_5 == 4)) {
    PyErr_SetNone(PyExc_AssertionError);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  }
  #endif

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":92 */
  __pyx_6 = PyTuple_New(1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
  Py_INCREF(__pyx_v_definition);
  PyTuple_SET_ITEM(__pyx_6, 0, __pyx_v_definition);
  __pyx_11 = PyObject_CallObject(((PyObject *)(&PyEnum_Type)), __pyx_6); if (!__pyx_11) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  __pyx_7 = PyObject_GetIter(__pyx_11); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
  Py_DECREF(__pyx_11); __pyx_11 = 0;
  for (;;) {
    __pyx_10 = PyIter_Next(__pyx_7);
    if (!__pyx_10) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
      break;
    }
    __pyx_9 = PyObject_GetIter(__pyx_10); if (!__pyx_9) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
    Py_DECREF(__pyx_10); __pyx_10 = 0;
    __pyx_8 = __Pyx_UnpackItem(__pyx_9); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
    __pyx_3 = PyInt_AsLong(__pyx_8); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
    Py_DECREF(__pyx_8); __pyx_8 = 0;
    __pyx_v_i = __pyx_3;
    __pyx_1 = __Pyx_UnpackItem(__pyx_9); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
    Py_DECREF(__pyx_v_v);
    __pyx_v_v = __pyx_1;
    __pyx_1 = 0;
    if (__Pyx_EndUnpack(__pyx_9) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
    Py_DECREF(__pyx_9); __pyx_9 = 0;
    __pyx_2 = PyObject_GetAttr(__pyx_v_self, __pyx_n___setitem__); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 93; goto __pyx_L1;}
    __pyx_4 = PyInt_FromLong(__pyx_v_i); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 93; goto __pyx_L1;}
    __pyx_6 = PyTuple_New(2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 93; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_6, 0, __pyx_4);
    Py_INCREF(__pyx_v_v);
    PyTuple_SET_ITEM(__pyx_6, 1, __pyx_v_v);
    __pyx_4 = 0;
    __pyx_11 = PyObject_CallObject(__pyx_2, __pyx_6); if (!__pyx_11) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 93; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_6); __pyx_6 = 0;
    Py_DECREF(__pyx_11); __pyx_11 = 0;
  }
  Py_DECREF(__pyx_7); __pyx_7 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":94 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_update_bounding_radius(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_6);
  Py_XDECREF(__pyx_7);
  Py_XDECREF(__pyx_8);
  Py_XDECREF(__pyx_9);
  Py_XDECREF(__pyx_10);
  Py_XDECREF(__pyx_11);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_l);
  Py_DECREF(__pyx_v_r);
  Py_DECREF(__pyx_v_b);
  Py_DECREF(__pyx_v_t);
  Py_DECREF(__pyx_v_d);
  Py_DECREF(__pyx_v_v);
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_definition);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad___getitem__(PyObject *__pyx_v_self, PyObject *__pyx_arg_i); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad___getitem__(PyObject *__pyx_v_self, PyObject *__pyx_arg_i) {
  int __pyx_v_i;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_v_i = PyInt_AsLong(__pyx_arg_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 96; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":97 */
  __pyx_1 = (__pyx_v_i < 0);
  if (__pyx_1) {
    __pyx_v_i = (4 + __pyx_v_i);
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":99 */
  __pyx_1 = (__pyx_v_i < 0);
  if (!__pyx_1) {
    __pyx_1 = (__pyx_v_i >= 4);
  }
  if (__pyx_1) {
    __pyx_2 = PyInt_FromLong(__pyx_v_i); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_2);
    __pyx_2 = 0;
    __pyx_2 = PyObject_CallObject(PyExc_IndexError, __pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_2, 0, 0);
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":101 */
  __pyx_3 = PyFloat_FromDouble((((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[__pyx_v_i]).x); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  __pyx_2 = PyFloat_FromDouble((((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[__pyx_v_i]).y); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  __pyx_4 = PyTuple_New(2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_4, 0, __pyx_3);
  PyTuple_SET_ITEM(__pyx_4, 1, __pyx_2);
  __pyx_3 = 0;
  __pyx_2 = 0;
  __pyx_r = __pyx_4;
  __pyx_4 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.__getitem__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10primitives_4Quad___setitem__(PyObject *__pyx_v_self, PyObject *__pyx_arg_i, PyObject *__pyx_v_value); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad___setitem__(PyObject *__pyx_v_self, PyObject *__pyx_arg_i, PyObject *__pyx_v_value) {
  int __pyx_v_i;
  int __pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  float __pyx_4;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_value);
  __pyx_v_i = PyInt_AsLong(__pyx_arg_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 102; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":103 */
  __pyx_1 = (__pyx_v_i < 0);
  if (__pyx_1) {
    __pyx_v_i = (4 + __pyx_v_i);
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":105 */
  __pyx_1 = (__pyx_v_i < 0);
  if (!__pyx_1) {
    __pyx_1 = (__pyx_v_i >= 4);
  }
  if (__pyx_1) {
    __pyx_2 = PyInt_FromLong(__pyx_v_i); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 106; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 106; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_2);
    __pyx_2 = 0;
    __pyx_2 = PyObject_CallObject(PyExc_IndexError, __pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 106; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_2, 0, 0);
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 106; goto __pyx_L1;}
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":107 */
  __pyx_3 = __Pyx_GetItemInt(__pyx_v_value, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 107; goto __pyx_L1;}
  __pyx_4 = PyFloat_AsDouble(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 107; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[__pyx_v_i]).x = __pyx_4;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":108 */
  __pyx_2 = __Pyx_GetItemInt(__pyx_v_value, 1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 108; goto __pyx_L1;}
  __pyx_4 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 108; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[__pyx_v_i]).y = __pyx_4;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.__setitem__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_value);
  return __pyx_r;
}

static Py_ssize_t __pyx_f_6rabbyt_10primitives_4Quad___len__(PyObject *__pyx_v_self); /*proto*/
static Py_ssize_t __pyx_f_6rabbyt_10primitives_4Quad___len__(PyObject *__pyx_v_self) {
  Py_ssize_t __pyx_r;
  Py_INCREF(__pyx_v_self);
  __pyx_r = 4;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static void __pyx_f_6rabbyt_10primitives_4Quad__shift_x(struct __pyx_obj_6rabbyt_10primitives_Quad *__pyx_v_self,float __pyx_v_offset) {
  PyObject *__pyx_v_i;
  long __pyx_1;
  PyObject *__pyx_2 = 0;
  Py_ssize_t __pyx_3;
  Py_ssize_t __pyx_4;
  Py_INCREF(__pyx_v_self);
  __pyx_v_i = Py_None; Py_INCREF(Py_None);
  for (__pyx_1 = 0; __pyx_1 < 4; ++__pyx_1) {
    __pyx_2 = PyInt_FromLong(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 114; goto __pyx_L1;}
    Py_DECREF(__pyx_v_i);
    __pyx_v_i = __pyx_2;
    __pyx_2 = 0;
    __pyx_3 = PyInt_AsSsize_t(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 115; goto __pyx_L1;}
    __pyx_4 = PyInt_AsSsize_t(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 115; goto __pyx_L1;}
    (__pyx_v_self->v[__pyx_4]).x = ((__pyx_v_self->v[__pyx_3]).x + __pyx_v_offset);
  }

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_WriteUnraisable("rabbyt.primitives.Quad._shift_x");
  __pyx_L0:;
  Py_DECREF(__pyx_v_i);
  Py_DECREF(__pyx_v_self);
}

static void __pyx_f_6rabbyt_10primitives_4Quad__shift_y(struct __pyx_obj_6rabbyt_10primitives_Quad *__pyx_v_self,float __pyx_v_offset) {
  PyObject *__pyx_v_i;
  long __pyx_1;
  PyObject *__pyx_2 = 0;
  Py_ssize_t __pyx_3;
  Py_ssize_t __pyx_4;
  Py_INCREF(__pyx_v_self);
  __pyx_v_i = Py_None; Py_INCREF(Py_None);
  for (__pyx_1 = 0; __pyx_1 < 4; ++__pyx_1) {
    __pyx_2 = PyInt_FromLong(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 118; goto __pyx_L1;}
    Py_DECREF(__pyx_v_i);
    __pyx_v_i = __pyx_2;
    __pyx_2 = 0;
    __pyx_3 = PyInt_AsSsize_t(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
    __pyx_4 = PyInt_AsSsize_t(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
    (__pyx_v_self->v[__pyx_4]).y = ((__pyx_v_self->v[__pyx_3]).y + __pyx_v_offset);
  }

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_WriteUnraisable("rabbyt.primitives.Quad._shift_y");
  __pyx_L0:;
  Py_DECREF(__pyx_v_i);
  Py_DECREF(__pyx_v_self);
}

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_5width___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_5width___get__(PyObject *__pyx_v_self) {
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_b;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":131 */
  __pyx_v_b = ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":132 */
  __pyx_1 = PyFloat_FromDouble((__pyx_v_b.b - __pyx_v_b.a)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.width.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10primitives_4Quad_5width___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_value); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad_5width___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_value) {
  float __pyx_v_value;
  float __pyx_v_scale;
  float __pyx_v_center;
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_bounds;
  int __pyx_v_i;
  int __pyx_r;
  int __pyx_1;
  float __pyx_2;
  Py_INCREF(__pyx_v_self);
  __pyx_v_value = PyFloat_AsDouble(__pyx_arg_value); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 133; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":137 */
  __pyx_v_bounds = ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":138 */
  __pyx_v_center = ((__pyx_v_bounds.a + __pyx_v_bounds.b) / 2);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":139 */
  __pyx_1 = (__pyx_v_bounds.a == __pyx_v_bounds.b);
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":140 */
    __pyx_2 = (__pyx_v_center - (__pyx_v_value / 2));
    (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[0]).x = __pyx_2;
    (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[3]).x = __pyx_2;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":141 */
    __pyx_2 = (__pyx_v_center + (__pyx_v_value / 2));
    (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[1]).x = __pyx_2;
    (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[2]).x = __pyx_2;
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":143 */
    __pyx_v_scale = (__pyx_v_value / (__pyx_v_bounds.b - __pyx_v_bounds.a));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":144 */
    for (__pyx_v_i = 0; __pyx_v_i < 4; ++__pyx_v_i) {
      (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[__pyx_v_i]).x = ((((((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[__pyx_v_i]).x - __pyx_v_center) * __pyx_v_scale) + __pyx_v_center);
    }
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":146 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_update_bounding_radius(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt.primitives.Quad.width.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_6height___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_6height___get__(PyObject *__pyx_v_self) {
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_b;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":158 */
  __pyx_v_b = ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":159 */
  __pyx_1 = PyFloat_FromDouble((__pyx_v_b.b - __pyx_v_b.a)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 159; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.height.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10primitives_4Quad_6height___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_value); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad_6height___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_value) {
  float __pyx_v_value;
  float __pyx_v_scale;
  float __pyx_v_center;
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_bounds;
  int __pyx_v_i;
  int __pyx_r;
  int __pyx_1;
  float __pyx_2;
  Py_INCREF(__pyx_v_self);
  __pyx_v_value = PyFloat_AsDouble(__pyx_arg_value); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 160; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":164 */
  __pyx_v_bounds = ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":165 */
  __pyx_v_center = ((__pyx_v_bounds.a + __pyx_v_bounds.b) / 2);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":166 */
  __pyx_1 = (__pyx_v_bounds.a == __pyx_v_bounds.b);
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":167 */
    __pyx_2 = (__pyx_v_center + (__pyx_v_value / 2));
    (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[0]).y = __pyx_2;
    (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[1]).y = __pyx_2;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":168 */
    __pyx_2 = (__pyx_v_center - (__pyx_v_value / 2));
    (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[2]).y = __pyx_2;
    (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[3]).y = __pyx_2;
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":170 */
    __pyx_v_scale = (__pyx_v_value / (__pyx_v_bounds.b - __pyx_v_bounds.a));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":171 */
    for (__pyx_v_i = 0; __pyx_v_i < 4; ++__pyx_v_i) {
      (((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[__pyx_v_i]).y = ((((((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->v[__pyx_v_i]).y - __pyx_v_center) * __pyx_v_scale) + __pyx_v_center);
    }
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":173 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_update_bounding_radius(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt.primitives.Quad.height.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_1x___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_1x___get__(PyObject *__pyx_v_self) {
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_b;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":181 */
  __pyx_v_b = ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":182 */
  __pyx_1 = PyFloat_FromDouble(((__pyx_v_b.a + __pyx_v_b.b) / 2)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.x.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10primitives_4Quad_1x___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_value); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad_1x___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_value) {
  float __pyx_v_value;
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_current;
  int __pyx_r;
  Py_INCREF(__pyx_v_self);
  __pyx_v_value = PyFloat_AsDouble(__pyx_arg_value); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 183; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":185 */
  __pyx_v_current = ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":186 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_shift_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self),(__pyx_v_value - ((__pyx_v_current.a + __pyx_v_current.b) / 2)));

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt.primitives.Quad.x.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_1y___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_1y___get__(PyObject *__pyx_v_self) {
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_b;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":194 */
  __pyx_v_b = ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":195 */
  __pyx_1 = PyFloat_FromDouble(((__pyx_v_b.a + __pyx_v_b.b) / 2)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 195; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.y.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10primitives_4Quad_1y___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad_1y___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_current;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  float __pyx_3;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_value);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":198 */
  __pyx_v_current = ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":199 */
  __pyx_1 = PyFloat_FromDouble(((__pyx_v_current.a + __pyx_v_current.b) / 2)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 199; goto __pyx_L1;}
  __pyx_2 = PyNumber_Subtract(__pyx_v_value, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 199; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_3 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 199; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_shift_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self),__pyx_3);

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.y.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_value);
  return __pyx_r;
}

static PyObject *__pyx_n_x;
static PyObject *__pyx_n_y;

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_2xy___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_2xy___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_x); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 206; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(__pyx_v_self, __pyx_n_y); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 206; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 206; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_1);
  PyTuple_SET_ITEM(__pyx_3, 1, __pyx_2);
  __pyx_1 = 0;
  __pyx_2 = 0;
  __pyx_r = __pyx_3;
  __pyx_3 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.xy.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10primitives_4Quad_2xy___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad_2xy___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_value);
  __pyx_1 = PyObject_GetIter(__pyx_v_value); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  __pyx_2 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_x, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_2 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_y, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  if (__Pyx_EndUnpack(__pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.xy.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_value);
  return __pyx_r;
}

static struct __pyx_t_6rabbyt_10primitives_float2 __pyx_f_6rabbyt_10primitives_4Quad__bounds_x(struct __pyx_obj_6rabbyt_10primitives_Quad *__pyx_v_self) {
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_bounds;
  float __pyx_v_x;
  int __pyx_v_i;
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_r;
  float __pyx_1;
  int __pyx_2;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":214 */
  __pyx_1 = (__pyx_v_self->v[0]).x;
  __pyx_v_bounds.a = __pyx_1;
  __pyx_v_bounds.b = __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":215 */
  for (__pyx_v_i = 1; __pyx_v_i < 4; ++__pyx_v_i) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":216 */
    __pyx_v_x = (__pyx_v_self->v[__pyx_v_i]).x;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":217 */
    __pyx_2 = (__pyx_v_bounds.a > __pyx_v_x);
    if (__pyx_2) {
      __pyx_v_bounds.a = __pyx_v_x;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":219 */
    __pyx_2 = (__pyx_v_bounds.b < __pyx_v_x);
    if (__pyx_2) {
      __pyx_v_bounds.b = __pyx_v_x;
      goto __pyx_L5;
    }
    __pyx_L5:;
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":221 */
  __pyx_r = __pyx_v_bounds;
  goto __pyx_L0;

  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static struct __pyx_t_6rabbyt_10primitives_float2 __pyx_f_6rabbyt_10primitives_4Quad__bounds_y(struct __pyx_obj_6rabbyt_10primitives_Quad *__pyx_v_self) {
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_bounds;
  float __pyx_v_y;
  int __pyx_v_i;
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_r;
  float __pyx_1;
  int __pyx_2;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":227 */
  __pyx_1 = (__pyx_v_self->v[0]).y;
  __pyx_v_bounds.a = __pyx_1;
  __pyx_v_bounds.b = __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":228 */
  for (__pyx_v_i = 1; __pyx_v_i < 4; ++__pyx_v_i) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":229 */
    __pyx_v_y = (__pyx_v_self->v[__pyx_v_i]).y;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":230 */
    __pyx_2 = (__pyx_v_bounds.a > __pyx_v_y);
    if (__pyx_2) {
      __pyx_v_bounds.a = __pyx_v_y;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":232 */
    __pyx_2 = (__pyx_v_bounds.b < __pyx_v_y);
    if (__pyx_2) {
      __pyx_v_bounds.b = __pyx_v_y;
      goto __pyx_L5;
    }
    __pyx_L5:;
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":234 */
  __pyx_r = __pyx_v_bounds;
  goto __pyx_L0;

  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_4left___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_4left___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)).a); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 239; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.left.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10primitives_4Quad_4left___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_v); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad_4left___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_v) {
  float __pyx_v_v;
  int __pyx_r;
  Py_INCREF(__pyx_v_self);
  __pyx_v_v = PyFloat_AsDouble(__pyx_arg_v); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 240; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":241 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_shift_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self),(__pyx_v_v - ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)).a));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":242 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_update_bounding_radius(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt.primitives.Quad.left.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_5right___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_5right___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)).b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 247; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.right.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10primitives_4Quad_5right___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_v); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad_5right___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_v) {
  float __pyx_v_v;
  int __pyx_r;
  Py_INCREF(__pyx_v_self);
  __pyx_v_v = PyFloat_AsDouble(__pyx_arg_v); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 248; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":249 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_shift_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self),(__pyx_v_v - ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)).b));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":250 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_update_bounding_radius(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt.primitives.Quad.right.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_6bottom___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_6bottom___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)).a); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 255; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.bottom.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10primitives_4Quad_6bottom___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_v); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad_6bottom___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_v) {
  float __pyx_v_v;
  int __pyx_r;
  Py_INCREF(__pyx_v_self);
  __pyx_v_v = PyFloat_AsDouble(__pyx_arg_v); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 256; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":257 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_shift_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self),(__pyx_v_v - ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)).a));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":258 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_update_bounding_radius(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt.primitives.Quad.bottom.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_3top___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad_3top___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)).b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 263; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.top.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10primitives_4Quad_3top___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_v); /*proto*/
static int __pyx_f_6rabbyt_10primitives_4Quad_3top___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_v) {
  float __pyx_v_v;
  int __pyx_r;
  Py_INCREF(__pyx_v_self);
  __pyx_v_v = PyFloat_AsDouble(__pyx_arg_v); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 264; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":265 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_shift_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self),(__pyx_v_v - ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)).b));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":266 */
  ((struct __pyx_vtabstruct_6rabbyt_10primitives_Quad *)((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self)->__pyx_vtab)->_update_bounding_radius(((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_self));

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt.primitives.Quad.top.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static void __pyx_f_6rabbyt_10primitives_4Quad__update_bounding_radius(struct __pyx_obj_6rabbyt_10primitives_Quad *__pyx_v_self) {
  float __pyx_v_brs;
  PyObject *__pyx_v_i;
  PyObject *__pyx_v_d;
  long __pyx_1;
  PyObject *__pyx_2 = 0;
  Py_ssize_t __pyx_3;
  Py_ssize_t __pyx_4;
  int __pyx_5;
  float __pyx_6;
  Py_INCREF(__pyx_v_self);
  __pyx_v_i = Py_None; Py_INCREF(Py_None);
  __pyx_v_d = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":270 */
  __pyx_v_self->bounding_radius = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":272 */
  __pyx_v_brs = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":273 */
  for (__pyx_1 = 0; __pyx_1 < 4; ++__pyx_1) {
    __pyx_2 = PyInt_FromLong(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 273; goto __pyx_L1;}
    Py_DECREF(__pyx_v_i);
    __pyx_v_i = __pyx_2;
    __pyx_2 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":274 */
    __pyx_3 = PyInt_AsSsize_t(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 274; goto __pyx_L1;}
    __pyx_4 = PyInt_AsSsize_t(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 274; goto __pyx_L1;}
    __pyx_2 = PyFloat_FromDouble((pow((__pyx_v_self->v[__pyx_3]).x, 2) + pow((__pyx_v_self->v[__pyx_4]).y, 2))); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 274; goto __pyx_L1;}
    Py_DECREF(__pyx_v_d);
    __pyx_v_d = __pyx_2;
    __pyx_2 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":275 */
    __pyx_2 = PyFloat_FromDouble(__pyx_v_brs); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 275; goto __pyx_L1;}
    if (PyObject_Cmp(__pyx_v_d, __pyx_2, &__pyx_5) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 275; goto __pyx_L1;}
    __pyx_5 = __pyx_5 > 0;
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    if (__pyx_5) {
      __pyx_6 = PyFloat_AsDouble(__pyx_v_d); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 276; goto __pyx_L1;}
      __pyx_v_brs = __pyx_6;
      goto __pyx_L4;
    }
    __pyx_L4:;
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":277 */
  __pyx_v_self->bounding_radius = pow(__pyx_v_brs, .5);

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_WriteUnraisable("rabbyt.primitives.Quad._update_bounding_radius");
  __pyx_L0:;
  Py_DECREF(__pyx_v_i);
  Py_DECREF(__pyx_v_d);
  Py_DECREF(__pyx_v_self);
}

static PyObject *__pyx_k14p;

static char __pyx_k14[] = "Quad((%r, %r, %r, %r))";

static PyObject *__pyx_f_6rabbyt_10primitives_4Quad___repr__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_10primitives_4Quad___repr__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 280; goto __pyx_L1;}
  __pyx_2 = __Pyx_GetItemInt(__pyx_v_self, 1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 280; goto __pyx_L1;}
  __pyx_3 = __Pyx_GetItemInt(__pyx_v_self, 2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 280; goto __pyx_L1;}
  __pyx_4 = __Pyx_GetItemInt(__pyx_v_self, 3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 280; goto __pyx_L1;}
  __pyx_5 = PyTuple_New(4); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 280; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_5, 0, __pyx_1);
  PyTuple_SET_ITEM(__pyx_5, 1, __pyx_2);
  PyTuple_SET_ITEM(__pyx_5, 2, __pyx_3);
  PyTuple_SET_ITEM(__pyx_5, 3, __pyx_4);
  __pyx_1 = 0;
  __pyx_2 = 0;
  __pyx_3 = 0;
  __pyx_4 = 0;
  __pyx_1 = PyNumber_Remainder(__pyx_k14p, __pyx_5); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 280; goto __pyx_L1;}
  Py_DECREF(__pyx_5); __pyx_5 = 0;
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt.primitives.Quad.__repr__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_Quad, "Quad"},
  {&__pyx_n___author__, "__author__"},
  {&__pyx_n___credits__, "__credits__"},
  {&__pyx_n___docs_all__, "__docs_all__"},
  {&__pyx_n___setitem__, "__setitem__"},
  {&__pyx_n_x, "x"},
  {&__pyx_n_y, "y"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k10p, __pyx_k10, sizeof(__pyx_k10)},
  {&__pyx_k11p, __pyx_k11, sizeof(__pyx_k11)},
  {&__pyx_k13p, __pyx_k13, sizeof(__pyx_k13)},
  {&__pyx_k14p, __pyx_k14, sizeof(__pyx_k14)},
  {0, 0, 0}
};
static struct __pyx_vtabstruct_6rabbyt_10primitives_Quad __pyx_vtable_6rabbyt_10primitives_Quad;

static PyObject *__pyx_tp_new_6rabbyt_10primitives_Quad(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_10primitives_Quad *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_10primitives_Quad *)o);
  *(struct __pyx_vtabstruct_6rabbyt_10primitives_Quad **)&p->__pyx_vtab = __pyx_vtabptr_6rabbyt_10primitives_Quad;
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_10primitives_Quad(PyObject *o) {
  (*o->ob_type->tp_free)(o);
}
static PyObject *__pyx_sq_item_6rabbyt_10primitives_Quad(PyObject *o, Py_ssize_t i) {
  PyObject *r;
  PyObject *x = PyInt_FromSsize_t(i); if(!x) return 0;
  r = o->ob_type->tp_as_mapping->mp_subscript(o, x);
  Py_DECREF(x);
  return r;
}

static int __pyx_mp_ass_subscript_6rabbyt_10primitives_Quad(PyObject *o, PyObject *i, PyObject *v) {
  if (v) {
    return __pyx_f_6rabbyt_10primitives_4Quad___setitem__(o, i, v);
  }
  else {
    PyErr_Format(PyExc_NotImplementedError,
      "Subscript deletion not supported by %s", o->ob_type->tp_name);
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_10primitives_4Quad_width(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_10primitives_4Quad_5width___get__(o);
}

static int __pyx_setprop_6rabbyt_10primitives_4Quad_width(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_10primitives_4Quad_5width___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_10primitives_4Quad_height(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_10primitives_4Quad_6height___get__(o);
}

static int __pyx_setprop_6rabbyt_10primitives_4Quad_height(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_10primitives_4Quad_6height___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_10primitives_4Quad_x(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_10primitives_4Quad_1x___get__(o);
}

static int __pyx_setprop_6rabbyt_10primitives_4Quad_x(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_10primitives_4Quad_1x___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_10primitives_4Quad_y(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_10primitives_4Quad_1y___get__(o);
}

static int __pyx_setprop_6rabbyt_10primitives_4Quad_y(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_10primitives_4Quad_1y___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_10primitives_4Quad_xy(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_10primitives_4Quad_2xy___get__(o);
}

static int __pyx_setprop_6rabbyt_10primitives_4Quad_xy(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_10primitives_4Quad_2xy___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_10primitives_4Quad_left(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_10primitives_4Quad_4left___get__(o);
}

static int __pyx_setprop_6rabbyt_10primitives_4Quad_left(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_10primitives_4Quad_4left___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_10primitives_4Quad_right(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_10primitives_4Quad_5right___get__(o);
}

static int __pyx_setprop_6rabbyt_10primitives_4Quad_right(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_10primitives_4Quad_5right___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_10primitives_4Quad_bottom(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_10primitives_4Quad_6bottom___get__(o);
}

static int __pyx_setprop_6rabbyt_10primitives_4Quad_bottom(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_10primitives_4Quad_6bottom___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_10primitives_4Quad_top(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_10primitives_4Quad_3top___get__(o);
}

static int __pyx_setprop_6rabbyt_10primitives_4Quad_top(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_10primitives_4Quad_3top___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static struct PyMethodDef __pyx_methods_6rabbyt_10primitives_Quad[] = {
  {0, 0, 0, 0}
};

static struct PyMemberDef __pyx_members_6rabbyt_10primitives_Quad[] = {
  {"bounding_radius", T_FLOAT, offsetof(struct __pyx_obj_6rabbyt_10primitives_Quad, bounding_radius), 0, 0},
  {0, 0, 0, 0, 0}
};

static struct PyGetSetDef __pyx_getsets_6rabbyt_10primitives_Quad[] = {
  {"width", __pyx_getprop_6rabbyt_10primitives_4Quad_width, __pyx_setprop_6rabbyt_10primitives_4Quad_width, __pyx_k1, 0},
  {"height", __pyx_getprop_6rabbyt_10primitives_4Quad_height, __pyx_setprop_6rabbyt_10primitives_4Quad_height, __pyx_k2, 0},
  {"x", __pyx_getprop_6rabbyt_10primitives_4Quad_x, __pyx_setprop_6rabbyt_10primitives_4Quad_x, __pyx_k3, 0},
  {"y", __pyx_getprop_6rabbyt_10primitives_4Quad_y, __pyx_setprop_6rabbyt_10primitives_4Quad_y, __pyx_k4, 0},
  {"xy", __pyx_getprop_6rabbyt_10primitives_4Quad_xy, __pyx_setprop_6rabbyt_10primitives_4Quad_xy, __pyx_k5, 0},
  {"left", __pyx_getprop_6rabbyt_10primitives_4Quad_left, __pyx_setprop_6rabbyt_10primitives_4Quad_left, __pyx_k6, 0},
  {"right", __pyx_getprop_6rabbyt_10primitives_4Quad_right, __pyx_setprop_6rabbyt_10primitives_4Quad_right, __pyx_k7, 0},
  {"bottom", __pyx_getprop_6rabbyt_10primitives_4Quad_bottom, __pyx_setprop_6rabbyt_10primitives_4Quad_bottom, __pyx_k8, 0},
  {"top", __pyx_getprop_6rabbyt_10primitives_4Quad_top, __pyx_setprop_6rabbyt_10primitives_4Quad_top, __pyx_k9, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Quad = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
  #if Py_TPFLAGS_DEFAULT & Py_TPFLAGS_HAVE_INDEX
  0, /*nb_index*/
  #endif
};

static PySequenceMethods __pyx_tp_as_sequence_Quad = {
  __pyx_f_6rabbyt_10primitives_4Quad___len__, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  __pyx_sq_item_6rabbyt_10primitives_Quad, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_Quad = {
  __pyx_f_6rabbyt_10primitives_4Quad___len__, /*mp_length*/
  __pyx_f_6rabbyt_10primitives_4Quad___getitem__, /*mp_subscript*/
  __pyx_mp_ass_subscript_6rabbyt_10primitives_Quad, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Quad = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_10primitives_Quad = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt.primitives.Quad", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_10primitives_Quad), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_10primitives_Quad, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  __pyx_f_6rabbyt_10primitives_4Quad___repr__, /*tp_repr*/
  &__pyx_tp_as_number_Quad, /*tp_as_number*/
  &__pyx_tp_as_sequence_Quad, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Quad, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Quad, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  "\n    ``Quad(definition)``\n\n    ``Quad`` provides a convenient representation of a quadrilateral.\n    This is useful for specifying ``Sprite.shape`` and ``Sprite.tex_shape``.\n\n    ``definition`` can be in a number of forms:\n\n       * A tuple with four vertexes.\n            For example: ``((0,1), (1,1), (1,0), (0,0))``.\n\n       * A tuple with the format ``(left, top, right, bottom)``.\n            For example: ``(0, 1, 1, 0)``. You can also think of this as\n            ``(x1, y1, x2, y2)``, giving the top-left and bottom-right corners\n            of a rectangle.\n\n       * A tuple in the format of pyglet\'s ``Texture.tex_coords`` attribute.\n            (This, is a flattened tuple giving each vertex in three\n            dimensions.  The third dimension will be discarded.)\n\n    ``Quad`` has a number of properties to make modifying it easier.  The\n    ``width`` and ``height`` properties will scale the vertexes from the\n    center, but all other properties will move *all* vertexes the same amount.\n    (e.g., assigning to ``left`` will move the right side as well: the width\n    says the same.)\n    ", /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_10primitives_Quad, /*tp_methods*/
  __pyx_members_6rabbyt_10primitives_Quad, /*tp_members*/
  __pyx_getsets_6rabbyt_10primitives_Quad, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_10primitives_4Quad___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_10primitives_Quad, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initprimitives(void); /*proto*/
PyMODINIT_FUNC initprimitives(void) {
  PyObject *__pyx_1 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("primitives", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_vtabptr_6rabbyt_10primitives_Quad = &__pyx_vtable_6rabbyt_10primitives_Quad;
  *(void(**)(void))&__pyx_vtable_6rabbyt_10primitives_Quad._shift_x = (void(*)(void))__pyx_f_6rabbyt_10primitives_4Quad__shift_x;
  *(void(**)(void))&__pyx_vtable_6rabbyt_10primitives_Quad._shift_y = (void(*)(void))__pyx_f_6rabbyt_10primitives_4Quad__shift_y;
  *(void(**)(void))&__pyx_vtable_6rabbyt_10primitives_Quad._bounds_x = (void(*)(void))__pyx_f_6rabbyt_10primitives_4Quad__bounds_x;
  *(void(**)(void))&__pyx_vtable_6rabbyt_10primitives_Quad._bounds_y = (void(*)(void))__pyx_f_6rabbyt_10primitives_4Quad__bounds_y;
  *(void(**)(void))&__pyx_vtable_6rabbyt_10primitives_Quad._update_bounding_radius = (void(*)(void))__pyx_f_6rabbyt_10primitives_4Quad__update_bounding_radius;
  if (PyType_Ready(&__pyx_type_6rabbyt_10primitives_Quad) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_10primitives_Quad.tp_dict, __pyx_vtabptr_6rabbyt_10primitives_Quad) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Quad", (PyObject *)&__pyx_type_6rabbyt_10primitives_Quad) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_10primitives_Quad = &__pyx_type_6rabbyt_10primitives_Quad;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":2 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n___credits__, __pyx_k10p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":24 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n___author__, __pyx_k11p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 24; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.primitives.pyx":282 */
  __pyx_1 = PyList_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 282; goto __pyx_L1;}
  Py_INCREF(__pyx_n_Quad);
  PyList_SET_ITEM(__pyx_1, 0, __pyx_n_Quad);
  if (PyObject_SetAttr(__pyx_m, __pyx_n___docs_all__, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 282; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt.primitives");
}

static char *__pyx_filenames[] = {
  "rabbyt.primitives.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static PyObject *__Pyx_GetItemInt(PyObject *o, Py_ssize_t i) {
    PyTypeObject *t = o->ob_type;
    PyObject *r;
    if (t->tp_as_sequence && t->tp_as_sequence->sq_item)
        r = PySequence_GetItem(o, i);
    else {
        PyObject *j = PyInt_FromLong(i);
        if (!j)
            return 0;
        r = PyObject_GetItem(o, j);
        Py_DECREF(j);
    }
    return r;
}

static void __Pyx_UnpackError(void) {
    PyErr_SetString(PyExc_ValueError, "unpack sequence of wrong size");
}

static PyObject *__Pyx_UnpackItem(PyObject *iter) {
    PyObject *item;
    if (!(item = PyIter_Next(iter))) {
        if (!PyErr_Occurred())
            __Pyx_UnpackError();
    }
    return item;
}

static int __Pyx_EndUnpack(PyObject *iter) {
    PyObject *item;
    if ((item = PyIter_Next(iter))) {
        Py_DECREF(item);
        __Pyx_UnpackError();
        return -1;
    }
    else if (!PyErr_Occurred())
        return 0;
    else
        return -1;
}

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb) {
    Py_XINCREF(type);
    Py_XINCREF(value);
    Py_XINCREF(tb);
    /* First, check the traceback argument, replacing None with NULL. */
    if (tb == Py_None) {
        Py_DECREF(tb);
        tb = 0;
    }
    else if (tb != NULL && !PyTraceBack_Check(tb)) {
        PyErr_SetString(PyExc_TypeError,
            "raise: arg 3 must be a traceback or None");
        goto raise_error;
    }
    /* Next, replace a missing value with None */
    if (value == NULL) {
        value = Py_None;
        Py_INCREF(value);
    }
    #if PY_VERSION_HEX < 0x02050000
    if (!PyClass_Check(type))
    #else
    if (!PyType_Check(type))
    #endif
    {
        /* Raising an instance.  The value should be a dummy. */
        if (value != Py_None) {
            PyErr_SetString(PyExc_TypeError,
                "instance exception may not have a separate value");
            goto raise_error;
        }
        /* Normalize to raise <class>, <instance> */
        Py_DECREF(value);
        value = type;
        #if PY_VERSION_HEX < 0x02050000
            if (PyInstance_Check(type)) {
                type = (PyObject*) ((PyInstanceObject*)type)->in_class;
                Py_INCREF(type);
            }
            else {
                PyErr_SetString(PyExc_TypeError,
                    "raise: exception must be an old-style class or instance");
                goto raise_error;
            }
        #else
            type = (PyObject*) type->ob_type;
            Py_INCREF(type);
            if (!PyType_IsSubtype((PyTypeObject *)type, (PyTypeObject *)PyExc_BaseException)) {
                PyErr_SetString(PyExc_TypeError,
                    "raise: exception class must be a subclass of BaseException");
                goto raise_error;
            }
        #endif
    }
    PyErr_Restore(type, value, tb);
    return;
raise_error:
    Py_XDECREF(value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
    return;
}

static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb) {
    PyThreadState *tstate = PyThreadState_Get();
    PyErr_Fetch(type, value, tb);
    PyErr_NormalizeException(type, value, tb);
    if (PyErr_Occurred())
        goto bad;
    Py_INCREF(*type);
    Py_INCREF(*value);
    Py_INCREF(*tb);
    Py_XDECREF(tstate->exc_type);
    Py_XDECREF(tstate->exc_value);
    Py_XDECREF(tstate->exc_traceback);
    tstate->exc_type = *type;
    tstate->exc_value = *value;
    tstate->exc_traceback = *tb;
    return 0;
bad:
    Py_XDECREF(*type);
    Py_XDECREF(*value);
    Py_XDECREF(*tb);
    return -1;
}

static void __Pyx_WriteUnraisable(char *name) {
    PyObject *old_exc, *old_val, *old_tb;
    PyObject *ctx;
    PyErr_Fetch(&old_exc, &old_val, &old_tb);
    ctx = PyString_FromString(name);
    PyErr_Restore(old_exc, old_val, old_tb);
    if (!ctx)
        ctx = Py_None;
    PyErr_WriteUnraisable(ctx);
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
    while (t->p) {
        *t->p = PyString_InternFromString(t->s);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

static int __Pyx_SetVtable(PyObject *dict, void *vtable) {
    PyObject *pycobj = 0;
    int result;
    
    pycobj = PyCObject_FromVoidPtr(vtable, 0);
    if (!pycobj)
        goto bad;
    if (PyDict_SetItemString(dict, "__pyx_vtable__", pycobj) < 0)
        goto bad;
    result = 0;
    goto done;

bad:
    result = -1;
done:
    Py_XDECREF(pycobj);
    return result;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
