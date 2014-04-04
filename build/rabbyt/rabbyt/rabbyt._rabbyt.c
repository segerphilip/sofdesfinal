/* 0.9.7.2 on Sat Sep  5 16:08:30 2009 */

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
#include "include_gl.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static PyObject *__Pyx_UnpackItem(PyObject *); /*proto*/
static int __Pyx_EndUnpack(PyObject *); /*proto*/

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/

static PyObject *__Pyx_GetItemInt(PyObject *o, Py_ssize_t i); /*proto*/

static int __Pyx_SetItemInt(PyObject *o, Py_ssize_t i, PyObject *v); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from rabbyt._rabbyt */

static PyObject *__pyx_k5;
static PyObject *__pyx_k7;
static PyObject *__pyx_k8;
static PyObject *__pyx_k9;
static PyObject *__pyx_k11;
static PyObject *__pyx_k12;
static PyObject *__pyx_k13;
static PyObject *__pyx_k14;


/* Implementation of rabbyt._rabbyt */

static char __pyx_k1[] = "\nCopyright (C) 2007  Matthew Marshall\n\nPermission is hereby granted, free of charge, to any person obtaining a copy\nof this software and associated documentation files (the \"Software\"), to deal\nin the Software without restriction, including without limitation the rights\nto use, copy, modify, merge, publish, distribute, sublicense, and/or sell\ncopies of the Software, and to permit persons to whom the Software is\nfurnished to do so, subject to the following conditions:\n\nThe above copyright notice and this permission notice shall be included in\nall copies or substantial portions of the Software.\n\nTHE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\nIMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\nFITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\nAUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\nLIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\nOUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN\nTHE SOFTWARE.\n";
static char __pyx_k2[] = "Matthew Marshall <matthew@matthewmarshall.org>";

static PyObject *__pyx_n___credits__;
static PyObject *__pyx_n___author__;
static PyObject *__pyx_n_warnings;
static PyObject *__pyx_n_warn;
static PyObject *__pyx_n_load_texture_file_hook;
static PyObject *__pyx_n_RGBA;

static PyObject *__pyx_k1p;
static PyObject *__pyx_k2p;

static PyObject *__pyx_f_6rabbyt_7_rabbyt_set_load_texture_file_hook(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_7_rabbyt_set_load_texture_file_hook[] = "\n    ``set_load_texture_file_hook(callback)``\n\n    This sets the ``callback`` that is used to load a texture from a file.\n    (It is called when you give a string for the first argument of\n    ``Sprite``.)\n\n    The default is ``rabbyt.autodetect_load_texture``, which will smartly\n    choose between using pyglet of pygame to load the file.\n\n    The ``callback`` should take the filename as a single argument, and return\n    either a tuple of the form ``(texture_id, (width, height))`` or any value\n    suitable for assiging to ``Sprite.texture``.\n    ";
static PyObject *__pyx_f_6rabbyt_7_rabbyt_set_load_texture_file_hook(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_callback = 0;
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {"callback",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_callback)) return 0;
  Py_INCREF(__pyx_v_callback);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":119 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n_load_texture_file_hook, __pyx_v_callback) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._rabbyt.set_load_texture_file_hook");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_callback);
  return __pyx_r;
}

static PyObject *__pyx_n_render;

static PyObject *__pyx_f_6rabbyt_7_rabbyt_render_unsorted(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_7_rabbyt_render_unsorted[] = "\n    ``render_unsorted(sprites)``\n\n    Renders a list of sprites.\n\n    Since this function is implemented in Pyrex, it should be a little faster\n    than looping through the sprites in Python.\n    ";
static PyObject *__pyx_f_6rabbyt_7_rabbyt_render_unsorted(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_sprites = 0;
  PyObject *__pyx_v_s;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"sprites",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_sprites)) return 0;
  Py_INCREF(__pyx_v_sprites);
  __pyx_v_s = Py_None; Py_INCREF(Py_None);
  __pyx_1 = PyObject_GetIter(__pyx_v_sprites); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; goto __pyx_L1;}
  for (;;) {
    __pyx_2 = PyIter_Next(__pyx_1);
    if (!__pyx_2) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; goto __pyx_L1;}
      break;
    }
    Py_DECREF(__pyx_v_s);
    __pyx_v_s = __pyx_2;
    __pyx_2 = 0;
    __pyx_2 = PyObject_GetAttr(__pyx_v_s, __pyx_n_render); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 133; goto __pyx_L1;}
    __pyx_3 = PyObject_CallObject(__pyx_2, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 133; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
  }
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._rabbyt.render_unsorted");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_s);
  Py_DECREF(__pyx_v_sprites);
  return __pyx_r;
}

static PyObject *__pyx_n_sort;
static PyObject *__pyx_n_render_unsorted;

static PyObject *__pyx_f_6rabbyt_7_rabbyt_render_sorted(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_6rabbyt_7_rabbyt_render_sorted(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_sprites = 0;
  PyObject *__pyx_v_ss;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"sprites",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_sprites)) return 0;
  Py_INCREF(__pyx_v_sprites);
  __pyx_v_ss = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":137 */
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 137; goto __pyx_L1;}
  Py_INCREF(__pyx_v_sprites);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_sprites);
  __pyx_2 = PyObject_CallObject(((PyObject *)(&PyList_Type)), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 137; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_v_ss);
  __pyx_v_ss = __pyx_2;
  __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":138 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_ss, __pyx_n_sort); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; goto __pyx_L1;}
  __pyx_2 = PyObject_CallObject(__pyx_1, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":139 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_render_unsorted); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 139; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 139; goto __pyx_L1;}
  Py_INCREF(__pyx_v_ss);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_ss);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 139; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._rabbyt.render_sorted");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_ss);
  Py_DECREF(__pyx_v_sprites);
  return __pyx_r;
}

static PyObject *__pyx_k15p;

static char __pyx_k15[] = "Viewport values cannot be negative";

static PyObject *__pyx_f_6rabbyt_7_rabbyt_set_viewport(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_7_rabbyt_set_viewport[] = "\n    ``set_viewport(viewport, [projection])``\n\n    Sets how coordinates map to the screen.\n\n    ``viewport`` gives the screen coordinates that will be drawn to.  It\n    should be in either the form ``(width, height)`` or\n    ``(left, top, right, bottom)``\n\n    ``projection`` gives the sprite coordinates that will be mapped to the\n    screen coordinates given by ``viewport``.  It too should be in one of the\n    two forms accepted by ``viewport``.  If ``projection`` is not given, it\n    will default to the width and height of ``viewport``.  If only the width\n    and height are given, ``(0, 0)`` will be the center point.\n    ";
static PyObject *__pyx_f_6rabbyt_7_rabbyt_set_viewport(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_viewport = 0;
  PyObject *__pyx_v_projection = 0;
  PyObject *__pyx_v_l;
  PyObject *__pyx_v_t;
  PyObject *__pyx_v_r;
  PyObject *__pyx_v_b;
  PyObject *__pyx_v_i;
  PyObject *__pyx_v_w;
  PyObject *__pyx_v_h;
  PyObject *__pyx_r;
  Py_ssize_t __pyx_1;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  GLint __pyx_6;
  GLint __pyx_7;
  GLsizei __pyx_8;
  GLsizei __pyx_9;
  PyObject *__pyx_10 = 0;
  PyObject *__pyx_11 = 0;
  GLint __pyx_12;
  GLint __pyx_13;
  static char *__pyx_argnames[] = {"viewport","projection",0};
  __pyx_v_projection = __pyx_k5;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O|O", __pyx_argnames, &__pyx_v_viewport, &__pyx_v_projection)) return 0;
  Py_INCREF(__pyx_v_viewport);
  Py_INCREF(__pyx_v_projection);
  __pyx_v_l = Py_None; Py_INCREF(Py_None);
  __pyx_v_t = Py_None; Py_INCREF(Py_None);
  __pyx_v_r = Py_None; Py_INCREF(Py_None);
  __pyx_v_b = Py_None; Py_INCREF(Py_None);
  __pyx_v_i = Py_None; Py_INCREF(Py_None);
  __pyx_v_w = Py_None; Py_INCREF(Py_None);
  __pyx_v_h = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":158 */
  glMatrixMode(GL_PROJECTION);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":159 */
  glLoadIdentity();

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":160 */
  __pyx_1 = PyObject_Length(__pyx_v_viewport); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 160; goto __pyx_L1;}
  __pyx_2 = (__pyx_1 == 4);
  if (__pyx_2) {
    __pyx_3 = PyObject_GetIter(__pyx_v_viewport); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 161; goto __pyx_L1;}
    __pyx_4 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 161; goto __pyx_L1;}
    Py_DECREF(__pyx_v_l);
    __pyx_v_l = __pyx_4;
    __pyx_4 = 0;
    __pyx_4 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 161; goto __pyx_L1;}
    Py_DECREF(__pyx_v_t);
    __pyx_v_t = __pyx_4;
    __pyx_4 = 0;
    __pyx_4 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 161; goto __pyx_L1;}
    Py_DECREF(__pyx_v_r);
    __pyx_v_r = __pyx_4;
    __pyx_4 = 0;
    __pyx_4 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 161; goto __pyx_L1;}
    Py_DECREF(__pyx_v_b);
    __pyx_v_b = __pyx_4;
    __pyx_4 = 0;
    if (__Pyx_EndUnpack(__pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 161; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":163 */
    __pyx_4 = PyInt_FromLong(0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 163; goto __pyx_L1;}
    __pyx_3 = PyInt_FromLong(0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 163; goto __pyx_L1;}
    Py_DECREF(__pyx_v_l);
    __pyx_v_l = __pyx_4;
    __pyx_4 = 0;
    Py_DECREF(__pyx_v_t);
    __pyx_v_t = __pyx_3;
    __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":164 */
    __pyx_4 = PyObject_GetIter(__pyx_v_viewport); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 164; goto __pyx_L1;}
    __pyx_3 = __Pyx_UnpackItem(__pyx_4); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 164; goto __pyx_L1;}
    Py_DECREF(__pyx_v_r);
    __pyx_v_r = __pyx_3;
    __pyx_3 = 0;
    __pyx_3 = __Pyx_UnpackItem(__pyx_4); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 164; goto __pyx_L1;}
    Py_DECREF(__pyx_v_b);
    __pyx_v_b = __pyx_3;
    __pyx_3 = 0;
    if (__Pyx_EndUnpack(__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 164; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":165 */
  __pyx_3 = PyTuple_New(4); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 165; goto __pyx_L1;}
  Py_INCREF(__pyx_v_l);
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_l);
  Py_INCREF(__pyx_v_t);
  PyTuple_SET_ITEM(__pyx_3, 1, __pyx_v_t);
  Py_INCREF(__pyx_v_r);
  PyTuple_SET_ITEM(__pyx_3, 2, __pyx_v_r);
  Py_INCREF(__pyx_v_b);
  PyTuple_SET_ITEM(__pyx_3, 3, __pyx_v_b);
  __pyx_4 = PyObject_GetIter(__pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 165; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  for (;;) {
    __pyx_3 = PyIter_Next(__pyx_4);
    if (!__pyx_3) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 165; goto __pyx_L1;}
      break;
    }
    Py_DECREF(__pyx_v_i);
    __pyx_v_i = __pyx_3;
    __pyx_3 = 0;
    __pyx_3 = PyInt_FromLong(0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 166; goto __pyx_L1;}
    if (PyObject_Cmp(__pyx_v_i, __pyx_3, &__pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 166; goto __pyx_L1;}
    __pyx_2 = __pyx_2 < 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    if (__pyx_2) {
      __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; goto __pyx_L1;}
      Py_INCREF(__pyx_k15p);
      PyTuple_SET_ITEM(__pyx_3, 0, __pyx_k15p);
      __pyx_5 = PyObject_CallObject(PyExc_ValueError, __pyx_3); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; goto __pyx_L1;}
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      __Pyx_Raise(__pyx_5, 0, 0);
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; goto __pyx_L1;}
      goto __pyx_L5;
    }
    __pyx_L5:;
  }
  Py_DECREF(__pyx_4); __pyx_4 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":168 */
  __pyx_6 = PyInt_AsLong(__pyx_v_l); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  __pyx_7 = PyInt_AsLong(__pyx_v_t); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  __pyx_3 = PyNumber_Subtract(__pyx_v_r, __pyx_v_l); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  __pyx_8 = PyInt_AsLong(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_5 = PyNumber_Subtract(__pyx_v_b, __pyx_v_t); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  __pyx_9 = PyInt_AsLong(__pyx_5); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  Py_DECREF(__pyx_5); __pyx_5 = 0;
  glViewport(__pyx_6,__pyx_7,__pyx_8,__pyx_9);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":170 */
  __pyx_2 = __pyx_v_projection != Py_None;
  if (__pyx_2) {
    __pyx_1 = PyObject_Length(__pyx_v_projection); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 171; goto __pyx_L1;}
    __pyx_2 = (__pyx_1 == 4);
    if (__pyx_2) {
      __pyx_4 = PyObject_GetIter(__pyx_v_projection); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 172; goto __pyx_L1;}
      __pyx_3 = __Pyx_UnpackItem(__pyx_4); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 172; goto __pyx_L1;}
      Py_DECREF(__pyx_v_l);
      __pyx_v_l = __pyx_3;
      __pyx_3 = 0;
      __pyx_5 = __Pyx_UnpackItem(__pyx_4); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 172; goto __pyx_L1;}
      Py_DECREF(__pyx_v_t);
      __pyx_v_t = __pyx_5;
      __pyx_5 = 0;
      __pyx_3 = __Pyx_UnpackItem(__pyx_4); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 172; goto __pyx_L1;}
      Py_DECREF(__pyx_v_r);
      __pyx_v_r = __pyx_3;
      __pyx_3 = 0;
      __pyx_5 = __Pyx_UnpackItem(__pyx_4); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 172; goto __pyx_L1;}
      Py_DECREF(__pyx_v_b);
      __pyx_v_b = __pyx_5;
      __pyx_5 = 0;
      if (__Pyx_EndUnpack(__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 172; goto __pyx_L1;}
      Py_DECREF(__pyx_4); __pyx_4 = 0;
      goto __pyx_L7;
    }
    /*else*/ {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":174 */
      __pyx_3 = PyObject_GetIter(__pyx_v_projection); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; goto __pyx_L1;}
      __pyx_5 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; goto __pyx_L1;}
      Py_DECREF(__pyx_v_w);
      __pyx_v_w = __pyx_5;
      __pyx_5 = 0;
      __pyx_4 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; goto __pyx_L1;}
      Py_DECREF(__pyx_v_h);
      __pyx_v_h = __pyx_4;
      __pyx_4 = 0;
      if (__Pyx_EndUnpack(__pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; goto __pyx_L1;}
      Py_DECREF(__pyx_3); __pyx_3 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":175 */
      __pyx_5 = PyNumber_Negative(__pyx_v_w); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
      __pyx_4 = PyInt_FromLong(2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
      __pyx_3 = PyNumber_Divide(__pyx_5, __pyx_4); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      Py_DECREF(__pyx_4); __pyx_4 = 0;
      __pyx_5 = PyInt_FromLong(2); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
      __pyx_4 = PyNumber_Divide(__pyx_v_w, __pyx_5); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      __pyx_5 = PyNumber_Negative(__pyx_v_h); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
      __pyx_10 = PyInt_FromLong(2); if (!__pyx_10) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
      __pyx_11 = PyNumber_Divide(__pyx_5, __pyx_10); if (!__pyx_11) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      Py_DECREF(__pyx_10); __pyx_10 = 0;
      __pyx_5 = PyInt_FromLong(2); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
      __pyx_10 = PyNumber_Divide(__pyx_v_h, __pyx_5); if (!__pyx_10) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      Py_DECREF(__pyx_v_l);
      __pyx_v_l = __pyx_3;
      __pyx_3 = 0;
      Py_DECREF(__pyx_v_r);
      __pyx_v_r = __pyx_4;
      __pyx_4 = 0;
      Py_DECREF(__pyx_v_t);
      __pyx_v_t = __pyx_11;
      __pyx_11 = 0;
      Py_DECREF(__pyx_v_b);
      __pyx_v_b = __pyx_10;
      __pyx_10 = 0;
    }
    __pyx_L7:;
    goto __pyx_L6;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":177 */
    __pyx_5 = PyNumber_Subtract(__pyx_v_r, __pyx_v_l); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 177; goto __pyx_L1;}
    __pyx_3 = PyNumber_Subtract(__pyx_v_b, __pyx_v_t); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 177; goto __pyx_L1;}
    Py_DECREF(__pyx_v_w);
    __pyx_v_w = __pyx_5;
    __pyx_5 = 0;
    Py_DECREF(__pyx_v_h);
    __pyx_v_h = __pyx_3;
    __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":178 */
    __pyx_4 = PyNumber_Negative(__pyx_v_w); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
    __pyx_11 = PyInt_FromLong(2); if (!__pyx_11) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
    __pyx_10 = PyNumber_Divide(__pyx_4, __pyx_11); if (!__pyx_10) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_11); __pyx_11 = 0;
    __pyx_5 = PyInt_FromLong(2); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
    __pyx_3 = PyNumber_Divide(__pyx_v_w, __pyx_5); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_4 = PyNumber_Negative(__pyx_v_h); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
    __pyx_11 = PyInt_FromLong(2); if (!__pyx_11) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
    __pyx_5 = PyNumber_Divide(__pyx_4, __pyx_11); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_11); __pyx_11 = 0;
    __pyx_4 = PyInt_FromLong(2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
    __pyx_11 = PyNumber_Divide(__pyx_v_h, __pyx_4); if (!__pyx_11) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_v_l);
    __pyx_v_l = __pyx_10;
    __pyx_10 = 0;
    Py_DECREF(__pyx_v_r);
    __pyx_v_r = __pyx_3;
    __pyx_3 = 0;
    Py_DECREF(__pyx_v_b);
    __pyx_v_b = __pyx_5;
    __pyx_5 = 0;
    Py_DECREF(__pyx_v_t);
    __pyx_v_t = __pyx_11;
    __pyx_11 = 0;
  }
  __pyx_L6:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":179 */
  __pyx_6 = PyInt_AsLong(__pyx_v_l); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; goto __pyx_L1;}
  __pyx_7 = PyInt_AsLong(__pyx_v_r); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; goto __pyx_L1;}
  __pyx_12 = PyInt_AsLong(__pyx_v_b); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; goto __pyx_L1;}
  __pyx_13 = PyInt_AsLong(__pyx_v_t); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; goto __pyx_L1;}
  glOrtho(__pyx_6,__pyx_7,__pyx_12,__pyx_13,(-1),1);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":180 */
  glMatrixMode(GL_MODELVIEW);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":181 */
  glLoadIdentity();

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  Py_XDECREF(__pyx_10);
  Py_XDECREF(__pyx_11);
  __Pyx_AddTraceback("rabbyt._rabbyt.set_viewport");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_l);
  Py_DECREF(__pyx_v_t);
  Py_DECREF(__pyx_v_r);
  Py_DECREF(__pyx_v_b);
  Py_DECREF(__pyx_v_i);
  Py_DECREF(__pyx_v_w);
  Py_DECREF(__pyx_v_h);
  Py_DECREF(__pyx_v_viewport);
  Py_DECREF(__pyx_v_projection);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_7_rabbyt_set_default_attribs(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_7_rabbyt_set_default_attribs[] = "\n    ``set_default_attribs()``\n\n    Sets a few of the OpenGL attributes that sprites expect.\n\n    Unless you know what you are doing, you should call this at least once\n    before rendering any sprites.  (It is called automatically in\n    ``rabbyt.init_display()``)\n    ";
static PyObject *__pyx_f_6rabbyt_7_rabbyt_set_default_attribs(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":193 */
  glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":194 */
  glTexEnvf(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_MODULATE);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":195 */
  glEnable(GL_BLEND);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  return __pyx_r;
}

static PyObject *__pyx_n_stacklevel;

static PyObject *__pyx_k16p;

static char __pyx_k16[] = "set_gl_color is deprecated.  Use glColor4f instead.";

static PyObject *__pyx_f_6rabbyt_7_rabbyt_set_gl_color(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_7_rabbyt_set_gl_color[] = "\n    ``set_gl_color(rgba)``\n\n    This is a thin wrapper around ``glColor4f()``.\n    ";
static PyObject *__pyx_f_6rabbyt_7_rabbyt_set_gl_color(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_rgba = 0;
  float __pyx_v_r;
  float __pyx_v_g;
  float __pyx_v_b;
  float __pyx_v_a;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  float __pyx_5;
  static char *__pyx_argnames[] = {"rgba",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_rgba)) return 0;
  Py_INCREF(__pyx_v_rgba);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":205 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_warn); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 205; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 205; goto __pyx_L1;}
  Py_INCREF(__pyx_k16p);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_k16p);
  __pyx_3 = PyDict_New(); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 205; goto __pyx_L1;}
  __pyx_4 = PyInt_FromLong(2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 206; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_3, __pyx_n_stacklevel, __pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 205; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_4 = PyEval_CallObjectWithKeywords(__pyx_1, __pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 205; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":208 */
  __pyx_1 = PyObject_GetIter(__pyx_v_rgba); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  __pyx_2 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  __pyx_5 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_v_r = __pyx_5;
  __pyx_3 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  __pyx_5 = PyFloat_AsDouble(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_v_g = __pyx_5;
  __pyx_4 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  __pyx_5 = PyFloat_AsDouble(__pyx_4); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_v_b = __pyx_5;
  __pyx_2 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  __pyx_5 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_v_a = __pyx_5;
  if (__Pyx_EndUnpack(__pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":209 */
  glColor4f(__pyx_v_r,__pyx_v_g,__pyx_v_b,__pyx_v_a);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("rabbyt._rabbyt.set_gl_color");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_rgba);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_7_rabbyt_get_gl_vendor(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_7_rabbyt_get_gl_vendor[] = "\n    ``gl_get_vendor()``\n\n    Returns the OpenGL vendor string.  Returns None if there is no context.\n    ";
static PyObject *__pyx_f_6rabbyt_7_rabbyt_get_gl_vendor(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  char *__pyx_v_string;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":218 */
  __pyx_v_string = ((char *)glGetString(GL_VENDOR));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":219 */
  __pyx_1 = (__pyx_v_string == NULL);
  if (__pyx_1) {
    Py_INCREF(Py_None);
    __pyx_r = Py_None;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_2 = PyString_FromString(__pyx_v_string); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 222; goto __pyx_L1;}
    __pyx_r = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L0;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._rabbyt.get_gl_vendor");
  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_n_update_texture;

static PyObject *__pyx_f_6rabbyt_7_rabbyt_load_texture(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_7_rabbyt_load_texture[] = "\n    ``load_texture(byte_string, size, type_=\'RGBA\', filter=True, mipmap=True)``\n\n    Load a texture and return it.\n    ";
static PyObject *__pyx_f_6rabbyt_7_rabbyt_load_texture(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_byte_string = 0;
  PyObject *__pyx_v_size = 0;
  PyObject *__pyx_v_type_ = 0;
  PyObject *__pyx_v_filter = 0;
  PyObject *__pyx_v_mipmap = 0;
  GLuint __pyx_v_textures[1];
  GLuint __pyx_v_id;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"byte_string","size","type_","filter","mipmap",0};
  __pyx_v_type_ = __pyx_k7;
  __pyx_v_filter = __pyx_k8;
  __pyx_v_mipmap = __pyx_k9;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO|OOO", __pyx_argnames, &__pyx_v_byte_string, &__pyx_v_size, &__pyx_v_type_, &__pyx_v_filter, &__pyx_v_mipmap)) return 0;
  Py_INCREF(__pyx_v_byte_string);
  Py_INCREF(__pyx_v_size);
  Py_INCREF(__pyx_v_type_);
  Py_INCREF(__pyx_v_filter);
  Py_INCREF(__pyx_v_mipmap);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":235 */
  glGenTextures(1,__pyx_v_textures);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":236 */
  __pyx_v_id = (__pyx_v_textures[0]);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":237 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_update_texture); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 237; goto __pyx_L1;}
  __pyx_2 = PyLong_FromUnsignedLong(__pyx_v_id); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 237; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(6); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 237; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_2);
  Py_INCREF(__pyx_v_byte_string);
  PyTuple_SET_ITEM(__pyx_3, 1, __pyx_v_byte_string);
  Py_INCREF(__pyx_v_size);
  PyTuple_SET_ITEM(__pyx_3, 2, __pyx_v_size);
  Py_INCREF(__pyx_v_type_);
  PyTuple_SET_ITEM(__pyx_3, 3, __pyx_v_type_);
  Py_INCREF(__pyx_v_filter);
  PyTuple_SET_ITEM(__pyx_3, 4, __pyx_v_filter);
  Py_INCREF(__pyx_v_mipmap);
  PyTuple_SET_ITEM(__pyx_3, 5, __pyx_v_mipmap);
  __pyx_2 = 0;
  __pyx_2 = PyObject_CallObject(__pyx_1, __pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 237; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":238 */
  __pyx_1 = PyLong_FromUnsignedLong(__pyx_v_id); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 238; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._rabbyt.load_texture");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_byte_string);
  Py_DECREF(__pyx_v_size);
  Py_DECREF(__pyx_v_type_);
  Py_DECREF(__pyx_v_filter);
  Py_DECREF(__pyx_v_mipmap);
  return __pyx_r;
}

static PyObject *__pyx_n_get_gl_vendor;
static PyObject *__pyx_n_RGB;

static PyObject *__pyx_k18p;
static PyObject *__pyx_k21p;
static PyObject *__pyx_k22p;

static char __pyx_k18[] = "Trying to load a texture without an OpenGL context";
static char __pyx_k21[] = "type_ must be \"RGBA\" or \"RGB\"";
static char __pyx_k22[] = "byte_string is an unexpected size.";

static PyObject *__pyx_f_6rabbyt_7_rabbyt_update_texture(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_7_rabbyt_update_texture[] = "\n    ``update_texture(texture_id, byte_string, size, type_=\'RGBA\', filter=True,\n    mipmap=True)``\n\n    Update a texture with a different byte_string.\n    ";
static PyObject *__pyx_f_6rabbyt_7_rabbyt_update_texture(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_texture_id = 0;
  PyObject *__pyx_v_byte_string = 0;
  PyObject *__pyx_v_size = 0;
  PyObject *__pyx_v_type_ = 0;
  PyObject *__pyx_v_filter = 0;
  PyObject *__pyx_v_mipmap = 0;
  char *__pyx_v_data;
  PyObject *__pyx_v_ptype;
  PyObject *__pyx_v_channels;
  PyObject *__pyx_v_filter_type;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  int __pyx_3;
  int __pyx_4;
  char *__pyx_5;
  PyObject *__pyx_6 = 0;
  Py_ssize_t __pyx_7;
  GLuint __pyx_8;
  GLint __pyx_9;
  GLsizei __pyx_10;
  GLsizei __pyx_11;
  GLenum __pyx_12;
  static char *__pyx_argnames[] = {"texture_id","byte_string","size","type_","filter","mipmap",0};
  __pyx_v_type_ = __pyx_k11;
  __pyx_v_filter = __pyx_k12;
  __pyx_v_mipmap = __pyx_k13;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOO|OOO", __pyx_argnames, &__pyx_v_texture_id, &__pyx_v_byte_string, &__pyx_v_size, &__pyx_v_type_, &__pyx_v_filter, &__pyx_v_mipmap)) return 0;
  Py_INCREF(__pyx_v_texture_id);
  Py_INCREF(__pyx_v_byte_string);
  Py_INCREF(__pyx_v_size);
  Py_INCREF(__pyx_v_type_);
  Py_INCREF(__pyx_v_filter);
  Py_INCREF(__pyx_v_mipmap);
  __pyx_v_ptype = Py_None; Py_INCREF(Py_None);
  __pyx_v_channels = Py_None; Py_INCREF(Py_None);
  __pyx_v_filter_type = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":249 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_get_gl_vendor); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 249; goto __pyx_L1;}
  __pyx_2 = PyObject_CallObject(__pyx_1, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 249; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_3 = PyObject_IsTrue(__pyx_2); if (__pyx_3 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 249; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_4 = (!__pyx_3);
  if (__pyx_4) {
    __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 250; goto __pyx_L1;}
    Py_INCREF(__pyx_k18p);
    PyTuple_SET_ITEM(__pyx_1, 0, __pyx_k18p);
    __pyx_2 = PyObject_CallObject(PyExc_RuntimeError, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 250; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __Pyx_Raise(__pyx_2, 0, 0);
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 250; goto __pyx_L1;}
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":253 */
  __pyx_5 = PyString_AsString(__pyx_v_byte_string); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 253; goto __pyx_L1;}
  __pyx_v_data = __pyx_5;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":254 */
  if (PyObject_Cmp(__pyx_v_type_, __pyx_n_RGBA, &__pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 254; goto __pyx_L1;}
  __pyx_3 = __pyx_3 == 0;
  if (__pyx_3) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":255 */
    __pyx_1 = PyInt_FromLong(GL_RGBA); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 255; goto __pyx_L1;}
    Py_DECREF(__pyx_v_ptype);
    __pyx_v_ptype = __pyx_1;
    __pyx_1 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":256 */
    __pyx_2 = PyInt_FromLong(4); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 256; goto __pyx_L1;}
    Py_DECREF(__pyx_v_channels);
    __pyx_v_channels = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L3;
  }
  if (PyObject_Cmp(__pyx_v_type_, __pyx_n_RGB, &__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 257; goto __pyx_L1;}
  __pyx_4 = __pyx_4 == 0;
  if (__pyx_4) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":258 */
    __pyx_1 = PyInt_FromLong(GL_RGB); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 258; goto __pyx_L1;}
    Py_DECREF(__pyx_v_ptype);
    __pyx_v_ptype = __pyx_1;
    __pyx_1 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":259 */
    __pyx_2 = PyInt_FromLong(3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 259; goto __pyx_L1;}
    Py_DECREF(__pyx_v_channels);
    __pyx_v_channels = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L3;
  }
  /*else*/ {
    __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 261; goto __pyx_L1;}
    Py_INCREF(__pyx_k21p);
    PyTuple_SET_ITEM(__pyx_1, 0, __pyx_k21p);
    __pyx_2 = PyObject_CallObject(PyExc_ValueError, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 261; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __Pyx_Raise(__pyx_2, 0, 0);
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 261; goto __pyx_L1;}
  }
  __pyx_L3:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":263 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_size, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 263; goto __pyx_L1;}
  __pyx_2 = __Pyx_GetItemInt(__pyx_v_size, 1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 263; goto __pyx_L1;}
  __pyx_6 = PyNumber_Multiply(__pyx_1, __pyx_2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 263; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_1 = PyNumber_Multiply(__pyx_6, __pyx_v_channels); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 263; goto __pyx_L1;}
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  __pyx_7 = PyObject_Length(__pyx_v_byte_string); if (__pyx_7 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 263; goto __pyx_L1;}
  __pyx_2 = PyInt_FromSsize_t(__pyx_7); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 263; goto __pyx_L1;}
  if (PyObject_Cmp(__pyx_1, __pyx_2, &__pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 263; goto __pyx_L1;}
  __pyx_3 = __pyx_3 != 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  if (__pyx_3) {
    __pyx_6 = PyTuple_New(1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 264; goto __pyx_L1;}
    Py_INCREF(__pyx_k22p);
    PyTuple_SET_ITEM(__pyx_6, 0, __pyx_k22p);
    __pyx_1 = PyObject_CallObject(PyExc_ValueError, __pyx_6); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 264; goto __pyx_L1;}
    Py_DECREF(__pyx_6); __pyx_6 = 0;
    __Pyx_Raise(__pyx_1, 0, 0);
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 264; goto __pyx_L1;}
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":266 */
  __pyx_2 = PyInt_FromLong(GL_NEAREST); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 266; goto __pyx_L1;}
  Py_DECREF(__pyx_v_filter_type);
  __pyx_v_filter_type = __pyx_2;
  __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":267 */
  __pyx_4 = PyObject_IsTrue(__pyx_v_filter); if (__pyx_4 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 267; goto __pyx_L1;}
  if (__pyx_4) {
    __pyx_6 = PyInt_FromLong(GL_LINEAR); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 267; goto __pyx_L1;}
    Py_DECREF(__pyx_v_filter_type);
    __pyx_v_filter_type = __pyx_6;
    __pyx_6 = 0;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":268 */
  __pyx_8 = PyInt_AsUnsignedLongMask(__pyx_v_texture_id); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 268; goto __pyx_L1;}
  glBindTexture(GL_TEXTURE_2D,__pyx_8);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":269 */
  __pyx_9 = PyInt_AsLong(__pyx_v_filter_type); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 269; goto __pyx_L1;}
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,__pyx_9);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":270 */
  __pyx_3 = PyObject_IsTrue(__pyx_v_mipmap); if (__pyx_3 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 270; goto __pyx_L1;}
  if (__pyx_3) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":271 */
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_NEAREST);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":272 */
    __pyx_9 = PyInt_AsLong(__pyx_v_channels); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 272; goto __pyx_L1;}
    __pyx_1 = __Pyx_GetItemInt(__pyx_v_size, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 272; goto __pyx_L1;}
    __pyx_10 = PyInt_AsLong(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 272; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_2 = __Pyx_GetItemInt(__pyx_v_size, 1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 272; goto __pyx_L1;}
    __pyx_11 = PyInt_AsLong(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 272; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_12 = PyInt_AsUnsignedLongMask(__pyx_v_ptype); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 272; goto __pyx_L1;}
    gluBuild2DMipmaps(GL_TEXTURE_2D,__pyx_9,__pyx_10,__pyx_11,__pyx_12,GL_UNSIGNED_BYTE,__pyx_v_data);
    goto __pyx_L6;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":274 */
    __pyx_9 = PyInt_AsLong(__pyx_v_filter_type); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 274; goto __pyx_L1;}
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,__pyx_9);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":275 */
    __pyx_9 = PyInt_AsLong(__pyx_v_ptype); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 275; goto __pyx_L1;}
    __pyx_6 = __Pyx_GetItemInt(__pyx_v_size, 0); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 275; goto __pyx_L1;}
    __pyx_10 = PyInt_AsLong(__pyx_6); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 275; goto __pyx_L1;}
    Py_DECREF(__pyx_6); __pyx_6 = 0;
    __pyx_1 = __Pyx_GetItemInt(__pyx_v_size, 1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 275; goto __pyx_L1;}
    __pyx_11 = PyInt_AsLong(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 275; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_12 = PyInt_AsUnsignedLongMask(__pyx_v_ptype); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 275; goto __pyx_L1;}
    glTexImage2D(GL_TEXTURE_2D,0,__pyx_9,__pyx_10,__pyx_11,0,__pyx_12,GL_UNSIGNED_BYTE,__pyx_v_data);
  }
  __pyx_L6:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_6);
  __Pyx_AddTraceback("rabbyt._rabbyt.update_texture");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_ptype);
  Py_DECREF(__pyx_v_channels);
  Py_DECREF(__pyx_v_filter_type);
  Py_DECREF(__pyx_v_texture_id);
  Py_DECREF(__pyx_v_byte_string);
  Py_DECREF(__pyx_v_size);
  Py_DECREF(__pyx_v_type_);
  Py_DECREF(__pyx_v_filter);
  Py_DECREF(__pyx_v_mipmap);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_7_rabbyt_unload_texture(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_7_rabbyt_unload_texture[] = "\n    ``unload_texture(texture_id)``\n\n    Unload a texture from memory.\n    ";
static PyObject *__pyx_f_6rabbyt_7_rabbyt_unload_texture(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_texture_id = 0;
  GLuint __pyx_v_textures[1];
  PyObject *__pyx_r;
  GLuint __pyx_1;
  static char *__pyx_argnames[] = {"texture_id",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_texture_id)) return 0;
  Py_INCREF(__pyx_v_texture_id);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":284 */
  __pyx_1 = PyInt_AsUnsignedLongMask(__pyx_v_texture_id); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 284; goto __pyx_L1;}
  (__pyx_v_textures[0]) = __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":285 */
  glDeleteTextures(1,__pyx_v_textures);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._rabbyt.unload_texture");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_texture_id);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_7_rabbyt_clear(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_7_rabbyt_clear[] = "\n    ``clear(rgba=(0.0,0.0,0.0,1.0))``\n\n    Clear the screen to a background color.\n    ";
static PyObject *__pyx_f_6rabbyt_7_rabbyt_clear(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_rgba = 0;
  PyObject *__pyx_r;
  Py_ssize_t __pyx_1;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  GLclampf __pyx_6;
  GLclampf __pyx_7;
  GLclampf __pyx_8;
  GLclampf __pyx_9;
  static char *__pyx_argnames[] = {"rgba",0};
  __pyx_v_rgba = __pyx_k14;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "|O", __pyx_argnames, &__pyx_v_rgba)) return 0;
  Py_INCREF(__pyx_v_rgba);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":293 */
  __pyx_1 = PyObject_Length(__pyx_v_rgba); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 293; goto __pyx_L1;}
  __pyx_2 = (__pyx_1 == 3);
  if (__pyx_2) {
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 294; goto __pyx_L1;}
    Py_INCREF(__pyx_v_rgba);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_rgba);
    __pyx_4 = PyObject_CallObject(((PyObject *)(&PyTuple_Type)), __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 294; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_3 = PyFloat_FromDouble(1.0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 294; goto __pyx_L1;}
    __pyx_5 = PyTuple_New(1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 294; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_5, 0, __pyx_3);
    __pyx_3 = 0;
    __pyx_3 = PyNumber_Add(__pyx_4, __pyx_5); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 294; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    Py_DECREF(__pyx_v_rgba);
    __pyx_v_rgba = __pyx_3;
    __pyx_3 = 0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":295 */
  __pyx_4 = __Pyx_GetItemInt(__pyx_v_rgba, 0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 295; goto __pyx_L1;}
  __pyx_6 = PyFloat_AsDouble(__pyx_4); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 295; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_5 = __Pyx_GetItemInt(__pyx_v_rgba, 1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 295; goto __pyx_L1;}
  __pyx_7 = PyFloat_AsDouble(__pyx_5); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 295; goto __pyx_L1;}
  Py_DECREF(__pyx_5); __pyx_5 = 0;
  __pyx_3 = __Pyx_GetItemInt(__pyx_v_rgba, 2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 295; goto __pyx_L1;}
  __pyx_8 = PyFloat_AsDouble(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 295; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_4 = __Pyx_GetItemInt(__pyx_v_rgba, 3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 295; goto __pyx_L1;}
  __pyx_9 = PyFloat_AsDouble(__pyx_4); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 295; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  glClearColor(__pyx_6,__pyx_7,__pyx_8,__pyx_9);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":296 */
  glClear(GL_COLOR_BUFFER_BIT);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt._rabbyt.clear");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_rgba);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_RGB, "RGB"},
  {&__pyx_n_RGBA, "RGBA"},
  {&__pyx_n___author__, "__author__"},
  {&__pyx_n___credits__, "__credits__"},
  {&__pyx_n_get_gl_vendor, "get_gl_vendor"},
  {&__pyx_n_load_texture_file_hook, "load_texture_file_hook"},
  {&__pyx_n_render, "render"},
  {&__pyx_n_render_unsorted, "render_unsorted"},
  {&__pyx_n_sort, "sort"},
  {&__pyx_n_stacklevel, "stacklevel"},
  {&__pyx_n_update_texture, "update_texture"},
  {&__pyx_n_warn, "warn"},
  {&__pyx_n_warnings, "warnings"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k1p, __pyx_k1, sizeof(__pyx_k1)},
  {&__pyx_k2p, __pyx_k2, sizeof(__pyx_k2)},
  {&__pyx_k15p, __pyx_k15, sizeof(__pyx_k15)},
  {&__pyx_k16p, __pyx_k16, sizeof(__pyx_k16)},
  {&__pyx_k18p, __pyx_k18, sizeof(__pyx_k18)},
  {&__pyx_k21p, __pyx_k21, sizeof(__pyx_k21)},
  {&__pyx_k22p, __pyx_k22, sizeof(__pyx_k22)},
  {0, 0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {"set_load_texture_file_hook", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_set_load_texture_file_hook, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_7_rabbyt_set_load_texture_file_hook},
  {"render_unsorted", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_render_unsorted, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_7_rabbyt_render_unsorted},
  {"render_sorted", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_render_sorted, METH_VARARGS|METH_KEYWORDS, 0},
  {"set_viewport", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_set_viewport, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_7_rabbyt_set_viewport},
  {"set_default_attribs", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_set_default_attribs, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_7_rabbyt_set_default_attribs},
  {"set_gl_color", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_set_gl_color, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_7_rabbyt_set_gl_color},
  {"get_gl_vendor", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_get_gl_vendor, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_7_rabbyt_get_gl_vendor},
  {"load_texture", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_load_texture, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_7_rabbyt_load_texture},
  {"update_texture", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_update_texture, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_7_rabbyt_update_texture},
  {"unload_texture", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_unload_texture, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_7_rabbyt_unload_texture},
  {"clear", (PyCFunction)__pyx_f_6rabbyt_7_rabbyt_clear, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_7_rabbyt_clear},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC init_rabbyt(void); /*proto*/
PyMODINIT_FUNC init_rabbyt(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("_rabbyt", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":2 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n___credits__, __pyx_k1p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":24 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n___author__, __pyx_k2p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 24; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":100 */
  __pyx_1 = PyList_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
  Py_INCREF(__pyx_n_warn);
  PyList_SET_ITEM(__pyx_1, 0, __pyx_n_warn);
  __pyx_2 = __Pyx_Import(__pyx_n_warnings, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyObject_GetAttr(__pyx_2, __pyx_n_warn); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_warn, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":102 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n_load_texture_file_hook, Py_None) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 102; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":142 */
  Py_INCREF(Py_None);
  __pyx_k5 = Py_None;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":227 */
  Py_INCREF(__pyx_n_RGBA);
  __pyx_k7 = __pyx_n_RGBA;
  Py_INCREF(Py_True);
  __pyx_k8 = Py_True;
  Py_INCREF(Py_True);
  __pyx_k9 = Py_True;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":240 */
  Py_INCREF(__pyx_n_RGBA);
  __pyx_k11 = __pyx_n_RGBA;
  Py_INCREF(Py_True);
  __pyx_k12 = Py_True;
  Py_INCREF(Py_True);
  __pyx_k13 = Py_True;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._rabbyt.pyx":287 */
  __pyx_2 = PyFloat_FromDouble(0.0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 287; goto __pyx_L1;}
  __pyx_1 = PyFloat_FromDouble(0.0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 287; goto __pyx_L1;}
  __pyx_3 = PyFloat_FromDouble(0.0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 287; goto __pyx_L1;}
  __pyx_4 = PyFloat_FromDouble(1.0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 287; goto __pyx_L1;}
  __pyx_5 = PyTuple_New(4); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 287; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_5, 0, __pyx_2);
  PyTuple_SET_ITEM(__pyx_5, 1, __pyx_1);
  PyTuple_SET_ITEM(__pyx_5, 2, __pyx_3);
  PyTuple_SET_ITEM(__pyx_5, 3, __pyx_4);
  __pyx_2 = 0;
  __pyx_1 = 0;
  __pyx_3 = 0;
  __pyx_4 = 0;
  __pyx_k14 = __pyx_5;
  __pyx_5 = 0;
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt._rabbyt");
}

static char *__pyx_filenames[] = {
  "rabbyt._rabbyt.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list) {
    PyObject *__import__ = 0;
    PyObject *empty_list = 0;
    PyObject *module = 0;
    PyObject *global_dict = 0;
    PyObject *empty_dict = 0;
    PyObject *list;
    __import__ = PyObject_GetAttrString(__pyx_b, "__import__");
    if (!__import__)
        goto bad;
    if (from_list)
        list = from_list;
    else {
        empty_list = PyList_New(0);
        if (!empty_list)
            goto bad;
        list = empty_list;
    }
    global_dict = PyModule_GetDict(__pyx_m);
    if (!global_dict)
        goto bad;
    empty_dict = PyDict_New();
    if (!empty_dict)
        goto bad;
    module = PyObject_CallFunction(__import__, "OOOO",
        name, global_dict, empty_dict, list);
bad:
    Py_XDECREF(empty_list);
    Py_XDECREF(__import__);
    Py_XDECREF(empty_dict);
    return module;
}

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
    PyObject *result;
    result = PyObject_GetAttr(dict, name);
    if (!result)
        PyErr_SetObject(PyExc_NameError, name);
    return result;
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

static int __Pyx_SetItemInt(PyObject *o, Py_ssize_t i, PyObject *v) {
    PyTypeObject *t = o->ob_type;
    int r;
    if (t->tp_as_sequence && t->tp_as_sequence->sq_item)
        r = PySequence_SetItem(o, i, v);
    else {
        PyObject *j = PyInt_FromLong(i);
        if (!j)
            return -1;
        r = PyObject_SetItem(o, j, v);
        Py_DECREF(j);
    }
    return r;
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
