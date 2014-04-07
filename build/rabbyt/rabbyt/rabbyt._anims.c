/* 0.9.7.2 on Sat Sep  5 16:08:34 2009 */

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
#include "anim_sys.h"
#include "include_math.h"
#include "stdlib.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static char __pyx_mdoc[] = "\n\nThis module provides the compiled Anim classes.  Everything is imported into\nthe rabbyt.anims module, and should be accessed from there.\n\n";

static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[],     Py_ssize_t nargs, PyObject **args2, PyObject **kwds2, char rqd_kwds[]); /*proto*/

static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static int __Pyx_SetItemInt(PyObject *o, Py_ssize_t i, PyObject *v); /*proto*/

static PyObject *__Pyx_GetItemInt(PyObject *o, Py_ssize_t i); /*proto*/

static void __Pyx_WriteUnraisable(char *name); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static int __Pyx_SetVtable(PyObject *dict, void *vtable); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from rabbyt._anims */

struct __pyx_obj_6rabbyt_6_anims_cAnimable {
  PyObject_HEAD
  struct __pyx_vtabstruct_6rabbyt_6_anims_cAnimable *__pyx_vtab;
  PyObject *_anim_list;
  int c_slot_count;
  AnimSlot_s **c_anim_slots;
};

struct __pyx_obj_6rabbyt_6_anims_AnimSlot {
  PyObject_HEAD
  struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot *__pyx_vtab;
  AnimSlot_s _internal_slot;
  AnimSlot_s *_slot;
  struct __pyx_obj_6rabbyt_6_anims_Anim *_py_anim;
};

struct __pyx_obj_6rabbyt_6_anims_IncompleteAnimBase {
  PyObject_HEAD
};

struct __pyx_obj_6rabbyt_6_anims_Anim {
  PyObject_HEAD
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim *__pyx_vtab;
  Anim_s _anim;
  PyObject *dependencies;
};

struct __pyx_obj_6rabbyt_6_anims_anim_slot {
  PyObject_HEAD
  int index;
  float default_value;
  PyObject *__doc__;
};

struct __pyx_obj_6rabbyt_6_anims_AnimConst {
  struct __pyx_obj_6rabbyt_6_anims_Anim __pyx_base;
  float v;
};

struct __pyx_obj_6rabbyt_6_anims_AnimPointer {
  struct __pyx_obj_6rabbyt_6_anims_Anim __pyx_base;
  PyObject *_owner;
};

struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim {
  struct __pyx_obj_6rabbyt_6_anims_Anim __pyx_base;
  InterpolateAnim_data _data;
  PyObject *method_name;
};

typedef struct {
  float end_time;
  Anim_s anim;
} __pyx_t_6rabbyt_6_anims_chain_link_s;

typedef struct {
  int link_count;
  __pyx_t_6rabbyt_6_anims_chain_link_s *links;
} __pyx_t_6rabbyt_6_anims_chain_data_s;

struct __pyx_obj_6rabbyt_6_anims_ChainAnim {
  struct __pyx_obj_6rabbyt_6_anims_Anim __pyx_base;
  __pyx_t_6rabbyt_6_anims_chain_data_s chain_data;
  PyObject *_anims;
};

typedef struct {
  int link_count;
  float p0;
  float startt;
  float endt;
  int extend;
  float one_over_dt;
  float a;
  float b;
  float c;
  int use_global_time;
  AnimSlot_s t;
} __pyx_t_6rabbyt_6_anims_static_bezier3_data_s;

struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier {
  struct __pyx_obj_6rabbyt_6_anims_Anim __pyx_base;
  __pyx_t_6rabbyt_6_anims_static_bezier3_data_s _data;
};

struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader {
  struct __pyx_obj_6rabbyt_6_anims_Anim __pyx_base;
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *read_slot;
};

struct __pyx_t_6rabbyt_6_anims_wrap_data {
  float a;
  float b;
  AnimSlot_s input;
};

struct __pyx_obj_6rabbyt_6_anims_AnimWrap {
  struct __pyx_obj_6rabbyt_6_anims_Anim __pyx_base;
  struct __pyx_t_6rabbyt_6_anims_wrap_data _data;
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *input_slot;
};

struct __pyx_t_6rabbyt_6_anims_op_data {
  AnimSlot_s a;
  AnimSlot_s b;
};

struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim {
  struct __pyx_obj_6rabbyt_6_anims_Anim __pyx_base;
  struct __pyx_t_6rabbyt_6_anims_op_data _data;
  PyObject *operation_name;
};

struct __pyx_t_6rabbyt_6_anims__py_func_data {
  void *function;
  float cache;
  float cache_time;
  int do_cache;
};

struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc {
  struct __pyx_obj_6rabbyt_6_anims_Anim __pyx_base;
  PyObject *function;
  struct __pyx_t_6rabbyt_6_anims__py_func_data _data;
};

struct __pyx_obj_6rabbyt_6_anims_AnimProxy {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader __pyx_base;
  int cache_output;
  float cache;
  float cache_time;
};

struct __pyx_t_6rabbyt_6_anims_rate_data {
  AnimSlot_s target;
  float last;
  float last_time;
  float last_rate;
};

struct __pyx_obj_6rabbyt_6_anims_AnimRate {
  struct __pyx_obj_6rabbyt_6_anims_Anim __pyx_base;
  struct __pyx_t_6rabbyt_6_anims_rate_data _data;
};


struct __pyx_vtabstruct_6rabbyt_6_anims_cAnimable {
  PyObject *(*_modify_slots)(struct __pyx_obj_6rabbyt_6_anims_cAnimable *);
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_cAnimable *__pyx_vtabptr_6rabbyt_6_anims_cAnimable;


struct __pyx_vtabstruct_6rabbyt_6_anims_Anim {
  int (*add_dependency)(struct __pyx_obj_6rabbyt_6_anims_Anim *,PyObject *,AnimSlot_s *);
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_Anim *__pyx_vtabptr_6rabbyt_6_anims_Anim;


struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot {
  int (*c_set_anim)(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *,struct __pyx_obj_6rabbyt_6_anims_Anim *);
  struct __pyx_obj_6rabbyt_6_anims_Anim *(*c_get_anim)(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *);
  float (*c_get_value)(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *);
  int (*c_set_value)(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *,float);
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot *__pyx_vtabptr_6rabbyt_6_anims_AnimSlot;




struct __pyx_vtabstruct_6rabbyt_6_anims_AnimConst {
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_base;
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimConst *__pyx_vtabptr_6rabbyt_6_anims_AnimConst;


struct __pyx_vtabstruct_6rabbyt_6_anims_AnimPointer {
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_base;
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimPointer *__pyx_vtabptr_6rabbyt_6_anims_AnimPointer;


struct __pyx_vtabstruct_6rabbyt_6_anims_InterpolateAnim {
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_base;
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_InterpolateAnim *__pyx_vtabptr_6rabbyt_6_anims_InterpolateAnim;


struct __pyx_vtabstruct_6rabbyt_6_anims_ChainAnim {
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_base;
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_ChainAnim *__pyx_vtabptr_6rabbyt_6_anims_ChainAnim;


struct __pyx_vtabstruct_6rabbyt_6_anims_AnimStaticCubicBezier {
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_base;
  float (*g)(struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *);
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimStaticCubicBezier *__pyx_vtabptr_6rabbyt_6_anims_AnimStaticCubicBezier;


struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlotReader {
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_base;
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlotReader *__pyx_vtabptr_6rabbyt_6_anims_AnimSlotReader;


struct __pyx_vtabstruct_6rabbyt_6_anims_AnimWrap {
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_base;
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimWrap *__pyx_vtabptr_6rabbyt_6_anims_AnimWrap;


struct __pyx_vtabstruct_6rabbyt_6_anims_ArithmeticAnim {
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_base;
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_ArithmeticAnim *__pyx_vtabptr_6rabbyt_6_anims_ArithmeticAnim;


struct __pyx_vtabstruct_6rabbyt_6_anims_AnimPyFunc {
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_base;
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimPyFunc *__pyx_vtabptr_6rabbyt_6_anims_AnimPyFunc;


struct __pyx_vtabstruct_6rabbyt_6_anims_AnimProxy {
  struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlotReader __pyx_base;
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimProxy *__pyx_vtabptr_6rabbyt_6_anims_AnimProxy;


struct __pyx_vtabstruct_6rabbyt_6_anims_AnimRate {
  struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_base;
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimRate *__pyx_vtabptr_6rabbyt_6_anims_AnimRate;

static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_cAnimable = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_Anim = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_AnimSlot = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_IncompleteAnimBase = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_anim_slot = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_AnimConst = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_AnimPointer = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_InterpolateAnim = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_ChainAnim = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_AnimStaticCubicBezier = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_AnimSlotReader = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_AnimWrap = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_AnimPyFunc = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_AnimProxy = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_AnimRate = 0;
static PyObject *__pyx_k5;
static PyObject *__pyx_k7;
static PyObject *__pyx_k8;
static PyObject *__pyx_k9;
static float __pyx_k10;
static float __pyx_k11;
static PyObject *__pyx_k12;
static PyObject *__pyx_k13;
static PyObject *__pyx_k14;
static PyObject *__pyx_k15;
static float __pyx_f_6rabbyt_6_anims__on_end_clear(AnimSlot_s *,void *,float); /*proto*/
static float __pyx_f_6rabbyt_6_anims__anim_const_func(AnimSlot_s *); /*proto*/
static float __pyx_f_6rabbyt_6_anims__on_end_chain(AnimSlot_s *,void *,float); /*proto*/
static float __pyx_f_6rabbyt_6_anims_extend_t(float,int); /*proto*/
static float __pyx_f_6rabbyt_6_anims__static_bezier3_func(AnimSlot_s *); /*proto*/
static float __pyx_f_6rabbyt_6_anims__slot_reader_func(AnimSlot_s *); /*proto*/
static float __pyx_f_6rabbyt_6_anims__wrap_func(AnimSlot_s *); /*proto*/
static float __pyx_f_6rabbyt_6_anims__add_func(AnimSlot_s *); /*proto*/
static float __pyx_f_6rabbyt_6_anims__sub_func(AnimSlot_s *); /*proto*/
static float __pyx_f_6rabbyt_6_anims__mul_func(AnimSlot_s *); /*proto*/
static float __pyx_f_6rabbyt_6_anims__div_func(AnimSlot_s *); /*proto*/
static float __pyx_f_6rabbyt_6_anims__py_func_func(AnimSlot_s *); /*proto*/
static float __pyx_f_6rabbyt_6_anims__rate_func(AnimSlot_s *); /*proto*/


/* Implementation of rabbyt._anims */

static char __pyx_k1[] = "\n        The value that this anim will return.\n\n        You can assign another anim here, and it\'s value will be returned.\n        ";
static char __pyx_k2[] = "\nCopyright (C) 2007  Matthew Marshall\n\nPermission is hereby granted, free of charge, to any person obtaining a copy\nof this software and associated documentation files (the \"Software\"), to deal\nin the Software without restriction, including without limitation the rights\nto use, copy, modify, merge, publish, distribute, sublicense, and/or sell\ncopies of the Software, and to permit persons to whom the Software is\nfurnished to do so, subject to the following conditions:\n\nThe above copyright notice and this permission notice shall be included in\nall copies or substantial portions of the Software.\n\nTHE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\nIMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\nFITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\nAUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\nLIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\nOUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN\nTHE SOFTWARE.\n";
static char __pyx_k3[] = "Matthew Marshall <matthew@matthewmarshall.org>";
static char __pyx_k6[] = "";

static PyObject *__pyx_n___credits__;
static PyObject *__pyx_n___author__;
static PyObject *__pyx_n_warnings;

static PyObject *__pyx_k2p;
static PyObject *__pyx_k3p;
static PyObject *__pyx_k6p;

static PyObject *__pyx_f_6rabbyt_6_anims_set_time(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_6_anims_set_time[] = "\n    ``set_time(t)``\n\n    Sets the time that ``get_time()`` should return.\n\n    If you are using any time based animations, (such as ``lerp()``,)\n    you should call this function every frame.\n\n    For example, if you are using pygame you can do this::\n\n        rabbyt.set_time(pygame.time.get_ticks())\n\n    Using this function should make it easier to implement a pause feature.\n\n    Note that rabbyt makes no assumption about the unit that the time is in.\n    You can use milliseconds or seconds or even something else.  It\'s up to\n    you.\n    ";
static PyObject *__pyx_f_6rabbyt_6_anims_set_time(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  float __pyx_v_t;
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {"t",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "f", __pyx_argnames, &__pyx_v_t)) return 0;
  _set_time(__pyx_v_t);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_get_time(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_6_anims_get_time[] = "\n    ``get_time()``\n\n    Gets the time that was last set by ``set_time()``\n    ";
static PyObject *__pyx_f_6rabbyt_6_anims_get_time(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  __pyx_1 = PyFloat_FromDouble(_get_time()); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 95; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.get_time");
  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_add_time(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_6_anims_add_time[] = "\n    ``add_time(t)``\n\n    Adds ``t`` to the ... time ... (Is it just me or does that sound dorky?)\n\n    This is really just a short cut that does this:\n\n        .. sourcecode:: python\n\n            set_time(get_time() + t)\n\n    The new time is returned.\n    ";
static PyObject *__pyx_f_6rabbyt_6_anims_add_time(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  float __pyx_v_t;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {"t",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "f", __pyx_argnames, &__pyx_v_t)) return 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":111 */
  _add_time(__pyx_v_t);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":112 */
  __pyx_1 = PyFloat_FromDouble(_get_time()); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 112; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.add_time");
  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__on_end_clear(AnimSlot_s *__pyx_v_slot,void *__pyx_v_data,float __pyx_v_end) {
  float __pyx_r;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":115 */
  __pyx_v_slot->anim = NULL;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":116 */
  __pyx_v_slot->type = SLOT_LOCAL;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":117 */
  __pyx_v_slot->local = __pyx_v_end;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":118 */
  __pyx_r = __pyx_v_end;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_n_add;


static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___add__(PyObject *__pyx_v_self, PyObject *__pyx_v_other); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___add__(PyObject *__pyx_v_self, PyObject *__pyx_v_other) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_other);
  __pyx_1 = PyTuple_New(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; goto __pyx_L1;}
  Py_INCREF(__pyx_n_add);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_n_add);
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_self);
  Py_INCREF(__pyx_v_other);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_v_other);
  __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.IncompleteAnimBase.__add__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_other);
  return __pyx_r;
}

static PyObject *__pyx_n_sub;


static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___sub__(PyObject *__pyx_v_self, PyObject *__pyx_v_other); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___sub__(PyObject *__pyx_v_self, PyObject *__pyx_v_other) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_other);
  __pyx_1 = PyTuple_New(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 129; goto __pyx_L1;}
  Py_INCREF(__pyx_n_sub);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_n_sub);
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_self);
  Py_INCREF(__pyx_v_other);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_v_other);
  __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 129; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.IncompleteAnimBase.__sub__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_other);
  return __pyx_r;
}

static PyObject *__pyx_n_mul;


static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___mul__(PyObject *__pyx_v_self, PyObject *__pyx_v_other); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___mul__(PyObject *__pyx_v_self, PyObject *__pyx_v_other) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_other);
  __pyx_1 = PyTuple_New(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; goto __pyx_L1;}
  Py_INCREF(__pyx_n_mul);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_n_mul);
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_self);
  Py_INCREF(__pyx_v_other);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_v_other);
  __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.IncompleteAnimBase.__mul__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_other);
  return __pyx_r;
}

static PyObject *__pyx_n_div;


static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___div__(PyObject *__pyx_v_self, PyObject *__pyx_v_other); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___div__(PyObject *__pyx_v_self, PyObject *__pyx_v_other) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_other);
  __pyx_1 = PyTuple_New(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 135; goto __pyx_L1;}
  Py_INCREF(__pyx_n_div);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_n_div);
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_self);
  Py_INCREF(__pyx_v_other);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_v_other);
  __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 135; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.IncompleteAnimBase.__div__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_other);
  return __pyx_r;
}


static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___neg__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___neg__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyInt_FromLong(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; goto __pyx_L1;}
  Py_INCREF(__pyx_n_sub);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_n_sub);
  PyTuple_SET_ITEM(__pyx_2, 1, __pyx_1);
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_2, 2, __pyx_v_self);
  __pyx_1 = 0;
  __pyx_1 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim), __pyx_2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.IncompleteAnimBase.__neg__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___pos__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___pos__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_self);
  __pyx_r = __pyx_v_self;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_4Anim___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_4Anim___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return -1;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":157 */
  ((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self)->_anim.on_end = __pyx_f_6rabbyt_6_anims__on_end_clear;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":158 */
  ((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self)->_anim.on_end_data = NULL;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":159 */
  __pyx_1 = PyList_New(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 159; goto __pyx_L1;}
  Py_DECREF(((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self)->dependencies);
  ((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self)->dependencies = __pyx_1;
  __pyx_1 = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.Anim.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}


static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___add__(PyObject *__pyx_v_self, PyObject *__pyx_v_other); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___add__(PyObject *__pyx_v_self, PyObject *__pyx_v_other) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_other);
  __pyx_1 = PyTuple_New(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 162; goto __pyx_L1;}
  Py_INCREF(__pyx_n_add);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_n_add);
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_self);
  Py_INCREF(__pyx_v_other);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_v_other);
  __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 162; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.Anim.__add__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_other);
  return __pyx_r;
}


static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___sub__(PyObject *__pyx_v_self, PyObject *__pyx_v_other); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___sub__(PyObject *__pyx_v_self, PyObject *__pyx_v_other) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_other);
  __pyx_1 = PyTuple_New(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 165; goto __pyx_L1;}
  Py_INCREF(__pyx_n_sub);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_n_sub);
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_self);
  Py_INCREF(__pyx_v_other);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_v_other);
  __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 165; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.Anim.__sub__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_other);
  return __pyx_r;
}


static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___mul__(PyObject *__pyx_v_self, PyObject *__pyx_v_other); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___mul__(PyObject *__pyx_v_self, PyObject *__pyx_v_other) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_other);
  __pyx_1 = PyTuple_New(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  Py_INCREF(__pyx_n_mul);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_n_mul);
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_self);
  Py_INCREF(__pyx_v_other);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_v_other);
  __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.Anim.__mul__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_other);
  return __pyx_r;
}


static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___div__(PyObject *__pyx_v_self, PyObject *__pyx_v_other); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___div__(PyObject *__pyx_v_self, PyObject *__pyx_v_other) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_other);
  __pyx_1 = PyTuple_New(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 171; goto __pyx_L1;}
  Py_INCREF(__pyx_n_div);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_n_div);
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_self);
  Py_INCREF(__pyx_v_other);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_v_other);
  __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 171; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.Anim.__div__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_other);
  return __pyx_r;
}


static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___neg__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___neg__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyInt_FromLong(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; goto __pyx_L1;}
  Py_INCREF(__pyx_n_sub);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_n_sub);
  PyTuple_SET_ITEM(__pyx_2, 1, __pyx_1);
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_2, 2, __pyx_v_self);
  __pyx_1 = 0;
  __pyx_1 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_ArithmeticAnim), __pyx_2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.Anim.__neg__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___pos__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_4Anim___pos__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_self);
  __pyx_r = __pyx_v_self;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_anim;
static PyObject *__pyx_n_value;

static PyObject *__pyx_f_6rabbyt_6_anims_4Anim_get_value(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_4Anim_get_value(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_slot;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF(__pyx_v_self);
  __pyx_v_slot = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":180 */
  __pyx_1 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_AnimSlot), 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 180; goto __pyx_L1;}
  Py_DECREF(__pyx_v_slot);
  __pyx_v_slot = __pyx_1;
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":181 */
  if (PyObject_SetAttr(__pyx_v_slot, __pyx_n_anim, __pyx_v_self) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 181; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":182 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_slot, __pyx_n_value); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.Anim.get_value");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_slot);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_get_value;

static PyObject *__pyx_f_6rabbyt_6_anims_4Anim_get(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_4Anim_get(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_get_value); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 185; goto __pyx_L1;}
  __pyx_2 = PyObject_CallObject(__pyx_1, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 185; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.Anim.get");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_force_complete;
static PyObject *__pyx_n_append;

static int __pyx_f_6rabbyt_6_anims_4Anim_add_dependency(struct __pyx_obj_6rabbyt_6_anims_Anim *__pyx_v_self,PyObject *__pyx_v_source,AnimSlot_s *__pyx_v_target) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_slot;
  int __pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  float __pyx_5;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_source);
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)Py_None); Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":189 */
  __pyx_1 = PyObject_IsInstance(__pyx_v_source,((PyObject *)__pyx_ptype_6rabbyt_6_anims_IncompleteAnimBase)); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 189; goto __pyx_L1;}
  if (__pyx_1) {
    __pyx_2 = PyObject_GetAttr(__pyx_v_source, __pyx_n_force_complete); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 190; goto __pyx_L1;}
    __pyx_3 = PyObject_CallObject(__pyx_2, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 190; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_v_source);
    __pyx_v_source = __pyx_3;
    __pyx_3 = 0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":191 */
  __pyx_1 = PyObject_IsInstance(__pyx_v_source,((PyObject *)__pyx_ptype_6rabbyt_6_anims_Anim)); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 191; goto __pyx_L1;}
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":192 */
    __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_AnimSlot), 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 192; goto __pyx_L1;}
    Py_DECREF(((PyObject *)__pyx_v_slot));
    __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_2);
    __pyx_2 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":193 */
    __pyx_v_slot->_slot = __pyx_v_target;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":194 */
    __pyx_v_slot->_slot->type = SLOT_LOCAL;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":195 */
    if (PyObject_SetAttr(((PyObject *)__pyx_v_slot), __pyx_n_anim, __pyx_v_source) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 195; goto __pyx_L1;}

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":196 */
    __pyx_3 = PyObject_GetAttr(__pyx_v_self->dependencies, __pyx_n_append); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 196; goto __pyx_L1;}
    __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 196; goto __pyx_L1;}
    Py_INCREF(__pyx_v_source);
    PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_source);
    __pyx_4 = PyObject_CallObject(__pyx_3, __pyx_2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 196; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":198 */
    __pyx_v_target->type = SLOT_LOCAL;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":199 */
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 199; goto __pyx_L1;}
    Py_INCREF(__pyx_v_source);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_source);
    __pyx_2 = PyObject_CallObject(((PyObject *)(&PyFloat_Type)), __pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 199; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_5 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 199; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_v_target->local = __pyx_5;
  }
  __pyx_L3:;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("rabbyt._anims.Anim.add_dependency");
  __pyx_r = (-1);
  __pyx_L0:;
  Py_DECREF(__pyx_v_slot);
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_source);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_8AnimSlot___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_8AnimSlot___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  int __pyx_r;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return -1;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":207 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self)->_slot = (&((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self)->_internal_slot);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":208 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self)->_slot->type = SLOT_LOCAL;

  __pyx_r = 0;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_8AnimSlot_c_set_anim(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_self,struct __pyx_obj_6rabbyt_6_anims_Anim *__pyx_v_anim) {
  int __pyx_r;
  int __pyx_1;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_anim);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":211 */
  Py_INCREF(((PyObject *)__pyx_v_anim));
  Py_DECREF(((PyObject *)__pyx_v_self->_py_anim));
  __pyx_v_self->_py_anim = __pyx_v_anim;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":212 */
  __pyx_1 = ((PyObject *)__pyx_v_anim) == Py_None;
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":213 */
    __pyx_v_self->_slot->anim = NULL;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":214 */
    __pyx_v_self->_slot->type = SLOT_LOCAL;
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":216 */
    __pyx_v_self->_slot->anim = (&__pyx_v_self->_py_anim->_anim);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":217 */
    __pyx_v_self->_slot->type = SLOT_ANIM;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":218 */
    __pyx_v_self->_slot->recursion_check = 0;
  }
  __pyx_L2:;

  __pyx_r = 0;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_anim);
  return __pyx_r;
}

static struct __pyx_obj_6rabbyt_6_anims_Anim *__pyx_f_6rabbyt_6_anims_8AnimSlot_c_get_anim(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_self) {
  struct __pyx_obj_6rabbyt_6_anims_Anim *__pyx_r;
  int __pyx_1;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":221 */
  __pyx_1 = (__pyx_v_self->_slot->type != SLOT_ANIM);
  if (__pyx_1) {
    Py_INCREF(Py_None);
    Py_DECREF(((PyObject *)__pyx_v_self->_py_anim));
    __pyx_v_self->_py_anim = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)Py_None);
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":223 */
  Py_INCREF(((PyObject *)__pyx_v_self->_py_anim));
  __pyx_r = __pyx_v_self->_py_anim;
  goto __pyx_L0;

  __pyx_r = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)Py_None); Py_INCREF(Py_None);
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_8AnimSlot_4anim___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_8AnimSlot_4anim___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = ((PyObject *)((struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot *)((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self)->__pyx_vtab)->c_get_anim(((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self))); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 227; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.AnimSlot.anim.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_8AnimSlot_4anim___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_anim); /*proto*/
static int __pyx_f_6rabbyt_6_anims_8AnimSlot_4anim___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_anim) {
  int __pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_anim);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":229 */
  __pyx_1 = PyObject_IsInstance(__pyx_v_anim,((PyObject *)__pyx_ptype_6rabbyt_6_anims_IncompleteAnimBase)); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 229; goto __pyx_L1;}
  if (__pyx_1) {
    __pyx_2 = PyObject_GetAttr(__pyx_v_anim, __pyx_n_force_complete); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 230; goto __pyx_L1;}
    __pyx_3 = PyObject_CallObject(__pyx_2, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 230; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_v_anim);
    __pyx_v_anim = __pyx_3;
    __pyx_3 = 0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":231 */
  if (!__Pyx_TypeTest(__pyx_v_anim, __pyx_ptype_6rabbyt_6_anims_Anim)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 231; goto __pyx_L1;}
  __pyx_1 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot *)((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self)->__pyx_vtab)->c_set_anim(((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self),((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_anim)); if (__pyx_1 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 231; goto __pyx_L1;}

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._anims.AnimSlot.anim.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_anim);
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims_8AnimSlot_c_get_value(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_self) {
  float __pyx_v_v;
  float __pyx_r;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":235 */
  READ_SLOT(__pyx_v_self->_slot,(&__pyx_v_v));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":236 */
  __pyx_r = __pyx_v_v;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_8AnimSlot_c_set_value(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_self,float __pyx_v_value) {
  int __pyx_r;
  int __pyx_1;
  Py_INCREF(__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":239 */
  __pyx_1 = (__pyx_v_self->_slot->type == SLOT_ANIM);
  if (__pyx_1) {
    __pyx_v_self->_slot->type = SLOT_LOCAL;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":241 */
  __pyx_1 = (__pyx_v_self->_slot->type == SLOT_LOCAL);
  if (__pyx_1) {
    __pyx_v_self->_slot->local = __pyx_v_value;
    goto __pyx_L3;
  }
  /*else*/ {
    __Pyx_Raise(PyExc_NotImplementedError, 0, 0);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 244; goto __pyx_L1;}
  }
  __pyx_L3:;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._anims.AnimSlot.c_set_value");
  __pyx_r = (-1);
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_8AnimSlot_5value___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_8AnimSlot_5value___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot *)((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self)->__pyx_vtab)->c_get_value(((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self))); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 248; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.AnimSlot.value.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_8AnimSlot_5value___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_value); /*proto*/
static int __pyx_f_6rabbyt_6_anims_8AnimSlot_5value___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_value) {
  float __pyx_v_value;
  int __pyx_r;
  int __pyx_1;
  Py_INCREF(__pyx_v_self);
  __pyx_v_value = PyFloat_AsDouble(__pyx_arg_value); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 249; goto __pyx_L1;}
  __pyx_1 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot *)((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self)->__pyx_vtab)->c_set_value(((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_v_self),__pyx_v_value); if (__pyx_1 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 250; goto __pyx_L1;}

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._anims.AnimSlot.value.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n__anim_slot_descriptors;
static PyObject *__pyx_n_range;
static PyObject *__pyx_n_set_anim_slot_locations;

static int __pyx_f_6rabbyt_6_anims_9cAnimable___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_9cAnimable___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_args = 0;
  PyObject *__pyx_v_kwargs = 0;
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_slot;
  PyObject *__pyx_v_i;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  Py_ssize_t __pyx_2;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  long __pyx_6;
  int __pyx_7;
  static char *__pyx_argnames[] = {0};
  if (__Pyx_GetStarArgs(&__pyx_args, &__pyx_kwds, __pyx_argnames, 0, &__pyx_v_args, &__pyx_v_kwargs, 0) < 0) return -1;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) {
    Py_XDECREF(__pyx_args);
    Py_XDECREF(__pyx_kwds);
    Py_XDECREF(__pyx_v_args);
    Py_XDECREF(__pyx_v_kwargs);
    return -1;
  }
  Py_INCREF(__pyx_v_self);
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)Py_None); Py_INCREF(Py_None);
  __pyx_v_i = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":263 */
  __pyx_1 = PyList_New(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 263; goto __pyx_L1;}
  Py_DECREF(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->_anim_list);
  ((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->_anim_list = __pyx_1;
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":264 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n__anim_slot_descriptors); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 264; goto __pyx_L1;}
  __pyx_2 = PyObject_Length(__pyx_1); if (__pyx_2 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 264; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  ((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->c_slot_count = __pyx_2;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":265 */
  ((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->c_anim_slots = ((AnimSlot_s **)malloc(((sizeof(void *)) * ((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->c_slot_count)));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":268 */
  __pyx_1 = __Pyx_GetName(__pyx_b, __pyx_n_range); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 268; goto __pyx_L1;}
  __pyx_3 = PyInt_FromLong(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->c_slot_count); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 268; goto __pyx_L1;}
  __pyx_4 = PyTuple_New(1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 268; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_4, 0, __pyx_3);
  __pyx_3 = 0;
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_4); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 268; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_1 = PyObject_GetIter(__pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 268; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  for (;;) {
    __pyx_4 = PyIter_Next(__pyx_1);
    if (!__pyx_4) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 268; goto __pyx_L1;}
      break;
    }
    Py_DECREF(__pyx_v_i);
    __pyx_v_i = __pyx_4;
    __pyx_4 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":269 */
    __pyx_3 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_AnimSlot), 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 269; goto __pyx_L1;}
    Py_DECREF(((PyObject *)__pyx_v_slot));
    __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_3);
    __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":270 */
    __pyx_4 = PyObject_GetAttr(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->_anim_list, __pyx_n_append); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 270; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 270; goto __pyx_L1;}
    Py_INCREF(((PyObject *)__pyx_v_slot));
    PyTuple_SET_ITEM(__pyx_3, 0, ((PyObject *)__pyx_v_slot));
    __pyx_5 = PyObject_CallObject(__pyx_4, __pyx_3); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 270; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_5); __pyx_5 = 0;
  }
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":271 */
  __pyx_4 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_cAnimable *)((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->__pyx_vtab)->_modify_slots(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 271; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":273 */
  __pyx_7 = ((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->c_slot_count;
  for (__pyx_6 = 0; __pyx_6 < __pyx_7; ++__pyx_6) {
    __pyx_3 = PyInt_FromLong(__pyx_6); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 273; goto __pyx_L1;}
    Py_DECREF(__pyx_v_i);
    __pyx_v_i = __pyx_3;
    __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":274 */
    __pyx_5 = PyObject_GetItem(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->_anim_list, __pyx_v_i); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 274; goto __pyx_L1;}
    if (!__Pyx_TypeTest(__pyx_5, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 274; goto __pyx_L1;}
    Py_DECREF(((PyObject *)__pyx_v_slot));
    __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_5);
    __pyx_5 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":275 */
    __pyx_2 = PyInt_AsSsize_t(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 275; goto __pyx_L1;}
    (((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->c_anim_slots[__pyx_2]) = __pyx_v_slot->_slot;
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":277 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_set_anim_slot_locations); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 277; goto __pyx_L1;}
  __pyx_4 = PyObject_CallObject(__pyx_1, 0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 277; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt._anims.cAnimable.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_XDECREF(__pyx_v_args);
  Py_XDECREF(__pyx_v_kwargs);
  Py_DECREF(__pyx_v_slot);
  Py_DECREF(__pyx_v_i);
  Py_DECREF(__pyx_v_self);
  Py_XDECREF(__pyx_args);
  Py_XDECREF(__pyx_kwds);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_9cAnimable__modify_slots(struct __pyx_obj_6rabbyt_6_anims_cAnimable *__pyx_v_self) {
  PyObject *__pyx_r;
  Py_INCREF(__pyx_v_self);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static void __pyx_f_6rabbyt_6_anims_9cAnimable___dealloc__(PyObject *__pyx_v_self); /*proto*/
static void __pyx_f_6rabbyt_6_anims_9cAnimable___dealloc__(PyObject *__pyx_v_self) {
  int __pyx_1;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = (((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->c_anim_slots != NULL);
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":287 */
    free(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->c_anim_slots);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":288 */
    ((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->c_anim_slots = NULL;
    goto __pyx_L2;
  }
  __pyx_L2:;

  Py_DECREF(__pyx_v_self);
}

static PyObject *__pyx_f_6rabbyt_6_anims_9cAnimable_14anim_slot_list___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_9cAnimable_14anim_slot_list___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 292; goto __pyx_L1;}
  Py_INCREF(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->_anim_list);
  PyTuple_SET_ITEM(__pyx_1, 0, ((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->_anim_list);
  __pyx_2 = PyObject_CallObject(((PyObject *)(&PyList_Type)), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 292; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.cAnimable.anim_slot_list.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_9cAnimable_set_anim_slot_locations(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_9cAnimable_set_anim_slot_locations(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_slot;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  int __pyx_3;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF(__pyx_v_self);
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)Py_None); Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":296 */
  __pyx_1 = PyObject_GetIter(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)->_anim_list); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 296; goto __pyx_L1;}
  for (;;) {
    __pyx_2 = PyIter_Next(__pyx_1);
    if (!__pyx_2) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 296; goto __pyx_L1;}
      break;
    }
    if (!__Pyx_TypeTest(__pyx_2, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 296; goto __pyx_L1;}
    Py_DECREF(((PyObject *)__pyx_v_slot));
    __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_2);
    __pyx_2 = 0;
    __pyx_3 = (__pyx_v_slot->_slot->type >= 0);
    if (__pyx_3) {
      __pyx_v_slot->_slot->type = SLOT_LOCAL;
      goto __pyx_L4;
    }
    __pyx_L4:;
  }
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.cAnimable.set_anim_slot_locations");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_slot);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n___class__;
static PyObject *__pyx_n___base__;
static PyObject *__pyx_n__anim_slot_descriptor_names;
static PyObject *__pyx_n_get_slot;
static PyObject *__pyx_n_in_array;
static PyObject *__pyx_n_index;
static PyObject *__pyx_n_get_data_stride;
static PyObject *__pyx_n_get_data_ptr_addr;

static PyObject *__pyx_f_6rabbyt_6_anims_9cAnimable_set_anim_slot_locations_in_array(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_9cAnimable_set_anim_slot_locations_in_array(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_attr_names = 0;
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_slot;
  unsigned long __pyx_v_temp;
  PyObject *__pyx_v_name;
  PyObject *__pyx_v_array;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  PyObject *__pyx_5 = 0;
  unsigned long __pyx_6;
  static char *__pyx_argnames[] = {"attr_names",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_attr_names)) return 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_attr_names);
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)Py_None); Py_INCREF(Py_None);
  __pyx_v_name = Py_None; Py_INCREF(Py_None);
  __pyx_v_array = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":303 */
  __pyx_1 = PyObject_GetIter(__pyx_v_attr_names); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 303; goto __pyx_L1;}
  for (;;) {
    __pyx_2 = PyIter_Next(__pyx_1);
    if (!__pyx_2) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 303; goto __pyx_L1;}
      break;
    }
    Py_DECREF(__pyx_v_name);
    __pyx_v_name = __pyx_2;
    __pyx_2 = 0;
    __pyx_2 = PyObject_GetAttr(__pyx_v_self, __pyx_n___class__); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 304; goto __pyx_L1;}
    __pyx_3 = PyObject_GetAttr(__pyx_2, __pyx_n___base__); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 304; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_2 = PyObject_GetAttr(__pyx_3, __pyx_n__anim_slot_descriptor_names); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 304; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_4 = PySequence_Contains(__pyx_2, __pyx_v_name); if (__pyx_4 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 304; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    if (__pyx_4) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":305 */
      __pyx_3 = PyObject_GetAttr(__pyx_v_self, __pyx_n___class__); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 305; goto __pyx_L1;}
      __pyx_2 = PyObject_GetAttr(__pyx_3, __pyx_n___base__); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 305; goto __pyx_L1;}
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      __pyx_3 = PyObject_GetAttr(__pyx_2,__pyx_v_name); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 305; goto __pyx_L1;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      __pyx_2 = PyObject_GetAttr(__pyx_3, __pyx_n_get_slot); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 305; goto __pyx_L1;}
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 305; goto __pyx_L1;}
      Py_INCREF(__pyx_v_self);
      PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_self);
      __pyx_5 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 305; goto __pyx_L1;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      if (!__Pyx_TypeTest(__pyx_5, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 305; goto __pyx_L1;}
      Py_DECREF(((PyObject *)__pyx_v_slot));
      __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_5);
      __pyx_5 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":306 */
      __pyx_2 = PyObject_GetAttr(__pyx_v_self, __pyx_n_in_array); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 306; goto __pyx_L1;}
      __pyx_3 = PyObject_GetAttr(__pyx_2,__pyx_v_name); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 306; goto __pyx_L1;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      Py_DECREF(__pyx_v_array);
      __pyx_v_array = __pyx_3;
      __pyx_3 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":308 */
      __pyx_v_slot->_slot->type = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":309 */
      __pyx_5 = PyObject_GetAttr(__pyx_v_self, __pyx_n_in_array); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 309; goto __pyx_L1;}
      __pyx_2 = PyObject_GetAttr(__pyx_5, __pyx_n_index); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 309; goto __pyx_L1;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 309; goto __pyx_L1;}
      Py_INCREF(__pyx_v_self);
      PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_self);
      __pyx_5 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 309; goto __pyx_L1;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      __pyx_2 = PyObject_GetAttr(__pyx_v_array, __pyx_n_get_data_stride); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 310; goto __pyx_L1;}
      __pyx_3 = PyObject_CallObject(__pyx_2, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 310; goto __pyx_L1;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      __pyx_2 = PyNumber_Multiply(__pyx_5, __pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 309; goto __pyx_L1;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      __pyx_4 = PyInt_AsLong(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 309; goto __pyx_L1;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      __pyx_v_slot->_slot->offset = __pyx_4;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":311 */
      __pyx_5 = PyObject_GetAttr(__pyx_v_array, __pyx_n_get_data_ptr_addr); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 311; goto __pyx_L1;}
      __pyx_3 = PyObject_CallObject(__pyx_5, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 311; goto __pyx_L1;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      __pyx_6 = PyInt_AsUnsignedLongMask(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 311; goto __pyx_L1;}
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      __pyx_v_temp = __pyx_6;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":312 */
      __pyx_v_slot->_slot->base = ((void **)__pyx_v_temp);
      goto __pyx_L4;
    }
    __pyx_L4:;
  }
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt._anims.cAnimable.set_anim_slot_locations_in_array");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_slot);
  Py_DECREF(__pyx_v_name);
  Py_DECREF(__pyx_v_array);
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_attr_names);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_9anim_slot___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_9anim_slot___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_default = 0;
  PyObject *__pyx_v_doc = 0;
  PyObject *__pyx_v_index = 0;
  int __pyx_r;
  float __pyx_1;
  int __pyx_2;
  static char *__pyx_argnames[] = {"default","doc","index",0};
  __pyx_v_default = __pyx_k5;
  __pyx_v_doc = __pyx_k7;
  __pyx_v_index = __pyx_k8;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "|OOO", __pyx_argnames, &__pyx_v_default, &__pyx_v_doc, &__pyx_v_index)) return -1;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_default);
  Py_INCREF(__pyx_v_doc);
  Py_INCREF(__pyx_v_index);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":332 */
  __pyx_1 = PyFloat_AsDouble(__pyx_v_default); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 332; goto __pyx_L1;}
  ((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->default_value = __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":333 */
  __pyx_2 = PyInt_AsLong(__pyx_v_index); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 333; goto __pyx_L1;}
  ((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->index = __pyx_2;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":334 */
  Py_INCREF(__pyx_v_doc);
  Py_DECREF(((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->__doc__);
  ((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->__doc__ = __pyx_v_doc;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._anims.anim_slot.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_default);
  Py_DECREF(__pyx_v_doc);
  Py_DECREF(__pyx_v_index);
  return __pyx_r;
}

static PyObject *__pyx_k26p;

static char __pyx_k26[] = "Animable is not yet initialized.  Call Animable.__init__(self) first.  (Or Sprite.__init__)";

static PyObject *__pyx_f_6rabbyt_6_anims_9anim_slot___get__(PyObject *__pyx_v_self, PyObject *__pyx_v_obj, PyObject *__pyx_v_type_); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_9anim_slot___get__(PyObject *__pyx_v_self, PyObject *__pyx_v_obj, PyObject *__pyx_v_type_) {
  float __pyx_v_v;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_obj);
  Py_INCREF(__pyx_v_type_);
  if (!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_obj), __pyx_ptype_6rabbyt_6_anims_cAnimable, 1, "obj")) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 336; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":337 */
  __pyx_1 = __pyx_v_obj == Py_None;
  if (__pyx_1) {
    Py_INCREF(__pyx_v_self);
    __pyx_r = __pyx_v_self;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":339 */
  __pyx_1 = (((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->index == (-1));
  if (__pyx_1) {
    __Pyx_Raise(PyExc_RuntimeError, 0, 0);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 340; goto __pyx_L1;}
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":341 */
  __pyx_1 = (((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_obj)->c_anim_slots == NULL);
  if (__pyx_1) {
    __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 342; goto __pyx_L1;}
    Py_INCREF(__pyx_k26p);
    PyTuple_SET_ITEM(__pyx_2, 0, __pyx_k26p);
    __pyx_3 = PyObject_CallObject(PyExc_RuntimeError, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 342; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __Pyx_Raise(__pyx_3, 0, 0);
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 342; goto __pyx_L1;}
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":345 */
  READ_SLOT((((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_obj)->c_anim_slots[((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->index]),(&__pyx_v_v));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":346 */
  __pyx_2 = PyFloat_FromDouble(__pyx_v_v); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L1;}
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._anims.anim_slot.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_obj);
  Py_DECREF(__pyx_v_type_);
  return __pyx_r;
}

static PyObject *__pyx_n___get__;
static PyObject *__pyx_n_start;
static PyObject *__pyx_n_callable;

static PyObject *__pyx_k27p;

static char __pyx_k27[] = "Animable is not yet initialized.";

static int __pyx_f_6rabbyt_6_anims_9anim_slot___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_obj, PyObject *__pyx_v_value); /*proto*/
static int __pyx_f_6rabbyt_6_anims_9anim_slot___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_obj, PyObject *__pyx_v_value) {
  int __pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  float __pyx_4;
  PyObject *__pyx_5 = 0;
  PyObject *__pyx_6 = 0;
  PyObject *__pyx_7 = 0;
  PyObject *__pyx_8 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_obj);
  Py_INCREF(__pyx_v_value);
  if (!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_obj), __pyx_ptype_6rabbyt_6_anims_cAnimable, 0, "obj")) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 348; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":349 */
  __pyx_1 = (((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->index == (-1));
  if (__pyx_1) {
    __Pyx_Raise(PyExc_RuntimeError, 0, 0);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 350; goto __pyx_L1;}
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":351 */
  __pyx_1 = (((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_obj)->c_anim_slots == NULL);
  if (__pyx_1) {
    __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 352; goto __pyx_L1;}
    Py_INCREF(__pyx_k27p);
    PyTuple_SET_ITEM(__pyx_2, 0, __pyx_k27p);
    __pyx_3 = PyObject_CallObject(PyExc_RuntimeError, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 352; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __Pyx_Raise(__pyx_3, 0, 0);
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 352; goto __pyx_L1;}
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":353 */
  __pyx_1 = PyNumber_Check(__pyx_v_value);
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":354 */
    (((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_obj)->c_anim_slots[((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->index])->type = SLOT_LOCAL;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":355 */
    __pyx_4 = PyFloat_AsDouble(__pyx_v_value); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 355; goto __pyx_L1;}
    (((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_obj)->c_anim_slots[((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->index])->local = __pyx_4;
    goto __pyx_L4;
  }
  __pyx_1 = PyObject_IsInstance(__pyx_v_value,((PyObject *)__pyx_ptype_6rabbyt_6_anims_Anim)); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 356; goto __pyx_L1;}
  if (__pyx_1) {
    __pyx_2 = __Pyx_GetItemInt(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_obj)->_anim_list, ((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->index); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 357; goto __pyx_L1;}
    if (PyObject_SetAttr(__pyx_2, __pyx_n_anim, __pyx_v_value) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 357; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    goto __pyx_L4;
  }
  __pyx_1 = PyObject_IsInstance(__pyx_v_value,((PyObject *)__pyx_ptype_6rabbyt_6_anims_IncompleteAnimBase)); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 358; goto __pyx_L1;}
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":359 */
    __pyx_3 = PyObject_GetAttr(__pyx_v_value, __pyx_n_force_complete); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 359; goto __pyx_L1;}
    __pyx_2 = PyTuple_New(0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 359; goto __pyx_L1;}
    __pyx_5 = PyDict_New(); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 359; goto __pyx_L1;}
    __pyx_6 = PyObject_GetAttr(__pyx_v_self, __pyx_n___get__); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 359; goto __pyx_L1;}
    __pyx_7 = PyObject_GetAttr(__pyx_v_obj, __pyx_n___class__); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 359; goto __pyx_L1;}
    __pyx_8 = PyTuple_New(2); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 359; goto __pyx_L1;}
    Py_INCREF(__pyx_v_obj);
    PyTuple_SET_ITEM(__pyx_8, 0, __pyx_v_obj);
    PyTuple_SET_ITEM(__pyx_8, 1, __pyx_7);
    __pyx_7 = 0;
    __pyx_7 = PyObject_CallObject(__pyx_6, __pyx_8); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 359; goto __pyx_L1;}
    Py_DECREF(__pyx_6); __pyx_6 = 0;
    Py_DECREF(__pyx_8); __pyx_8 = 0;
    if (PyDict_SetItem(__pyx_5, __pyx_n_start, __pyx_7) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 359; goto __pyx_L1;}
    Py_DECREF(__pyx_7); __pyx_7 = 0;
    __pyx_6 = PyEval_CallObjectWithKeywords(__pyx_3, __pyx_2, __pyx_5); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 359; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    Py_DECREF(__pyx_v_value);
    __pyx_v_value = __pyx_6;
    __pyx_6 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":360 */
    __pyx_8 = __Pyx_GetItemInt(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_obj)->_anim_list, ((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->index); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 360; goto __pyx_L1;}
    if (PyObject_SetAttr(__pyx_8, __pyx_n_anim, __pyx_v_value) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 360; goto __pyx_L1;}
    Py_DECREF(__pyx_8); __pyx_8 = 0;
    goto __pyx_L4;
  }
  __pyx_7 = __Pyx_GetName(__pyx_b, __pyx_n_callable); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 361; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 361; goto __pyx_L1;}
  Py_INCREF(__pyx_v_value);
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_value);
  __pyx_2 = PyObject_CallObject(__pyx_7, __pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 361; goto __pyx_L1;}
  Py_DECREF(__pyx_7); __pyx_7 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_1 = PyObject_IsTrue(__pyx_2); if (__pyx_1 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 361; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  if (__pyx_1) {
    __pyx_5 = PyTuple_New(1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 362; goto __pyx_L1;}
    Py_INCREF(__pyx_v_value);
    PyTuple_SET_ITEM(__pyx_5, 0, __pyx_v_value);
    __pyx_6 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_AnimPyFunc), __pyx_5); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 362; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_8 = __Pyx_GetItemInt(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_obj)->_anim_list, ((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->index); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 362; goto __pyx_L1;}
    if (PyObject_SetAttr(__pyx_8, __pyx_n_anim, __pyx_6) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 362; goto __pyx_L1;}
    Py_DECREF(__pyx_6); __pyx_6 = 0;
    Py_DECREF(__pyx_8); __pyx_8 = 0;
    goto __pyx_L4;
  }
  /*else*/ {
    __pyx_7 = PyObject_CallObject(PyExc_ValueError, 0); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 364; goto __pyx_L1;}
    __Pyx_Raise(__pyx_7, 0, 0);
    Py_DECREF(__pyx_7); __pyx_7 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 364; goto __pyx_L1;}
  }
  __pyx_L4:;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_5);
  Py_XDECREF(__pyx_6);
  Py_XDECREF(__pyx_7);
  Py_XDECREF(__pyx_8);
  __Pyx_AddTraceback("rabbyt._anims.anim_slot.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_obj);
  Py_DECREF(__pyx_v_value);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_9anim_slot_get_slot(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_9anim_slot_get_slot(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  struct __pyx_obj_6rabbyt_6_anims_cAnimable *__pyx_v_obj = 0;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {"obj",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_obj)) return 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_obj);
  if (!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_obj), __pyx_ptype_6rabbyt_6_anims_cAnimable, 0, "obj")) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 366; goto __pyx_L1;}
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_obj->_anim_list, ((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)__pyx_v_self)->index); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 367; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.anim_slot.get_slot");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_obj);
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__anim_const_func(AnimSlot_s *__pyx_v_slot) {
  float __pyx_r;
  __pyx_r = (((float *)__pyx_v_slot->anim->data)[0]);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_9AnimConst___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_9AnimConst___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  float __pyx_v_v;
  int __pyx_r;
  static char *__pyx_argnames[] = {"v",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "f", __pyx_argnames, &__pyx_v_v)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":384 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimConst *)__pyx_v_self)->v = __pyx_v_v;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":385 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimConst *)__pyx_v_self)->__pyx_base._anim.data = (&((struct __pyx_obj_6rabbyt_6_anims_AnimConst *)__pyx_v_self)->v);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":386 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimConst *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__anim_const_func);

  __pyx_r = 0;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_ctypes;
static PyObject *__pyx_n_addressof;
static PyObject *__pyx_n_contents;


static int __pyx_f_6rabbyt_6_anims_11AnimPointer___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_11AnimPointer___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_pointer = 0;
  PyObject *__pyx_v_owner = 0;
  unsigned long __pyx_v_address;
  PyObject *__pyx_v_ctypes;
  int __pyx_r;
  int __pyx_1;
  unsigned long __pyx_2;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  static char *__pyx_argnames[] = {"pointer","owner",0};
  __pyx_v_owner = __pyx_k9;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O|O", __pyx_argnames, &__pyx_v_pointer, &__pyx_v_owner)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_pointer);
  Py_INCREF(__pyx_v_owner);
  __pyx_v_ctypes = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":413 */
  __pyx_1 = __pyx_v_owner == Py_None;
  if (__pyx_1) {
    Py_INCREF(__pyx_v_pointer);
    Py_DECREF(__pyx_v_owner);
    __pyx_v_owner = __pyx_v_pointer;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":415 */
  __pyx_1 = PyNumber_Check(__pyx_v_pointer);
  if (__pyx_1) {
    __pyx_2 = PyInt_AsUnsignedLongMask(__pyx_v_pointer); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 416; goto __pyx_L1;}
    __pyx_v_address = __pyx_2;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":418 */
    __pyx_3 = __Pyx_Import(__pyx_n_ctypes, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 418; goto __pyx_L1;}
    Py_DECREF(__pyx_v_ctypes);
    __pyx_v_ctypes = __pyx_3;
    __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":419 */
    __pyx_3 = PyObject_GetAttr(__pyx_v_ctypes, __pyx_n_addressof); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 419; goto __pyx_L1;}
    __pyx_4 = PyObject_GetAttr(__pyx_v_pointer, __pyx_n_contents); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 419; goto __pyx_L1;}
    __pyx_5 = PyTuple_New(1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 419; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_5, 0, __pyx_4);
    __pyx_4 = 0;
    __pyx_4 = PyObject_CallObject(__pyx_3, __pyx_5); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 419; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_2 = PyInt_AsUnsignedLongMask(__pyx_4); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 419; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    __pyx_v_address = __pyx_2;
  }
  __pyx_L3:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":420 */
  Py_INCREF(__pyx_v_owner);
  Py_DECREF(((struct __pyx_obj_6rabbyt_6_anims_AnimPointer *)__pyx_v_self)->_owner);
  ((struct __pyx_obj_6rabbyt_6_anims_AnimPointer *)__pyx_v_self)->_owner = __pyx_v_owner;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":421 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimPointer *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__anim_const_func);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":422 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimPointer *)__pyx_v_self)->__pyx_base._anim.data = ((void *)__pyx_v_address);

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt._anims.AnimPointer.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_ctypes);
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_pointer);
  Py_DECREF(__pyx_v_owner);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_11AnimPointer_5owner___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_11AnimPointer_5owner___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(((struct __pyx_obj_6rabbyt_6_anims_AnimPointer *)__pyx_v_self)->_owner);
  __pyx_r = ((struct __pyx_obj_6rabbyt_6_anims_AnimPointer *)__pyx_v_self)->_owner;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n___init__;
static PyObject *__pyx_n_lerp;
static PyObject *__pyx_n_ease_quad;
static PyObject *__pyx_n_ease_cubic;
static PyObject *__pyx_n_ease_circ;
static PyObject *__pyx_n_ease_back;
static PyObject *__pyx_n_ease_sine;
static PyObject *__pyx_n_ease_bounce;
static PyObject *__pyx_n_ease_in_sine;
static PyObject *__pyx_n_ease_in_quad;
static PyObject *__pyx_n_ease_in_cubic;
static PyObject *__pyx_n_ease_in_exponential;
static PyObject *__pyx_n_ease_in_circ;
static PyObject *__pyx_n_ease_in_back;
static PyObject *__pyx_n_ease_in_bounce;
static PyObject *__pyx_n_ease_out_quad;
static PyObject *__pyx_n_ease_out_cubic;
static PyObject *__pyx_n_ease_out_sine;
static PyObject *__pyx_n_ease_out_circ;
static PyObject *__pyx_n_ease_out_back;
static PyObject *__pyx_n_ease_out_bounce;
static PyObject *__pyx_n_constant;
static PyObject *__pyx_n_extrapolate;
static PyObject *__pyx_n_repeat;
static PyObject *__pyx_n_reverse;


static int __pyx_f_6rabbyt_6_anims_15InterpolateAnim___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_15InterpolateAnim___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_method = 0;
  PyObject *__pyx_v_start = 0;
  PyObject *__pyx_v_end = 0;
  PyObject *__pyx_v_extend = 0;
  float __pyx_v_startt;
  float __pyx_v_endt;
  PyObject *__pyx_v_t = 0;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  static char *__pyx_argnames[] = {"method","start","end","extend","startt","endt","t",0};
  __pyx_v_startt = __pyx_k10;
  __pyx_v_endt = __pyx_k11;
  __pyx_v_t = __pyx_k12;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOOO|ffO", __pyx_argnames, &__pyx_v_method, &__pyx_v_start, &__pyx_v_end, &__pyx_v_extend, &__pyx_v_startt, &__pyx_v_endt, &__pyx_v_t)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_method);
  Py_INCREF(__pyx_v_start);
  Py_INCREF(__pyx_v_end);
  Py_INCREF(__pyx_v_extend);
  Py_INCREF(__pyx_v_t);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":433 */
  __pyx_1 = PyObject_GetAttr(((PyObject *)__pyx_ptype_6rabbyt_6_anims_Anim), __pyx_n___init__); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 433; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 433; goto __pyx_L1;}
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_self);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 433; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":435 */
  ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.start_time = __pyx_v_startt;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":436 */
  ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.end_time = __pyx_v_endt;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":438 */
  ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.one_over_dt = (1 / ((float)(__pyx_v_endt - __pyx_v_startt)));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":440 */
  __pyx_4 = __pyx_v_t == Py_None;
  if (__pyx_4) {
    __pyx_4 = PyInt_AsLong(Py_True); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 441; goto __pyx_L1;}
    ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.use_global_time = __pyx_4;
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":443 */
    __pyx_4 = PyInt_AsLong(Py_False); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 443; goto __pyx_L1;}
    ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.use_global_time = __pyx_4;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":444 */
    __pyx_4 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_InterpolateAnim *)((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->__pyx_base.__pyx_vtab)->__pyx_base.add_dependency(((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self),__pyx_v_t,(&((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.t)); if (__pyx_4 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 444; goto __pyx_L1;}
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":446 */
  __pyx_4 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_InterpolateAnim *)((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->__pyx_base.__pyx_vtab)->__pyx_base.add_dependency(((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self),__pyx_v_start,(&((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.start)); if (__pyx_4 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 446; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":447 */
  __pyx_4 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_InterpolateAnim *)((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->__pyx_base.__pyx_vtab)->__pyx_base.add_dependency(((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self),__pyx_v_end,(&((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.end)); if (__pyx_4 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 447; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":449 */
  ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->__pyx_base._anim.data = (&((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":451 */
  ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->__pyx_base._anim.func = interpolate_func;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":476 */
  __pyx_1 = PyDict_New(); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  __pyx_2 = PyInt_FromLong(INTER_LERP); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 454; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_lerp, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyInt_FromLong(INTER_IN_OUT_QUAD); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 456; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_quad, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(INTER_IN_OUT_CUBIC); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 457; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_cubic, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyInt_FromLong(INTER_IN_OUT_CIRC); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 458; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_circ, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(INTER_IN_OUT_BACK); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 459; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_back, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyInt_FromLong(INTER_IN_OUT_SINE); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 460; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_sine, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(INTER_IN_OUT_BOUNCE); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 461; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_bounce, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyInt_FromLong(INTER_IN_SINE); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 463; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_in_sine, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(INTER_IN_QUAD); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 464; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_in_quad, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyInt_FromLong(INTER_IN_CUBIC); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 465; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_in_cubic, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(INTER_EXPONENTIAL); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 466; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_in_exponential, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyInt_FromLong(INTER_IN_CIRC); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 467; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_in_circ, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(INTER_IN_BACK); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 468; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_in_back, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyInt_FromLong(INTER_IN_BOUNCE); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 469; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_in_bounce, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(INTER_OUT_QUAD); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 471; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_out_quad, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyInt_FromLong(INTER_OUT_CUBIC); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 472; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_out_cubic, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(INTER_OUT_SINE); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 473; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_out_sine, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyInt_FromLong(INTER_OUT_CIRC); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 474; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_out_circ, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(INTER_OUT_BACK); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 475; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_out_back, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyInt_FromLong(INTER_OUT_BOUNCE); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 476; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_1, __pyx_n_ease_out_bounce, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 453; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyObject_GetItem(__pyx_1, __pyx_v_method); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 476; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_4 = PyInt_AsLong(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 476; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.inter_mode = __pyx_4;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":482 */
  __pyx_3 = PyDict_New(); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 478; goto __pyx_L1;}
  __pyx_1 = PyInt_FromLong(EXTEND_CONSTANT); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 479; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_3, __pyx_n_constant, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 478; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_2 = PyInt_FromLong(EXTEND_EXTRAPOLATE); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 480; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_3, __pyx_n_extrapolate, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 478; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_1 = PyInt_FromLong(EXTEND_REPEAT); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 481; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_3, __pyx_n_repeat, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 478; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_2 = PyInt_FromLong(EXTEND_REVERSE); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 482; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_3, __pyx_n_reverse, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 478; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_1 = PyObject_GetItem(__pyx_3, __pyx_v_extend); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 482; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_4 = PyInt_AsLong(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 482; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.extend_mode = __pyx_4;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":484 */
  Py_INCREF(__pyx_v_method);
  Py_DECREF(((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->method_name);
  ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->method_name = __pyx_v_method;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._anims.InterpolateAnim.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_method);
  Py_DECREF(__pyx_v_start);
  Py_DECREF(__pyx_v_end);
  Py_DECREF(__pyx_v_extend);
  Py_DECREF(__pyx_v_t);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_5start___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_5start___get__(PyObject *__pyx_v_self) {
  float __pyx_v_x;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":489 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.start),(&__pyx_v_x));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":490 */
  __pyx_1 = PyFloat_FromDouble(__pyx_v_x); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 490; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.InterpolateAnim.start.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_3end___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_3end___get__(PyObject *__pyx_v_self) {
  float __pyx_v_x;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":495 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.end),(&__pyx_v_x));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":496 */
  __pyx_1 = PyFloat_FromDouble(__pyx_v_x); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 496; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.InterpolateAnim.end.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_6startt___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_6startt___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.start_time); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 500; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.InterpolateAnim.startt.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_4endt___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_4endt___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.end_time); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 504; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.InterpolateAnim.endt.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_2dt___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_2dt___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble((((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.end_time - ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.start_time)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 508; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.InterpolateAnim.dt.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_k54p;

static char __pyx_k54[] = "<InterpolateAnim %s>";

static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim___repr__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim___repr__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyNumber_Remainder(__pyx_k54p, ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->method_name); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 513; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.InterpolateAnim.__repr__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_8end_time___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_15InterpolateAnim_8end_time___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)__pyx_v_self)->_data.end_time); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 517; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.InterpolateAnim.end_time.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__on_end_chain(AnimSlot_s *__pyx_v_slot,void *__pyx_v_data,float __pyx_v_end) {
  int __pyx_v_i;
  float __pyx_v_time;
  __pyx_t_6rabbyt_6_anims_chain_data_s *__pyx_v_d;
  float __pyx_r;
  int __pyx_1;
  int __pyx_2;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":530 */
  __pyx_v_time = _get_time();

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":532 */
  __pyx_v_d = ((__pyx_t_6rabbyt_6_anims_chain_data_s *)__pyx_v_data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":534 */
  __pyx_1 = __pyx_v_d->link_count;
  for (__pyx_v_i = 0; __pyx_v_i < __pyx_1; ++__pyx_v_i) {
    __pyx_2 = ((__pyx_v_d->links[__pyx_v_i]).end_time > __pyx_v_time);
    if (__pyx_2) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":536 */
      __pyx_v_slot->anim->func = (__pyx_v_d->links[__pyx_v_i]).anim.func;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":537 */
      __pyx_v_slot->anim->data = (__pyx_v_d->links[__pyx_v_i]).anim.data;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":538 */
      __pyx_r = __pyx_v_slot->anim->func(__pyx_v_slot);
      goto __pyx_L0;
      goto __pyx_L4;
    }
    __pyx_L4:;
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":539 */
  __pyx_v_slot->anim->func = (__pyx_v_d->links[(__pyx_v_d->link_count - 1)]).anim.func;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":540 */
  __pyx_v_slot->anim->data = (__pyx_v_d->links[(__pyx_v_d->link_count - 1)]).anim.data;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":541 */
  __pyx_v_slot->anim->on_end = __pyx_f_6rabbyt_6_anims__on_end_clear;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":542 */
  __pyx_v_slot->anim->on_end_data = NULL;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":543 */
  __pyx_r = __pyx_v_slot->anim->func(__pyx_v_slot);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_n_end_time;

static int __pyx_f_6rabbyt_6_anims_9ChainAnim___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_9ChainAnim___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_anims = 0;
  int __pyx_v_i;
  struct __pyx_obj_6rabbyt_6_anims_Anim *__pyx_v_anim;
  int __pyx_r;
  Py_ssize_t __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  float __pyx_5;
  static char *__pyx_argnames[] = {"anims",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_anims)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_anims);
  __pyx_v_anim = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)Py_None); Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":552 */
  #ifndef PYREX_WITHOUT_ASSERTIONS
  __pyx_1 = PyObject_Length(__pyx_v_anims); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 552; goto __pyx_L1;}
  if (!__pyx_1) {
    PyErr_SetNone(PyExc_AssertionError);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 552; goto __pyx_L1;}
  }
  #endif

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":553 */
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 553; goto __pyx_L1;}
  Py_INCREF(__pyx_v_anims);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_anims);
  __pyx_3 = PyObject_CallObject(((PyObject *)(&PyList_Type)), __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 553; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->_anims);
  ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->_anims = __pyx_3;
  __pyx_3 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":554 */
  __pyx_1 = PyObject_Length(((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->_anims); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 554; goto __pyx_L1;}
  ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.link_count = __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":555 */
  ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.links = ((__pyx_t_6rabbyt_6_anims_chain_link_s *)malloc(((sizeof(__pyx_t_6rabbyt_6_anims_chain_link_s)) * ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.link_count)));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":558 */
  __pyx_4 = ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.link_count;
  for (__pyx_v_i = 0; __pyx_v_i < __pyx_4; ++__pyx_v_i) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":559 */
    __pyx_2 = __Pyx_GetItemInt(((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->_anims, __pyx_v_i); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 559; goto __pyx_L1;}
    if (!__Pyx_TypeTest(__pyx_2, __pyx_ptype_6rabbyt_6_anims_Anim)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 559; goto __pyx_L1;}
    Py_DECREF(((PyObject *)__pyx_v_anim));
    __pyx_v_anim = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_2);
    __pyx_2 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":560 */
    (((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.links[__pyx_v_i]).anim = __pyx_v_anim->_anim;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":561 */
    __pyx_3 = PyObject_GetAttr(((PyObject *)__pyx_v_anim), __pyx_n_end_time); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 561; goto __pyx_L1;}
    __pyx_5 = PyFloat_AsDouble(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 561; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    (((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.links[__pyx_v_i]).end_time = __pyx_5;
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":562 */
  ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->__pyx_base._anim.on_end = __pyx_f_6rabbyt_6_anims__on_end_chain;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":563 */
  ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->__pyx_base._anim.on_end_data = (&((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":565 */
  ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->__pyx_base._anim.func = (((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.links[0]).anim.func;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":566 */
  ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->__pyx_base._anim.data = (((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.links[0]).anim.data;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._anims.ChainAnim.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_anim);
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_anims);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_9ChainAnim_5anims___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_9ChainAnim_5anims___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 570; goto __pyx_L1;}
  Py_INCREF(((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->_anims);
  PyTuple_SET_ITEM(__pyx_1, 0, ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->_anims);
  __pyx_2 = PyObject_CallObject(((PyObject *)(&PyList_Type)), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 570; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims.ChainAnim.anims.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_9ChainAnim___dealloc___(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_9ChainAnim___dealloc___(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  int __pyx_1;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = (((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.links != NULL);
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":574 */
    free(((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.links);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":575 */
    ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)__pyx_v_self)->chain_data.links = NULL;
    goto __pyx_L2;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims_extend_t(float __pyx_v_t,int __pyx_v_mode) {
  float __pyx_r;
  int __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":579 */
  __pyx_1 = (__pyx_v_mode == 1);
  if (__pyx_1) {
    __pyx_1 = (__pyx_v_t < 0);
    if (__pyx_1) {
      __pyx_v_t = 0;
      goto __pyx_L3;
    }
    __pyx_1 = (__pyx_v_t > 1);
    if (__pyx_1) {
      __pyx_v_t = 1;
      goto __pyx_L3;
    }
    __pyx_L3:;
    goto __pyx_L2;
  }
  __pyx_1 = (__pyx_v_mode == 2);
  if (__pyx_1) {
    goto __pyx_L2;
  }
  __pyx_1 = (__pyx_v_mode == 3);
  if (__pyx_1) {
    __pyx_1 = (__pyx_v_t > 1.00001);
    if (__pyx_1) {
      __pyx_v_t = (__pyx_v_t - ((int)__pyx_v_t));
      goto __pyx_L4;
    }
    __pyx_1 = (__pyx_v_t < 0);
    if (__pyx_1) {
      __pyx_v_t = ((1 + __pyx_v_t) - ((int)__pyx_v_t));
      goto __pyx_L4;
    }
    __pyx_L4:;
    goto __pyx_L2;
  }
  __pyx_1 = (__pyx_v_mode == 4);
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":592 */
    __pyx_1 = (__pyx_v_t < 0);
    if (__pyx_1) {
      __pyx_v_t = (-__pyx_v_t);
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":594 */
    __pyx_1 = ((((int)__pyx_v_t) % 2) == 1);
    if (__pyx_1) {
      __pyx_v_t = (1 - (__pyx_v_t - ((int)__pyx_v_t)));
      goto __pyx_L6;
    }
    /*else*/ {
      __pyx_v_t = (__pyx_v_t - ((int)__pyx_v_t));
    }
    __pyx_L6:;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":598 */
  __pyx_r = __pyx_v_t;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__static_bezier3_func(AnimSlot_s *__pyx_v_slot) {
  float __pyx_v_t;
  float __pyx_v_t2;
  float __pyx_v_t3;
  __pyx_t_6rabbyt_6_anims_static_bezier3_data_s *__pyx_v_d;
  float __pyx_r;
  int __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":613 */
  __pyx_v_d = ((__pyx_t_6rabbyt_6_anims_static_bezier3_data_s *)__pyx_v_slot->anim->data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":614 */
  __pyx_1 = __pyx_v_d->use_global_time;
  if (__pyx_1) {
    __pyx_v_t = __pyx_f_6rabbyt_6_anims_extend_t(((_get_time() - __pyx_v_d->startt) * __pyx_v_d->one_over_dt),__pyx_v_d->extend);
    goto __pyx_L2;
  }
  /*else*/ {
    READ_SLOT((&__pyx_v_d->t),(&__pyx_v_t));
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":618 */
  __pyx_v_t2 = (__pyx_v_t * __pyx_v_t);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":619 */
  __pyx_v_t3 = (__pyx_v_t2 * __pyx_v_t);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":620 */
  __pyx_r = ((((__pyx_v_d->a * __pyx_v_t3) + (__pyx_v_d->b * __pyx_v_t2)) + (__pyx_v_d->c * __pyx_v_t)) + __pyx_v_d->p0);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_21AnimStaticCubicBezier___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_21AnimStaticCubicBezier___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  float __pyx_v_p0;
  float __pyx_v_p1;
  float __pyx_v_p2;
  float __pyx_v_p3;
  float __pyx_v_startt;
  float __pyx_v_endt;
  PyObject *__pyx_v_t = 0;
  int __pyx_v_extend;
  int __pyx_r;
  int __pyx_1;
  static char *__pyx_argnames[] = {"p0","p1","p2","p3","startt","endt","t","extend",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "ffffffOi", __pyx_argnames, &__pyx_v_p0, &__pyx_v_p1, &__pyx_v_p2, &__pyx_v_p3, &__pyx_v_startt, &__pyx_v_endt, &__pyx_v_t, &__pyx_v_extend)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_t);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":627 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.p0 = __pyx_v_p0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":628 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.startt = __pyx_v_startt;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":629 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.endt = __pyx_v_endt;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":630 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.extend = __pyx_v_extend;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":631 */
  __pyx_1 = __pyx_v_t == Py_None;
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":632 */
    __pyx_1 = PyInt_AsLong(Py_True); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 632; goto __pyx_L1;}
    ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.use_global_time = __pyx_1;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":633 */
    ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.one_over_dt = (1 / ((float)(__pyx_v_endt - __pyx_v_startt)));
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":635 */
    __pyx_1 = PyInt_AsLong(Py_False); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 635; goto __pyx_L1;}
    ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.use_global_time = __pyx_1;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":636 */
    ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.one_over_dt = 1;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":637 */
    __pyx_1 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_AnimStaticCubicBezier *)((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->__pyx_base.__pyx_vtab)->__pyx_base.add_dependency(((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self),__pyx_v_t,(&((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.t)); if (__pyx_1 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 637; goto __pyx_L1;}
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":638 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.c = (3.0 * (__pyx_v_p1 - __pyx_v_p0));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":639 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.b = ((3.0 * (__pyx_v_p2 - __pyx_v_p1)) - ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.c);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":640 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.a = (((__pyx_v_p3 - __pyx_v_p0) - ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.c) - ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data.b);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":641 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__static_bezier3_func);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":642 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->__pyx_base._anim.data = (&((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)__pyx_v_self)->_data);

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._anims.AnimStaticCubicBezier.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_t);
  return __pyx_r;
}

static PyObject *__pyx_n_startt;
static PyObject *__pyx_n_one_over_dt;
static PyObject *__pyx_n_extend;
static PyObject *__pyx_n_a;
static PyObject *__pyx_n_b;
static PyObject *__pyx_n_c;
static PyObject *__pyx_n_p0;

static float __pyx_f_6rabbyt_6_anims_21AnimStaticCubicBezier_g(struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *__pyx_v_self) {
  float __pyx_v_t;
  float __pyx_v_t2;
  float __pyx_v_t3;
  float __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  float __pyx_4;
  int __pyx_5;
  PyObject *__pyx_6 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":646 */
  __pyx_1 = PyFloat_FromDouble(_get_time()); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 646; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(((PyObject *)__pyx_v_self), __pyx_n_startt); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 646; goto __pyx_L1;}
  __pyx_3 = PyNumber_Subtract(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 646; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_1 = PyObject_GetAttr(((PyObject *)__pyx_v_self), __pyx_n_one_over_dt); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 646; goto __pyx_L1;}
  __pyx_2 = PyNumber_Multiply(__pyx_3, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 646; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_4 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 646; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyObject_GetAttr(((PyObject *)__pyx_v_self), __pyx_n_extend); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 646; goto __pyx_L1;}
  __pyx_5 = PyInt_AsLong(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 646; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_v_t = __pyx_f_6rabbyt_6_anims_extend_t(__pyx_4,__pyx_5);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":647 */
  __pyx_v_t2 = (__pyx_v_t * __pyx_v_t);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":648 */
  __pyx_v_t3 = (__pyx_v_t2 * __pyx_v_t);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":649 */
  __pyx_1 = PyObject_GetAttr(((PyObject *)__pyx_v_self), __pyx_n_a); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  __pyx_2 = PyFloat_FromDouble(__pyx_v_t3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  __pyx_3 = PyNumber_Multiply(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_1 = PyObject_GetAttr(((PyObject *)__pyx_v_self), __pyx_n_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  __pyx_2 = PyFloat_FromDouble(__pyx_v_t2); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  __pyx_6 = PyNumber_Multiply(__pyx_1, __pyx_2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_1 = PyNumber_Add(__pyx_3, __pyx_6); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  __pyx_2 = PyObject_GetAttr(((PyObject *)__pyx_v_self), __pyx_n_c); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  __pyx_3 = PyFloat_FromDouble(__pyx_v_t); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  __pyx_6 = PyNumber_Multiply(__pyx_2, __pyx_3); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyNumber_Add(__pyx_1, __pyx_6); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  __pyx_3 = PyObject_GetAttr(((PyObject *)__pyx_v_self), __pyx_n_p0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  __pyx_1 = PyNumber_Add(__pyx_2, __pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_4 = PyFloat_AsDouble(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 649; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_4;
  goto __pyx_L0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_6);
  __Pyx_WriteUnraisable("rabbyt._anims.AnimStaticCubicBezier.g");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__slot_reader_func(AnimSlot_s *__pyx_v_slot) {
  float __pyx_v_v;
  float __pyx_r;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":653 */
  READ_SLOT((((AnimSlot_s **)__pyx_v_slot->anim->data)[0]),(&__pyx_v_v));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":654 */
  __pyx_r = __pyx_v_v;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_14AnimSlotReader___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_14AnimSlotReader___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_read_slot = 0;
  AnimSlot_s **__pyx_v__slot;
  int __pyx_r;
  static char *__pyx_argnames[] = {"read_slot",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_read_slot)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_read_slot);
  if (!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_read_slot), __pyx_ptype_6rabbyt_6_anims_AnimSlot, 0, "read_slot")) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 658; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":659 */
  Py_INCREF(((PyObject *)__pyx_v_read_slot));
  Py_DECREF(((PyObject *)((struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *)__pyx_v_self)->read_slot));
  ((struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *)__pyx_v_self)->read_slot = __pyx_v_read_slot;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":661 */
  __pyx_v__slot = (&((struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *)__pyx_v_self)->read_slot->_slot);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":662 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *)__pyx_v_self)->__pyx_base._anim.data = __pyx_v__slot;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":663 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__slot_reader_func);

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._anims.AnimSlotReader.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_read_slot);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_8AnimWrap___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_8AnimWrap___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_bounds = 0;
  PyObject *__pyx_v_parent = 0;
  PyObject *__pyx_v_static = 0;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  float __pyx_5;
  static char *__pyx_argnames[] = {"bounds","parent","static",0};
  __pyx_v_static = __pyx_k13;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO|O", __pyx_argnames, &__pyx_v_bounds, &__pyx_v_parent, &__pyx_v_static)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_bounds);
  Py_INCREF(__pyx_v_parent);
  Py_INCREF(__pyx_v_static);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":692 */
  __pyx_1 = PyObject_GetAttr(((PyObject *)__pyx_ptype_6rabbyt_6_anims_Anim), __pyx_n___init__); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 692; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 692; goto __pyx_L1;}
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_self);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 692; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":693 */
  __pyx_1 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_AnimSlot), 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 693; goto __pyx_L1;}
  Py_DECREF(((PyObject *)((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->input_slot));
  ((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->input_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":694 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->input_slot->_slot = (&((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->_data.input);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":696 */
  if (PyObject_SetAttr(((PyObject *)((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->input_slot), __pyx_n_anim, __pyx_v_parent) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 696; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":698 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->__pyx_base._anim.data = (&((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->_data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":699 */
  __pyx_4 = PyObject_IsTrue(__pyx_v_static); if (__pyx_4 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 699; goto __pyx_L1;}
  if (__pyx_4) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":700 */
    __pyx_2 = __Pyx_GetItemInt(__pyx_v_bounds, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 700; goto __pyx_L1;}
    __pyx_5 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 700; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    ((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->_data.a = __pyx_5;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":701 */
    __pyx_3 = __Pyx_GetItemInt(__pyx_v_bounds, 1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 701; goto __pyx_L1;}
    __pyx_5 = PyFloat_AsDouble(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 701; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    ((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->_data.b = __pyx_5;
    goto __pyx_L2;
  }
  /*else*/ {
    __Pyx_Raise(PyExc_NotImplementedError, 0, 0);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 703; goto __pyx_L1;}
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":704 */
  __pyx_4 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_AnimWrap *)((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->__pyx_base.__pyx_vtab)->__pyx_base.add_dependency(((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self),__pyx_v_parent,(&((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->_data.input)); if (__pyx_4 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 704; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":705 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__wrap_func);

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._anims.AnimWrap.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_bounds);
  Py_DECREF(__pyx_v_parent);
  Py_DECREF(__pyx_v_static);
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__wrap_func(AnimSlot_s *__pyx_v_slot) {
  struct __pyx_t_6rabbyt_6_anims_wrap_data *__pyx_v_data;
  float __pyx_v_b1;
  float __pyx_v_b2;
  float __pyx_v_d;
  float __pyx_v_p;
  float __pyx_r;
  int __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":709 */
  __pyx_v_data = ((struct __pyx_t_6rabbyt_6_anims_wrap_data *)__pyx_v_slot->anim->data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":711 */
  __pyx_v_b1 = __pyx_v_data->a;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":712 */
  __pyx_v_b2 = __pyx_v_data->b;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":714 */
  READ_SLOT((&__pyx_v_data->input),(&__pyx_v_p));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":716 */
  __pyx_v_d = (__pyx_v_b2 - __pyx_v_b1);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":718 */
  __pyx_v_p = fmodf((__pyx_v_p - fmodf(__pyx_v_b1,__pyx_v_d)),__pyx_v_d);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":719 */
  __pyx_1 = (__pyx_v_p < 0);
  if (__pyx_1) {
    __pyx_v_p = (__pyx_v_p + __pyx_v_d);
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":722 */
  __pyx_r = (__pyx_v_p + __pyx_v_b1);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__add_func(AnimSlot_s *__pyx_v_slot) {
  float __pyx_v_a;
  float __pyx_v_b;
  struct __pyx_t_6rabbyt_6_anims_op_data *__pyx_v_data;
  float __pyx_r;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":731 */
  __pyx_v_data = ((struct __pyx_t_6rabbyt_6_anims_op_data *)__pyx_v_slot->anim->data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":732 */
  READ_SLOT((&__pyx_v_data->a),(&__pyx_v_a));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":733 */
  READ_SLOT((&__pyx_v_data->b),(&__pyx_v_b));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":734 */
  __pyx_r = (__pyx_v_a + __pyx_v_b);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__sub_func(AnimSlot_s *__pyx_v_slot) {
  float __pyx_v_a;
  float __pyx_v_b;
  struct __pyx_t_6rabbyt_6_anims_op_data *__pyx_v_data;
  float __pyx_r;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":739 */
  __pyx_v_data = ((struct __pyx_t_6rabbyt_6_anims_op_data *)__pyx_v_slot->anim->data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":740 */
  READ_SLOT((&__pyx_v_data->a),(&__pyx_v_a));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":741 */
  READ_SLOT((&__pyx_v_data->b),(&__pyx_v_b));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":742 */
  __pyx_r = (__pyx_v_a - __pyx_v_b);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__mul_func(AnimSlot_s *__pyx_v_slot) {
  float __pyx_v_a;
  float __pyx_v_b;
  struct __pyx_t_6rabbyt_6_anims_op_data *__pyx_v_data;
  float __pyx_r;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":747 */
  __pyx_v_data = ((struct __pyx_t_6rabbyt_6_anims_op_data *)__pyx_v_slot->anim->data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":748 */
  READ_SLOT((&__pyx_v_data->a),(&__pyx_v_a));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":749 */
  READ_SLOT((&__pyx_v_data->b),(&__pyx_v_b));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":750 */
  __pyx_r = (__pyx_v_a * __pyx_v_b);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__div_func(AnimSlot_s *__pyx_v_slot) {
  float __pyx_v_a;
  float __pyx_v_b;
  struct __pyx_t_6rabbyt_6_anims_op_data *__pyx_v_data;
  float __pyx_r;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":755 */
  __pyx_v_data = ((struct __pyx_t_6rabbyt_6_anims_op_data *)__pyx_v_slot->anim->data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":756 */
  READ_SLOT((&__pyx_v_data->a),(&__pyx_v_a));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":757 */
  READ_SLOT((&__pyx_v_data->b),(&__pyx_v_b));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":758 */
  __pyx_r = (__pyx_v_a / __pyx_v_b);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_k59p;

static char __pyx_k59[] = "Unknown arithmetic operation";

static int __pyx_f_6rabbyt_6_anims_14ArithmeticAnim___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_14ArithmeticAnim___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_operation = 0;
  PyObject *__pyx_v_a = 0;
  PyObject *__pyx_v_b = 0;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  static char *__pyx_argnames[] = {"operation","a","b",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOO", __pyx_argnames, &__pyx_v_operation, &__pyx_v_a, &__pyx_v_b)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_operation);
  Py_INCREF(__pyx_v_a);
  Py_INCREF(__pyx_v_b);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":765 */
  __pyx_1 = PyObject_GetAttr(((PyObject *)__pyx_ptype_6rabbyt_6_anims_Anim), __pyx_n___init__); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 765; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 765; goto __pyx_L1;}
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_self);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 765; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":766 */
  __pyx_4 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_ArithmeticAnim *)((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->__pyx_base.__pyx_vtab)->__pyx_base.add_dependency(((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self),__pyx_v_a,(&((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->_data.a)); if (__pyx_4 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 766; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":767 */
  __pyx_4 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_ArithmeticAnim *)((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->__pyx_base.__pyx_vtab)->__pyx_base.add_dependency(((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self),__pyx_v_b,(&((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->_data.b)); if (__pyx_4 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 767; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":769 */
  ((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->__pyx_base._anim.data = (&((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->_data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":771 */
  if (PyObject_Cmp(__pyx_v_operation, __pyx_n_add, &__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 771; goto __pyx_L1;}
  __pyx_4 = __pyx_4 == 0;
  if (__pyx_4) {
    ((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__add_func);
    goto __pyx_L2;
  }
  if (PyObject_Cmp(__pyx_v_operation, __pyx_n_sub, &__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 773; goto __pyx_L1;}
  __pyx_4 = __pyx_4 == 0;
  if (__pyx_4) {
    ((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__sub_func);
    goto __pyx_L2;
  }
  if (PyObject_Cmp(__pyx_v_operation, __pyx_n_mul, &__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 775; goto __pyx_L1;}
  __pyx_4 = __pyx_4 == 0;
  if (__pyx_4) {
    ((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__mul_func);
    goto __pyx_L2;
  }
  if (PyObject_Cmp(__pyx_v_operation, __pyx_n_div, &__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 777; goto __pyx_L1;}
  __pyx_4 = __pyx_4 == 0;
  if (__pyx_4) {
    ((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__div_func);
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 780; goto __pyx_L1;}
    Py_INCREF(__pyx_k59p);
    PyTuple_SET_ITEM(__pyx_1, 0, __pyx_k59p);
    __pyx_2 = PyObject_CallObject(PyExc_ValueError, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 780; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __Pyx_Raise(__pyx_2, 0, 0);
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 780; goto __pyx_L1;}
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":782 */
  Py_INCREF(__pyx_v_operation);
  Py_DECREF(((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->operation_name);
  ((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->operation_name = __pyx_v_operation;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._anims.ArithmeticAnim.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_operation);
  Py_DECREF(__pyx_v_a);
  Py_DECREF(__pyx_v_b);
  return __pyx_r;
}

static PyObject *__pyx_k60p;

static char __pyx_k60[] = "<ArithmeticAnim %s>";

static PyObject *__pyx_f_6rabbyt_6_anims_14ArithmeticAnim___repr__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_14ArithmeticAnim___repr__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyNumber_Remainder(__pyx_k60p, ((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)__pyx_v_self)->operation_name); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 785; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.ArithmeticAnim.__repr__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__py_func_func(AnimSlot_s *__pyx_v_slot) {
  PyObject *__pyx_v_function;
  struct __pyx_t_6rabbyt_6_anims__py_func_data *__pyx_v_d;
  float __pyx_v_v;
  float __pyx_r;
  PyObject *__pyx_1 = 0;
  float __pyx_2;
  __pyx_v_function = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":796 */
  __pyx_v_d = ((struct __pyx_t_6rabbyt_6_anims__py_func_data *)__pyx_v_slot->anim->data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":797 */
  __pyx_1 = (PyObject *)__pyx_v_d->function;
  Py_INCREF(__pyx_1);
  Py_DECREF(__pyx_v_function);
  __pyx_v_function = __pyx_1;
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":799 */
  __pyx_1 = PyObject_CallObject(__pyx_v_function, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 799; goto __pyx_L1;}
  __pyx_2 = PyFloat_AsDouble(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 799; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_v_v = __pyx_2;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":800 */
  __pyx_r = __pyx_v_v;
  goto __pyx_L0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_WriteUnraisable("rabbyt._anims._py_func_func");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_function);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_10AnimPyFunc___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_10AnimPyFunc___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_function = 0;
  PyObject *__pyx_v_cache = 0;
  int __pyx_r;
  int __pyx_1;
  static char *__pyx_argnames[] = {"function","cache",0};
  __pyx_v_cache = __pyx_k14;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O|O", __pyx_argnames, &__pyx_v_function, &__pyx_v_cache)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_function);
  Py_INCREF(__pyx_v_cache);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":819 */
  Py_INCREF(__pyx_v_function);
  Py_DECREF(((struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)__pyx_v_self)->function);
  ((struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)__pyx_v_self)->function = __pyx_v_function;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":820 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)__pyx_v_self)->__pyx_base._anim.data = (&((struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)__pyx_v_self)->_data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":823 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)__pyx_v_self)->_data.function = ((void *)__pyx_v_function);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":825 */
  __pyx_1 = PyInt_AsLong(__pyx_v_cache); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 825; goto __pyx_L1;}
  ((struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)__pyx_v_self)->_data.do_cache = __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":826 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)__pyx_v_self)->_data.cache_time = (-1);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":827 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__py_func_func);

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._anims.AnimPyFunc.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_function);
  Py_DECREF(__pyx_v_cache);
  return __pyx_r;
}

static PyObject *__pyx_n_warn;
static PyObject *__pyx_n_stacklevel;

static PyObject *__pyx_k61p;

static char __pyx_k61[] = "AnimProxy currently doesn't support caching.";

static int __pyx_f_6rabbyt_6_anims_9AnimProxy___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_9AnimProxy___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_value = 0;
  PyObject *__pyx_v_cache = 0;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  PyObject *__pyx_5 = 0;
  static char *__pyx_argnames[] = {"value","cache",0};
  __pyx_v_cache = __pyx_k15;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O|O", __pyx_argnames, &__pyx_v_value, &__pyx_v_cache)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_value);
  Py_INCREF(__pyx_v_cache);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":846 */
  __pyx_1 = PyObject_GetAttr(((PyObject *)__pyx_ptype_6rabbyt_6_anims_AnimSlotReader), __pyx_n___init__); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 846; goto __pyx_L1;}
  __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_AnimSlot), 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 846; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 846; goto __pyx_L1;}
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_self);
  PyTuple_SET_ITEM(__pyx_3, 1, __pyx_2);
  __pyx_2 = 0;
  __pyx_2 = PyObject_CallObject(__pyx_1, __pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 846; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":847 */
  if (PyObject_Cmp(__pyx_v_cache, Py_True, &__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 847; goto __pyx_L1;}
  __pyx_4 = __pyx_4 == 0;
  if (__pyx_4) {
    __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_warnings); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 848; goto __pyx_L1;}
    __pyx_3 = PyObject_GetAttr(__pyx_1, __pyx_n_warn); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 848; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 848; goto __pyx_L1;}
    Py_INCREF(__pyx_k61p);
    PyTuple_SET_ITEM(__pyx_2, 0, __pyx_k61p);
    __pyx_1 = PyDict_New(); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 848; goto __pyx_L1;}
    __pyx_5 = PyInt_FromLong(2); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 849; goto __pyx_L1;}
    if (PyDict_SetItem(__pyx_1, __pyx_n_stacklevel, __pyx_5) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 848; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_5 = PyEval_CallObjectWithKeywords(__pyx_3, __pyx_2, __pyx_1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 848; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":850 */
  __pyx_4 = PyInt_AsLong(__pyx_v_cache); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 850; goto __pyx_L1;}
  ((struct __pyx_obj_6rabbyt_6_anims_AnimProxy *)__pyx_v_self)->cache_output = __pyx_4;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":851 */
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_value, __pyx_v_value) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 851; goto __pyx_L1;}

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt._anims.AnimProxy.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_value);
  Py_DECREF(__pyx_v_cache);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_6_anims_9AnimProxy_5value___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_6_anims_9AnimProxy_5value___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyObject_GetAttr(((PyObject *)((struct __pyx_obj_6rabbyt_6_anims_AnimProxy *)__pyx_v_self)->__pyx_base.read_slot), __pyx_n_value); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 860; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._anims.AnimProxy.value.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_9AnimProxy_5value___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_f_6rabbyt_6_anims_9AnimProxy_5value___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  int __pyx_1;
  float __pyx_2;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_value);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":862 */
  __pyx_1 = PyNumber_Check(__pyx_v_value);
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":863 */
    ((struct __pyx_obj_6rabbyt_6_anims_AnimProxy *)__pyx_v_self)->__pyx_base.read_slot->_slot->type = SLOT_LOCAL;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":864 */
    __pyx_2 = PyFloat_AsDouble(__pyx_v_value); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 864; goto __pyx_L1;}
    ((struct __pyx_obj_6rabbyt_6_anims_AnimProxy *)__pyx_v_self)->__pyx_base.read_slot->_slot->local = __pyx_2;
    goto __pyx_L2;
  }
  __pyx_3 = PyTuple_New(2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 865; goto __pyx_L1;}
  Py_INCREF(((PyObject *)__pyx_ptype_6rabbyt_6_anims_Anim));
  PyTuple_SET_ITEM(__pyx_3, 0, ((PyObject *)__pyx_ptype_6rabbyt_6_anims_Anim));
  Py_INCREF(((PyObject *)__pyx_ptype_6rabbyt_6_anims_IncompleteAnimBase));
  PyTuple_SET_ITEM(__pyx_3, 1, ((PyObject *)__pyx_ptype_6rabbyt_6_anims_IncompleteAnimBase));
  __pyx_1 = PyObject_IsInstance(__pyx_v_value,__pyx_3); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 865; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  if (__pyx_1) {
    if (PyObject_SetAttr(((PyObject *)((struct __pyx_obj_6rabbyt_6_anims_AnimProxy *)__pyx_v_self)->__pyx_base.read_slot), __pyx_n_anim, __pyx_v_value) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 866; goto __pyx_L1;}
    goto __pyx_L2;
  }
  __pyx_3 = __Pyx_GetName(__pyx_b, __pyx_n_callable); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 867; goto __pyx_L1;}
  __pyx_4 = PyTuple_New(1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 867; goto __pyx_L1;}
  Py_INCREF(__pyx_v_value);
  PyTuple_SET_ITEM(__pyx_4, 0, __pyx_v_value);
  __pyx_5 = PyObject_CallObject(__pyx_3, __pyx_4); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 867; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_1 = PyObject_IsTrue(__pyx_5); if (__pyx_1 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 867; goto __pyx_L1;}
  Py_DECREF(__pyx_5); __pyx_5 = 0;
  if (__pyx_1) {
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 868; goto __pyx_L1;}
    Py_INCREF(__pyx_v_value);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_value);
    __pyx_4 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_AnimPyFunc), __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 868; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    if (PyObject_SetAttr(((PyObject *)((struct __pyx_obj_6rabbyt_6_anims_AnimProxy *)__pyx_v_self)->__pyx_base.read_slot), __pyx_n_anim, __pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 868; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_5 = PyObject_CallObject(PyExc_ValueError, 0); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 870; goto __pyx_L1;}
    __Pyx_Raise(__pyx_5, 0, 0);
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 870; goto __pyx_L1;}
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":871 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimProxy *)__pyx_v_self)->cache_time = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt._anims.AnimProxy.value.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_value);
  return __pyx_r;
}

static float __pyx_f_6rabbyt_6_anims__rate_func(AnimSlot_s *__pyx_v_slot) {
  struct __pyx_t_6rabbyt_6_anims_rate_data *__pyx_v_d;
  float __pyx_v_v;
  float __pyx_v_t;
  float __pyx_v_dt;
  float __pyx_r;
  int __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":879 */
  __pyx_v_d = ((struct __pyx_t_6rabbyt_6_anims_rate_data *)__pyx_v_slot->anim->data);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":881 */
  __pyx_v_t = _get_time();

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":882 */
  __pyx_1 = (__pyx_v_t == __pyx_v_d->last_time);
  if (__pyx_1) {
    __pyx_r = __pyx_v_d->last_rate;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":885 */
    READ_SLOT((&__pyx_v_d->target),(&__pyx_v_v));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":886 */
    __pyx_v_dt = (__pyx_v_t - __pyx_v_d->last_time);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":887 */
    __pyx_v_d->last_rate = ((__pyx_v_v - __pyx_v_d->last) / __pyx_v_dt);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":888 */
    __pyx_v_d->last = __pyx_v_v;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":889 */
    __pyx_v_d->last_time = __pyx_v_t;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":890 */
    __pyx_r = __pyx_v_d->last_rate;
    goto __pyx_L0;
  }
  __pyx_L2:;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static int __pyx_f_6rabbyt_6_anims_8AnimRate___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_6rabbyt_6_anims_8AnimRate___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_target = 0;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  static char *__pyx_argnames[] = {"target",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_target)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_target);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":895 */
  __pyx_1 = PyObject_GetAttr(((PyObject *)__pyx_ptype_6rabbyt_6_anims_Anim), __pyx_n___init__); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 895; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 895; goto __pyx_L1;}
  Py_INCREF(__pyx_v_self);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_self);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 895; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":896 */
  __pyx_4 = ((struct __pyx_vtabstruct_6rabbyt_6_anims_AnimRate *)((struct __pyx_obj_6rabbyt_6_anims_AnimRate *)__pyx_v_self)->__pyx_base.__pyx_vtab)->__pyx_base.add_dependency(((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_self),__pyx_v_target,(&((struct __pyx_obj_6rabbyt_6_anims_AnimRate *)__pyx_v_self)->_data.target)); if (__pyx_4 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 896; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":897 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_6_anims_AnimRate *)__pyx_v_self)->_data.target),(&((struct __pyx_obj_6rabbyt_6_anims_AnimRate *)__pyx_v_self)->_data.last));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":898 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimRate *)__pyx_v_self)->_data.last_time = _get_time();

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":899 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimRate *)__pyx_v_self)->_data.last_rate = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":900 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimRate *)__pyx_v_self)->__pyx_base._anim.func = ((AnimFunc)__pyx_f_6rabbyt_6_anims__rate_func);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":901 */
  ((struct __pyx_obj_6rabbyt_6_anims_AnimRate *)__pyx_v_self)->__pyx_base._anim.data = ((void *)(&((struct __pyx_obj_6rabbyt_6_anims_AnimRate *)__pyx_v_self)->_data));

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._anims.AnimRate.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_target);
  return __pyx_r;
}

static PyObject *__pyx_k63p;

static char __pyx_k63[] = "to_Anim() is deprecated";

static PyObject *__pyx_f_6rabbyt_6_anims_to_Anim(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_6_anims_to_Anim[] = "\n    ``to_Anim(value) -> Anim subclass instance``\n\n    *This function is deprecated, and will eventually be removed.*\n\n    This is a convenience function to get ``Anim`` for a value.\n\n    If ``value`` is already an ``Anim``, it is returned directly.\n\n    If ``value`` is callable, it is wrapped in an ``AnimPyFunc``.\n\n    Otherwise, ``value`` is wrapped in an ``AnimConst``.\n    ";
static PyObject *__pyx_f_6rabbyt_6_anims_to_Anim(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_v = 0;
  struct __pyx_obj_6rabbyt_6_anims_Anim *__pyx_v_dv;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  int __pyx_5;
  static char *__pyx_argnames[] = {"v",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_v)) return 0;
  Py_INCREF(__pyx_v_v);
  __pyx_v_dv = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)Py_None); Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":918 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_warnings); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 918; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(__pyx_1, __pyx_n_warn); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 918; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 918; goto __pyx_L1;}
  Py_INCREF(__pyx_k63p);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_k63p);
  __pyx_3 = PyDict_New(); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 918; goto __pyx_L1;}
  __pyx_4 = PyInt_FromLong(2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 918; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_3, __pyx_n_stacklevel, __pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 918; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_4 = PyEval_CallObjectWithKeywords(__pyx_2, __pyx_1, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 918; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":920 */
  __pyx_5 = PyObject_IsInstance(__pyx_v_v,((PyObject *)__pyx_ptype_6rabbyt_6_anims_Anim)); if (__pyx_5 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 920; goto __pyx_L1;}
  if (__pyx_5) {
    if (!__Pyx_TypeTest(__pyx_v_v, __pyx_ptype_6rabbyt_6_anims_Anim)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 921; goto __pyx_L1;}
    Py_INCREF(__pyx_v_v);
    Py_DECREF(((PyObject *)__pyx_v_dv));
    __pyx_v_dv = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_v_v);
    goto __pyx_L2;
  }
  __pyx_2 = __Pyx_GetName(__pyx_b, __pyx_n_callable); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 922; goto __pyx_L1;}
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 922; goto __pyx_L1;}
  Py_INCREF(__pyx_v_v);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_v);
  __pyx_3 = PyObject_CallObject(__pyx_2, __pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 922; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_5 = PyObject_IsTrue(__pyx_3); if (__pyx_5 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 922; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  if (__pyx_5) {
    __pyx_4 = PyTuple_New(1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 923; goto __pyx_L1;}
    Py_INCREF(__pyx_v_v);
    PyTuple_SET_ITEM(__pyx_4, 0, __pyx_v_v);
    __pyx_2 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_AnimPyFunc), __pyx_4); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 923; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(((PyObject *)__pyx_v_dv));
    __pyx_v_dv = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_2);
    __pyx_2 = 0;
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 925; goto __pyx_L1;}
    Py_INCREF(__pyx_v_v);
    PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_v);
    __pyx_3 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_6_anims_AnimConst), __pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 925; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    Py_DECREF(((PyObject *)__pyx_v_dv));
    __pyx_v_dv = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)__pyx_3);
    __pyx_3 = 0;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":926 */
  Py_INCREF(((PyObject *)__pyx_v_dv));
  __pyx_r = ((PyObject *)__pyx_v_dv);
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("rabbyt._anims.to_Anim");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_dv);
  Py_DECREF(__pyx_v_v);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n___author__, "__author__"},
  {&__pyx_n___base__, "__base__"},
  {&__pyx_n___class__, "__class__"},
  {&__pyx_n___credits__, "__credits__"},
  {&__pyx_n___get__, "__get__"},
  {&__pyx_n___init__, "__init__"},
  {&__pyx_n__anim_slot_descriptor_names, "_anim_slot_descriptor_names"},
  {&__pyx_n__anim_slot_descriptors, "_anim_slot_descriptors"},
  {&__pyx_n_a, "a"},
  {&__pyx_n_add, "add"},
  {&__pyx_n_addressof, "addressof"},
  {&__pyx_n_anim, "anim"},
  {&__pyx_n_append, "append"},
  {&__pyx_n_b, "b"},
  {&__pyx_n_c, "c"},
  {&__pyx_n_callable, "callable"},
  {&__pyx_n_constant, "constant"},
  {&__pyx_n_contents, "contents"},
  {&__pyx_n_ctypes, "ctypes"},
  {&__pyx_n_div, "div"},
  {&__pyx_n_ease_back, "ease_back"},
  {&__pyx_n_ease_bounce, "ease_bounce"},
  {&__pyx_n_ease_circ, "ease_circ"},
  {&__pyx_n_ease_cubic, "ease_cubic"},
  {&__pyx_n_ease_in_back, "ease_in_back"},
  {&__pyx_n_ease_in_bounce, "ease_in_bounce"},
  {&__pyx_n_ease_in_circ, "ease_in_circ"},
  {&__pyx_n_ease_in_cubic, "ease_in_cubic"},
  {&__pyx_n_ease_in_exponential, "ease_in_exponential"},
  {&__pyx_n_ease_in_quad, "ease_in_quad"},
  {&__pyx_n_ease_in_sine, "ease_in_sine"},
  {&__pyx_n_ease_out_back, "ease_out_back"},
  {&__pyx_n_ease_out_bounce, "ease_out_bounce"},
  {&__pyx_n_ease_out_circ, "ease_out_circ"},
  {&__pyx_n_ease_out_cubic, "ease_out_cubic"},
  {&__pyx_n_ease_out_quad, "ease_out_quad"},
  {&__pyx_n_ease_out_sine, "ease_out_sine"},
  {&__pyx_n_ease_quad, "ease_quad"},
  {&__pyx_n_ease_sine, "ease_sine"},
  {&__pyx_n_end_time, "end_time"},
  {&__pyx_n_extend, "extend"},
  {&__pyx_n_extrapolate, "extrapolate"},
  {&__pyx_n_force_complete, "force_complete"},
  {&__pyx_n_get_data_ptr_addr, "get_data_ptr_addr"},
  {&__pyx_n_get_data_stride, "get_data_stride"},
  {&__pyx_n_get_slot, "get_slot"},
  {&__pyx_n_get_value, "get_value"},
  {&__pyx_n_in_array, "in_array"},
  {&__pyx_n_index, "index"},
  {&__pyx_n_lerp, "lerp"},
  {&__pyx_n_mul, "mul"},
  {&__pyx_n_one_over_dt, "one_over_dt"},
  {&__pyx_n_p0, "p0"},
  {&__pyx_n_range, "range"},
  {&__pyx_n_repeat, "repeat"},
  {&__pyx_n_reverse, "reverse"},
  {&__pyx_n_set_anim_slot_locations, "set_anim_slot_locations"},
  {&__pyx_n_stacklevel, "stacklevel"},
  {&__pyx_n_start, "start"},
  {&__pyx_n_startt, "startt"},
  {&__pyx_n_sub, "sub"},
  {&__pyx_n_value, "value"},
  {&__pyx_n_warn, "warn"},
  {&__pyx_n_warnings, "warnings"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k2p, __pyx_k2, sizeof(__pyx_k2)},
  {&__pyx_k3p, __pyx_k3, sizeof(__pyx_k3)},
  {&__pyx_k6p, __pyx_k6, sizeof(__pyx_k6)},
  {&__pyx_k26p, __pyx_k26, sizeof(__pyx_k26)},
  {&__pyx_k27p, __pyx_k27, sizeof(__pyx_k27)},
  {&__pyx_k54p, __pyx_k54, sizeof(__pyx_k54)},
  {&__pyx_k59p, __pyx_k59, sizeof(__pyx_k59)},
  {&__pyx_k60p, __pyx_k60, sizeof(__pyx_k60)},
  {&__pyx_k61p, __pyx_k61, sizeof(__pyx_k61)},
  {&__pyx_k63p, __pyx_k63, sizeof(__pyx_k63)},
  {0, 0, 0}
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_cAnimable __pyx_vtable_6rabbyt_6_anims_cAnimable;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_cAnimable(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_cAnimable *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_cAnimable **)&p->__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_cAnimable;
  p->_anim_list = Py_None; Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_cAnimable(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_cAnimable *p = (struct __pyx_obj_6rabbyt_6_anims_cAnimable *)o;
  {
    PyObject *etype, *eval, *etb;
    PyErr_Fetch(&etype, &eval, &etb);
    ++o->ob_refcnt;
    __pyx_f_6rabbyt_6_anims_9cAnimable___dealloc__(o);
    if (PyErr_Occurred()) PyErr_WriteUnraisable(o);
    --o->ob_refcnt;
    PyErr_Restore(etype, eval, etb);
  }
  Py_XDECREF(p->_anim_list);
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_cAnimable(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_cAnimable *p = (struct __pyx_obj_6rabbyt_6_anims_cAnimable *)o;
  if (p->_anim_list) {
    e = (*v)(p->_anim_list, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_cAnimable(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_cAnimable *p = (struct __pyx_obj_6rabbyt_6_anims_cAnimable *)o;
  PyObject *t;
  t = p->_anim_list; 
  p->_anim_list = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_9cAnimable_anim_slot_list(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_9cAnimable_14anim_slot_list___get__(o);
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_cAnimable[] = {
  {"set_anim_slot_locations", (PyCFunction)__pyx_f_6rabbyt_6_anims_9cAnimable_set_anim_slot_locations, METH_VARARGS|METH_KEYWORDS, 0},
  {"set_anim_slot_locations_in_array", (PyCFunction)__pyx_f_6rabbyt_6_anims_9cAnimable_set_anim_slot_locations_in_array, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static struct PyGetSetDef __pyx_getsets_6rabbyt_6_anims_cAnimable[] = {
  {"anim_slot_list", __pyx_getprop_6rabbyt_6_anims_9cAnimable_anim_slot_list, 0, 0, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_cAnimable = {
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

static PySequenceMethods __pyx_tp_as_sequence_cAnimable = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_cAnimable = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_cAnimable = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_cAnimable = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.cAnimable", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_cAnimable), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_cAnimable, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_cAnimable, /*tp_as_number*/
  &__pyx_tp_as_sequence_cAnimable, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_cAnimable, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_cAnimable, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_cAnimable, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_cAnimable, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_cAnimable, /*tp_methods*/
  0, /*tp_members*/
  __pyx_getsets_6rabbyt_6_anims_cAnimable, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_9cAnimable___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_cAnimable, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_Anim __pyx_vtable_6rabbyt_6_anims_Anim;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_Anim(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_Anim *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_Anim **)&p->__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_Anim;
  p->dependencies = Py_None; Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_Anim(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_Anim *p = (struct __pyx_obj_6rabbyt_6_anims_Anim *)o;
  Py_XDECREF(p->dependencies);
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_Anim(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_Anim *p = (struct __pyx_obj_6rabbyt_6_anims_Anim *)o;
  if (p->dependencies) {
    e = (*v)(p->dependencies, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_Anim(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_Anim *p = (struct __pyx_obj_6rabbyt_6_anims_Anim *)o;
  PyObject *t;
  t = p->dependencies; 
  p->dependencies = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_Anim[] = {
  {"get_value", (PyCFunction)__pyx_f_6rabbyt_6_anims_4Anim_get_value, METH_VARARGS|METH_KEYWORDS, 0},
  {"get", (PyCFunction)__pyx_f_6rabbyt_6_anims_4Anim_get, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Anim = {
  __pyx_f_6rabbyt_6_anims_4Anim___add__, /*nb_add*/
  __pyx_f_6rabbyt_6_anims_4Anim___sub__, /*nb_subtract*/
  __pyx_f_6rabbyt_6_anims_4Anim___mul__, /*nb_multiply*/
  __pyx_f_6rabbyt_6_anims_4Anim___div__, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  __pyx_f_6rabbyt_6_anims_4Anim___neg__, /*nb_negative*/
  __pyx_f_6rabbyt_6_anims_4Anim___pos__, /*nb_positive*/
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

static PySequenceMethods __pyx_tp_as_sequence_Anim = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_Anim = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Anim = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_Anim = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.Anim", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_Anim), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_Anim, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Anim, /*tp_as_number*/
  &__pyx_tp_as_sequence_Anim, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Anim, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Anim, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  "\n    ``Anim()``\n\n    This is the base class for anims.  It shouldn\'t be instanced directly.\n\n    Performing arithmetic operations on an anim will result in a new anim that\n    will allways be up to date.\n    ", /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_Anim, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_Anim, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_Anim, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_4Anim___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_Anim, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot __pyx_vtable_6rabbyt_6_anims_AnimSlot;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_AnimSlot(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot **)&p->__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_AnimSlot;
  p->_py_anim = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)Py_None); Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_AnimSlot(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *p = (struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)o;
  Py_XDECREF(((PyObject *)p->_py_anim));
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_AnimSlot(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *p = (struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)o;
  if (p->_py_anim) {
    e = (*v)(((PyObject*)p->_py_anim), a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_AnimSlot(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *p = (struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)o;
  PyObject *t;
  t = ((PyObject *)p->_py_anim); 
  p->_py_anim = ((struct __pyx_obj_6rabbyt_6_anims_Anim *)Py_None); Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_8AnimSlot_anim(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_8AnimSlot_4anim___get__(o);
}

static int __pyx_setprop_6rabbyt_6_anims_8AnimSlot_anim(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_6_anims_8AnimSlot_4anim___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_8AnimSlot_value(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_8AnimSlot_5value___get__(o);
}

static int __pyx_setprop_6rabbyt_6_anims_8AnimSlot_value(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_6_anims_8AnimSlot_5value___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_AnimSlot[] = {
  {0, 0, 0, 0}
};

static struct PyGetSetDef __pyx_getsets_6rabbyt_6_anims_AnimSlot[] = {
  {"anim", __pyx_getprop_6rabbyt_6_anims_8AnimSlot_anim, __pyx_setprop_6rabbyt_6_anims_8AnimSlot_anim, 0, 0},
  {"value", __pyx_getprop_6rabbyt_6_anims_8AnimSlot_value, __pyx_setprop_6rabbyt_6_anims_8AnimSlot_value, 0, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_AnimSlot = {
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

static PySequenceMethods __pyx_tp_as_sequence_AnimSlot = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_AnimSlot = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_AnimSlot = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_AnimSlot = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.AnimSlot", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimSlot), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_AnimSlot, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_AnimSlot, /*tp_as_number*/
  &__pyx_tp_as_sequence_AnimSlot, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_AnimSlot, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_AnimSlot, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_AnimSlot, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_AnimSlot, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_AnimSlot, /*tp_methods*/
  0, /*tp_members*/
  __pyx_getsets_6rabbyt_6_anims_AnimSlot, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_8AnimSlot___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_AnimSlot, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_6rabbyt_6_anims_IncompleteAnimBase(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_IncompleteAnimBase(PyObject *o) {
  (*o->ob_type->tp_free)(o);
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_IncompleteAnimBase[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_IncompleteAnimBase = {
  __pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___add__, /*nb_add*/
  __pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___sub__, /*nb_subtract*/
  __pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___mul__, /*nb_multiply*/
  __pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___div__, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  __pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___neg__, /*nb_negative*/
  __pyx_f_6rabbyt_6_anims_18IncompleteAnimBase___pos__, /*nb_positive*/
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

static PySequenceMethods __pyx_tp_as_sequence_IncompleteAnimBase = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_IncompleteAnimBase = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_IncompleteAnimBase = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_IncompleteAnimBase = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.IncompleteAnimBase", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_IncompleteAnimBase), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_IncompleteAnimBase, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_IncompleteAnimBase, /*tp_as_number*/
  &__pyx_tp_as_sequence_IncompleteAnimBase, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_IncompleteAnimBase, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_IncompleteAnimBase, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  "\n    This class is only used for introspection.  rabbyt.anims.IncompleteAnim is\n    where the implementation is.\n    ", /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_IncompleteAnimBase, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_IncompleteAnimBase, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_6rabbyt_6_anims_anim_slot(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_anim_slot *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_anim_slot *)o);
  p->__doc__ = Py_None; Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_anim_slot(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_anim_slot *p = (struct __pyx_obj_6rabbyt_6_anims_anim_slot *)o;
  Py_XDECREF(p->__doc__);
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_anim_slot(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_anim_slot *p = (struct __pyx_obj_6rabbyt_6_anims_anim_slot *)o;
  if (p->__doc__) {
    e = (*v)(p->__doc__, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_anim_slot(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_anim_slot *p = (struct __pyx_obj_6rabbyt_6_anims_anim_slot *)o;
  PyObject *t;
  t = p->__doc__; 
  p->__doc__ = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static PyObject *__pyx_tp_descr_get_6rabbyt_6_anims_anim_slot(PyObject *o, PyObject *i, PyObject *c) {
  PyObject *r = 0;
  if (!i) i = Py_None;
  if (!c) c = Py_None;
  r = __pyx_f_6rabbyt_6_anims_9anim_slot___get__(o, i, c);
  return r;
}

static int __pyx_tp_descr_set_6rabbyt_6_anims_anim_slot(PyObject *o, PyObject *i, PyObject *v) {
  if (v) {
    return __pyx_f_6rabbyt_6_anims_9anim_slot___set__(o, i, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__delete__");
    return -1;
  }
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_anim_slot[] = {
  {"get_slot", (PyCFunction)__pyx_f_6rabbyt_6_anims_9anim_slot_get_slot, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static struct PyMemberDef __pyx_members_6rabbyt_6_anims_anim_slot[] = {
  {"index", T_INT, offsetof(struct __pyx_obj_6rabbyt_6_anims_anim_slot, index), 0, 0},
  {"default_value", T_FLOAT, offsetof(struct __pyx_obj_6rabbyt_6_anims_anim_slot, default_value), 0, 0},
  {"__doc__", T_OBJECT, offsetof(struct __pyx_obj_6rabbyt_6_anims_anim_slot, __doc__), 0, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_anim_slot = {
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

static PySequenceMethods __pyx_tp_as_sequence_anim_slot = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_anim_slot = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_anim_slot = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_anim_slot = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.anim_slot", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_anim_slot), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_anim_slot, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_anim_slot, /*tp_as_number*/
  &__pyx_tp_as_sequence_anim_slot, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_anim_slot, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_anim_slot, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  "\n    ``anim_slot([default], [doc], [index])``\n\n    ``anim_slot`` is used to create a property that \'understands\' anims.  See\n    the docs for ``Animable`` for usage.\n\n    ``default`` is the default value for the anim slot.  (It defaults to ``0``.)\n\n    ``index`` is used for optimizing low-level C code.  Only use it if you\n    know what you are doing.\n\n    ``anim_slot`` only works in ``Animable`` subclasses.\n    ", /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_anim_slot, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_anim_slot, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_anim_slot, /*tp_methods*/
  __pyx_members_6rabbyt_6_anims_anim_slot, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  __pyx_tp_descr_get_6rabbyt_6_anims_anim_slot, /*tp_descr_get*/
  __pyx_tp_descr_set_6rabbyt_6_anims_anim_slot, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_9anim_slot___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_anim_slot, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimConst __pyx_vtable_6rabbyt_6_anims_AnimConst;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_AnimConst(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_AnimConst *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_Anim->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_AnimConst *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_AnimConst **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_AnimConst;
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_AnimConst(PyObject *o) {
  __pyx_ptype_6rabbyt_6_anims_Anim->tp_dealloc(o);
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_AnimConst[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_AnimConst = {
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

static PySequenceMethods __pyx_tp_as_sequence_AnimConst = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_AnimConst = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_AnimConst = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_AnimConst = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.AnimConst", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimConst), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_AnimConst, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_AnimConst, /*tp_as_number*/
  &__pyx_tp_as_sequence_AnimConst, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_AnimConst, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_AnimConst, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  "\n    ``AnimConst(value)``\n\n    An anim that isn\'t animated.\n\n    This is mostly here so that constant values can be used with the same\n    interface as Anim.  Once upon a time this made sense.\n    ", /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_AnimConst, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_9AnimConst___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_AnimConst, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimPointer __pyx_vtable_6rabbyt_6_anims_AnimPointer;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_AnimPointer(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_AnimPointer *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_Anim->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_AnimPointer *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_AnimPointer **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_AnimPointer;
  p->_owner = Py_None; Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_AnimPointer(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_AnimPointer *p = (struct __pyx_obj_6rabbyt_6_anims_AnimPointer *)o;
  Py_XDECREF(p->_owner);
  __pyx_ptype_6rabbyt_6_anims_Anim->tp_dealloc(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_AnimPointer(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_AnimPointer *p = (struct __pyx_obj_6rabbyt_6_anims_AnimPointer *)o;
  traverseproc t;
  if ((t = __pyx_ptype_6rabbyt_6_anims_Anim->tp_traverse)) {
    e = t(o, v, a); if (e) return e;
  }
  if (p->_owner) {
    e = (*v)(p->_owner, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_AnimPointer(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_AnimPointer *p = (struct __pyx_obj_6rabbyt_6_anims_AnimPointer *)o;
  PyObject *t;
  inquiry c;
  if ((c = __pyx_ptype_6rabbyt_6_anims_Anim->tp_clear)) {
    c(o);
  }
  t = p->_owner; 
  p->_owner = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_11AnimPointer_owner(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_11AnimPointer_5owner___get__(o);
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_AnimPointer[] = {
  {0, 0, 0, 0}
};

static struct PyGetSetDef __pyx_getsets_6rabbyt_6_anims_AnimPointer[] = {
  {"owner", __pyx_getprop_6rabbyt_6_anims_11AnimPointer_owner, 0, 0, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_AnimPointer = {
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

static PySequenceMethods __pyx_tp_as_sequence_AnimPointer = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_AnimPointer = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_AnimPointer = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_AnimPointer = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.AnimPointer", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimPointer), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_AnimPointer, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_AnimPointer, /*tp_as_number*/
  &__pyx_tp_as_sequence_AnimPointer, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_AnimPointer, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_AnimPointer, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  "\n    ``AnimPointer(pointer, [owner])``\n\n    An anim that reads it\'s value from a memory address.\n\n    ``pointer`` should either be a ctypes pointer object or the memory address\n    as an integer.\n\n    If ``owner`` is given, a reference to it will be held for the lifetime of\n    the anim.  Pass the owner of the memory that ``pointer`` points to to\n    insure that it won\'t be deleted before this anim is deleted.  (You risk\n    getting a segmentation fault otherwise. Nasty!)\n\n    ``owner`` defaults to be the same as ``pointer``, which is probably what\n    you want if ``pointer`` is a ctypes pointer.  But if it\'s an integer you\n    should give ``owner`` explicitly.\n\n    The pointer must point to a C float.  (If it\'s anything else you\'ll get\n    some crazy results!)\n    ", /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_AnimPointer, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_AnimPointer, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_AnimPointer, /*tp_methods*/
  0, /*tp_members*/
  __pyx_getsets_6rabbyt_6_anims_AnimPointer, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_11AnimPointer___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_AnimPointer, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_InterpolateAnim __pyx_vtable_6rabbyt_6_anims_InterpolateAnim;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_InterpolateAnim(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_Anim->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_InterpolateAnim **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_InterpolateAnim;
  p->method_name = Py_None; Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_InterpolateAnim(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *p = (struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)o;
  Py_XDECREF(p->method_name);
  __pyx_ptype_6rabbyt_6_anims_Anim->tp_dealloc(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_InterpolateAnim(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *p = (struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)o;
  traverseproc t;
  if ((t = __pyx_ptype_6rabbyt_6_anims_Anim->tp_traverse)) {
    e = t(o, v, a); if (e) return e;
  }
  if (p->method_name) {
    e = (*v)(p->method_name, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_InterpolateAnim(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *p = (struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim *)o;
  PyObject *t;
  inquiry c;
  if ((c = __pyx_ptype_6rabbyt_6_anims_Anim->tp_clear)) {
    c(o);
  }
  t = p->method_name; 
  p->method_name = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_start(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_15InterpolateAnim_5start___get__(o);
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_end(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_15InterpolateAnim_3end___get__(o);
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_startt(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_15InterpolateAnim_6startt___get__(o);
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_endt(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_15InterpolateAnim_4endt___get__(o);
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_dt(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_15InterpolateAnim_2dt___get__(o);
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_end_time(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_15InterpolateAnim_8end_time___get__(o);
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_InterpolateAnim[] = {
  {0, 0, 0, 0}
};

static struct PyMemberDef __pyx_members_6rabbyt_6_anims_InterpolateAnim[] = {
  {"method_name", T_OBJECT, offsetof(struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim, method_name), 0, 0},
  {0, 0, 0, 0, 0}
};

static struct PyGetSetDef __pyx_getsets_6rabbyt_6_anims_InterpolateAnim[] = {
  {"start", __pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_start, 0, 0, 0},
  {"end", __pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_end, 0, 0, 0},
  {"startt", __pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_startt, 0, 0, 0},
  {"endt", __pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_endt, 0, 0, 0},
  {"dt", __pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_dt, 0, 0, 0},
  {"end_time", __pyx_getprop_6rabbyt_6_anims_15InterpolateAnim_end_time, 0, 0, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_InterpolateAnim = {
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

static PySequenceMethods __pyx_tp_as_sequence_InterpolateAnim = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_InterpolateAnim = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_InterpolateAnim = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_InterpolateAnim = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.InterpolateAnim", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_InterpolateAnim), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_InterpolateAnim, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  __pyx_f_6rabbyt_6_anims_15InterpolateAnim___repr__, /*tp_repr*/
  &__pyx_tp_as_number_InterpolateAnim, /*tp_as_number*/
  &__pyx_tp_as_sequence_InterpolateAnim, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_InterpolateAnim, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_InterpolateAnim, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_InterpolateAnim, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_InterpolateAnim, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_InterpolateAnim, /*tp_methods*/
  __pyx_members_6rabbyt_6_anims_InterpolateAnim, /*tp_members*/
  __pyx_getsets_6rabbyt_6_anims_InterpolateAnim, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_15InterpolateAnim___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_InterpolateAnim, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_ChainAnim __pyx_vtable_6rabbyt_6_anims_ChainAnim;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_ChainAnim(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_ChainAnim *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_Anim->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_ChainAnim **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_ChainAnim;
  p->_anims = Py_None; Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_ChainAnim(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_ChainAnim *p = (struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)o;
  Py_XDECREF(p->_anims);
  __pyx_ptype_6rabbyt_6_anims_Anim->tp_dealloc(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_ChainAnim(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_ChainAnim *p = (struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)o;
  traverseproc t;
  if ((t = __pyx_ptype_6rabbyt_6_anims_Anim->tp_traverse)) {
    e = t(o, v, a); if (e) return e;
  }
  if (p->_anims) {
    e = (*v)(p->_anims, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_ChainAnim(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_ChainAnim *p = (struct __pyx_obj_6rabbyt_6_anims_ChainAnim *)o;
  PyObject *t;
  inquiry c;
  if ((c = __pyx_ptype_6rabbyt_6_anims_Anim->tp_clear)) {
    c(o);
  }
  t = p->_anims; 
  p->_anims = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_9ChainAnim_anims(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_9ChainAnim_5anims___get__(o);
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_ChainAnim[] = {
  {"__dealloc___", (PyCFunction)__pyx_f_6rabbyt_6_anims_9ChainAnim___dealloc___, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static struct PyGetSetDef __pyx_getsets_6rabbyt_6_anims_ChainAnim[] = {
  {"anims", __pyx_getprop_6rabbyt_6_anims_9ChainAnim_anims, 0, 0, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_ChainAnim = {
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

static PySequenceMethods __pyx_tp_as_sequence_ChainAnim = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_ChainAnim = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_ChainAnim = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_ChainAnim = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.ChainAnim", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_ChainAnim), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_ChainAnim, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_ChainAnim, /*tp_as_number*/
  &__pyx_tp_as_sequence_ChainAnim, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_ChainAnim, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_ChainAnim, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_ChainAnim, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_ChainAnim, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_ChainAnim, /*tp_methods*/
  0, /*tp_members*/
  __pyx_getsets_6rabbyt_6_anims_ChainAnim, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_9ChainAnim___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_ChainAnim, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimStaticCubicBezier __pyx_vtable_6rabbyt_6_anims_AnimStaticCubicBezier;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_AnimStaticCubicBezier(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_Anim->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_AnimStaticCubicBezier **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_AnimStaticCubicBezier;
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_AnimStaticCubicBezier(PyObject *o) {
  __pyx_ptype_6rabbyt_6_anims_Anim->tp_dealloc(o);
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_AnimStaticCubicBezier[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_AnimStaticCubicBezier = {
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

static PySequenceMethods __pyx_tp_as_sequence_AnimStaticCubicBezier = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_AnimStaticCubicBezier = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_AnimStaticCubicBezier = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_AnimStaticCubicBezier = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.AnimStaticCubicBezier", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimStaticCubicBezier), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_AnimStaticCubicBezier, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_AnimStaticCubicBezier, /*tp_as_number*/
  &__pyx_tp_as_sequence_AnimStaticCubicBezier, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_AnimStaticCubicBezier, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_AnimStaticCubicBezier, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_AnimStaticCubicBezier, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_21AnimStaticCubicBezier___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_AnimStaticCubicBezier, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlotReader __pyx_vtable_6rabbyt_6_anims_AnimSlotReader;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_AnimSlotReader(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_Anim->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlotReader **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_AnimSlotReader;
  p->read_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)Py_None); Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_AnimSlotReader(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *p = (struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *)o;
  Py_XDECREF(((PyObject *)p->read_slot));
  __pyx_ptype_6rabbyt_6_anims_Anim->tp_dealloc(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_AnimSlotReader(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *p = (struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *)o;
  traverseproc t;
  if ((t = __pyx_ptype_6rabbyt_6_anims_Anim->tp_traverse)) {
    e = t(o, v, a); if (e) return e;
  }
  if (p->read_slot) {
    e = (*v)(((PyObject*)p->read_slot), a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_AnimSlotReader(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *p = (struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader *)o;
  PyObject *t;
  inquiry c;
  if ((c = __pyx_ptype_6rabbyt_6_anims_Anim->tp_clear)) {
    c(o);
  }
  t = ((PyObject *)p->read_slot); 
  p->read_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)Py_None); Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_AnimSlotReader[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_AnimSlotReader = {
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

static PySequenceMethods __pyx_tp_as_sequence_AnimSlotReader = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_AnimSlotReader = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_AnimSlotReader = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_AnimSlotReader = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.AnimSlotReader", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimSlotReader), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_AnimSlotReader, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_AnimSlotReader, /*tp_as_number*/
  &__pyx_tp_as_sequence_AnimSlotReader, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_AnimSlotReader, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_AnimSlotReader, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_AnimSlotReader, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_AnimSlotReader, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_AnimSlotReader, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_14AnimSlotReader___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_AnimSlotReader, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimWrap __pyx_vtable_6rabbyt_6_anims_AnimWrap;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_AnimWrap(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_AnimWrap *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_Anim->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_AnimWrap **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_AnimWrap;
  p->input_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)Py_None); Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_AnimWrap(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_AnimWrap *p = (struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)o;
  Py_XDECREF(((PyObject *)p->input_slot));
  __pyx_ptype_6rabbyt_6_anims_Anim->tp_dealloc(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_AnimWrap(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_AnimWrap *p = (struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)o;
  traverseproc t;
  if ((t = __pyx_ptype_6rabbyt_6_anims_Anim->tp_traverse)) {
    e = t(o, v, a); if (e) return e;
  }
  if (p->input_slot) {
    e = (*v)(((PyObject*)p->input_slot), a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_AnimWrap(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_AnimWrap *p = (struct __pyx_obj_6rabbyt_6_anims_AnimWrap *)o;
  PyObject *t;
  inquiry c;
  if ((c = __pyx_ptype_6rabbyt_6_anims_Anim->tp_clear)) {
    c(o);
  }
  t = ((PyObject *)p->input_slot); 
  p->input_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)Py_None); Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_AnimWrap[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_AnimWrap = {
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

static PySequenceMethods __pyx_tp_as_sequence_AnimWrap = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_AnimWrap = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_AnimWrap = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_AnimWrap = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.AnimWrap", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimWrap), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_AnimWrap, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_AnimWrap, /*tp_as_number*/
  &__pyx_tp_as_sequence_AnimWrap, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_AnimWrap, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_AnimWrap, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  "\n    ``AnimWrap(bounds, parent, static=True)``\n\n    An anim that returns another anim wrapped within two bounds.\n\n    You might want to use ``rabbyt.wrap()`` instead.\n\n   ``bounds`` is the bounds that the value should be wrapped within.  It can\n    be anything supporting item access with a length of at least two.\n\n    ``parent`` is the ``Anim`` that is being wrapped.\n\n    If static is ``True``, ``bounds[0]`` and ``bounds[1]`` are read only once\n    and stored as variables in c.  This is much faster, but doesn\'t work if\n    ``bounds`` is an object you wish to mutate.\n    ", /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_AnimWrap, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_AnimWrap, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_AnimWrap, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_8AnimWrap___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_AnimWrap, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_ArithmeticAnim __pyx_vtable_6rabbyt_6_anims_ArithmeticAnim;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_ArithmeticAnim(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_Anim->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_ArithmeticAnim **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_ArithmeticAnim;
  p->operation_name = Py_None; Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_ArithmeticAnim(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *p = (struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)o;
  Py_XDECREF(p->operation_name);
  __pyx_ptype_6rabbyt_6_anims_Anim->tp_dealloc(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_ArithmeticAnim(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *p = (struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)o;
  traverseproc t;
  if ((t = __pyx_ptype_6rabbyt_6_anims_Anim->tp_traverse)) {
    e = t(o, v, a); if (e) return e;
  }
  if (p->operation_name) {
    e = (*v)(p->operation_name, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_ArithmeticAnim(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *p = (struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim *)o;
  PyObject *t;
  inquiry c;
  if ((c = __pyx_ptype_6rabbyt_6_anims_Anim->tp_clear)) {
    c(o);
  }
  t = p->operation_name; 
  p->operation_name = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_ArithmeticAnim[] = {
  {0, 0, 0, 0}
};

static struct PyMemberDef __pyx_members_6rabbyt_6_anims_ArithmeticAnim[] = {
  {"operation_name", T_OBJECT, offsetof(struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim, operation_name), 0, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_ArithmeticAnim = {
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

static PySequenceMethods __pyx_tp_as_sequence_ArithmeticAnim = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_ArithmeticAnim = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_ArithmeticAnim = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_ArithmeticAnim = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.ArithmeticAnim", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_ArithmeticAnim), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_ArithmeticAnim, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  __pyx_f_6rabbyt_6_anims_14ArithmeticAnim___repr__, /*tp_repr*/
  &__pyx_tp_as_number_ArithmeticAnim, /*tp_as_number*/
  &__pyx_tp_as_sequence_ArithmeticAnim, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_ArithmeticAnim, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_ArithmeticAnim, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_ArithmeticAnim, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_ArithmeticAnim, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_ArithmeticAnim, /*tp_methods*/
  __pyx_members_6rabbyt_6_anims_ArithmeticAnim, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_14ArithmeticAnim___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_ArithmeticAnim, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimPyFunc __pyx_vtable_6rabbyt_6_anims_AnimPyFunc;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_AnimPyFunc(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_Anim->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_AnimPyFunc **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_AnimPyFunc;
  p->function = Py_None; Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_AnimPyFunc(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *p = (struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)o;
  Py_XDECREF(p->function);
  __pyx_ptype_6rabbyt_6_anims_Anim->tp_dealloc(o);
}

static int __pyx_tp_traverse_6rabbyt_6_anims_AnimPyFunc(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *p = (struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)o;
  traverseproc t;
  if ((t = __pyx_ptype_6rabbyt_6_anims_Anim->tp_traverse)) {
    e = t(o, v, a); if (e) return e;
  }
  if (p->function) {
    e = (*v)(p->function, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_6_anims_AnimPyFunc(PyObject *o) {
  struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *p = (struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc *)o;
  PyObject *t;
  inquiry c;
  if ((c = __pyx_ptype_6rabbyt_6_anims_Anim->tp_clear)) {
    c(o);
  }
  t = p->function; 
  p->function = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_AnimPyFunc[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_AnimPyFunc = {
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

static PySequenceMethods __pyx_tp_as_sequence_AnimPyFunc = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_AnimPyFunc = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_AnimPyFunc = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_AnimPyFunc = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.AnimPyFunc", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimPyFunc), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_AnimPyFunc, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_AnimPyFunc, /*tp_as_number*/
  &__pyx_tp_as_sequence_AnimPyFunc, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_AnimPyFunc, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_AnimPyFunc, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  "\n    ``AnimPyFunc(function, cache=False)``\n\n    An anim that calls a python function, using the returned value.\n\n    function is the callback called to retrieve the value.  It should\n    return a float.\n\n    If ``cache`` is ``True``, the result returned by function will be\n    cached for as long as the time (as set by ``rabbyt.set_time()``) doesn\'t\n    change. This could provide good speedup if the value is read multiple\n    times per frame.\n    ", /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_6_anims_AnimPyFunc, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_6_anims_AnimPyFunc, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_AnimPyFunc, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_10AnimPyFunc___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_AnimPyFunc, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimProxy __pyx_vtable_6rabbyt_6_anims_AnimProxy;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_AnimProxy(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_AnimProxy *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_AnimSlotReader->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_AnimProxy *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_AnimProxy **)&p->__pyx_base.__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_AnimProxy;
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_AnimProxy(PyObject *o) {
  __pyx_ptype_6rabbyt_6_anims_AnimSlotReader->tp_dealloc(o);
}

static PyObject *__pyx_getprop_6rabbyt_6_anims_9AnimProxy_value(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_6_anims_9AnimProxy_5value___get__(o);
}

static int __pyx_setprop_6rabbyt_6_anims_9AnimProxy_value(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_6_anims_9AnimProxy_5value___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_AnimProxy[] = {
  {0, 0, 0, 0}
};

static struct PyGetSetDef __pyx_getsets_6rabbyt_6_anims_AnimProxy[] = {
  {"value", __pyx_getprop_6rabbyt_6_anims_9AnimProxy_value, __pyx_setprop_6rabbyt_6_anims_9AnimProxy_value, __pyx_k1, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_AnimProxy = {
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

static PySequenceMethods __pyx_tp_as_sequence_AnimProxy = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_AnimProxy = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_AnimProxy = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_AnimProxy = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.AnimProxy", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimProxy), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_AnimProxy, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_AnimProxy, /*tp_as_number*/
  &__pyx_tp_as_sequence_AnimProxy, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_AnimProxy, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_AnimProxy, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  "\n    ``AnimProxy(value, cache=False)``\n\n    An anim that simply returns the value of another anim.\n\n    ``value`` is the value that can be returned.  It can be a number, a\n    function, or another anim.\n\n    If ``cache`` is True, a cached value will be called when the anim is\n    accessed a second time without the global time changing.\n    ", /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_AnimProxy, /*tp_methods*/
  0, /*tp_members*/
  __pyx_getsets_6rabbyt_6_anims_AnimProxy, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_9AnimProxy___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_AnimProxy, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimRate __pyx_vtable_6rabbyt_6_anims_AnimRate;

static PyObject *__pyx_tp_new_6rabbyt_6_anims_AnimRate(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_6_anims_AnimRate *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_Anim->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_6_anims_AnimRate *)o);
  *(struct __pyx_vtabstruct_6rabbyt_6_anims_AnimRate **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_6_anims_AnimRate;
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_6_anims_AnimRate(PyObject *o) {
  __pyx_ptype_6rabbyt_6_anims_Anim->tp_dealloc(o);
}

static struct PyMethodDef __pyx_methods_6rabbyt_6_anims_AnimRate[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_AnimRate = {
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

static PySequenceMethods __pyx_tp_as_sequence_AnimRate = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_AnimRate = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_AnimRate = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_6_anims_AnimRate = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._anims.AnimRate", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimRate), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_6_anims_AnimRate, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_AnimRate, /*tp_as_number*/
  &__pyx_tp_as_sequence_AnimRate, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_AnimRate, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_AnimRate, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_6_anims_AnimRate, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_6rabbyt_6_anims_8AnimRate___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_6_anims_AnimRate, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static struct PyMethodDef __pyx_methods[] = {
  {"set_time", (PyCFunction)__pyx_f_6rabbyt_6_anims_set_time, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_6_anims_set_time},
  {"get_time", (PyCFunction)__pyx_f_6rabbyt_6_anims_get_time, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_6_anims_get_time},
  {"add_time", (PyCFunction)__pyx_f_6rabbyt_6_anims_add_time, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_6_anims_add_time},
  {"to_Anim", (PyCFunction)__pyx_f_6rabbyt_6_anims_to_Anim, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_6_anims_to_Anim},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC init_anims(void); /*proto*/
PyMODINIT_FUNC init_anims(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("_anims", __pyx_methods, __pyx_mdoc, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_vtabptr_6rabbyt_6_anims_cAnimable = &__pyx_vtable_6rabbyt_6_anims_cAnimable;
  *(void(**)(void))&__pyx_vtable_6rabbyt_6_anims_cAnimable._modify_slots = (void(*)(void))__pyx_f_6rabbyt_6_anims_9cAnimable__modify_slots;
  __pyx_type_6rabbyt_6_anims_cAnimable.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_cAnimable) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 254; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_cAnimable.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_cAnimable) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 254; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "cAnimable", (PyObject *)&__pyx_type_6rabbyt_6_anims_cAnimable) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 254; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_cAnimable = &__pyx_type_6rabbyt_6_anims_cAnimable;
  __pyx_vtabptr_6rabbyt_6_anims_Anim = &__pyx_vtable_6rabbyt_6_anims_Anim;
  *(void(**)(void))&__pyx_vtable_6rabbyt_6_anims_Anim.add_dependency = (void(*)(void))__pyx_f_6rabbyt_6_anims_4Anim_add_dependency;
  __pyx_type_6rabbyt_6_anims_Anim.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_Anim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 143; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_Anim.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_Anim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 143; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Anim", (PyObject *)&__pyx_type_6rabbyt_6_anims_Anim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 143; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_Anim = &__pyx_type_6rabbyt_6_anims_Anim;
  __pyx_vtabptr_6rabbyt_6_anims_AnimSlot = &__pyx_vtable_6rabbyt_6_anims_AnimSlot;
  *(void(**)(void))&__pyx_vtable_6rabbyt_6_anims_AnimSlot.c_set_anim = (void(*)(void))__pyx_f_6rabbyt_6_anims_8AnimSlot_c_set_anim;
  *(void(**)(void))&__pyx_vtable_6rabbyt_6_anims_AnimSlot.c_get_anim = (void(*)(void))__pyx_f_6rabbyt_6_anims_8AnimSlot_c_get_anim;
  *(void(**)(void))&__pyx_vtable_6rabbyt_6_anims_AnimSlot.c_get_value = (void(*)(void))__pyx_f_6rabbyt_6_anims_8AnimSlot_c_get_value;
  *(void(**)(void))&__pyx_vtable_6rabbyt_6_anims_AnimSlot.c_set_value = (void(*)(void))__pyx_f_6rabbyt_6_anims_8AnimSlot_c_set_value;
  __pyx_type_6rabbyt_6_anims_AnimSlot.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_AnimSlot) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 201; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_AnimSlot.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_AnimSlot) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 201; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "AnimSlot", (PyObject *)&__pyx_type_6rabbyt_6_anims_AnimSlot) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 201; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimSlot = &__pyx_type_6rabbyt_6_anims_AnimSlot;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_IncompleteAnimBase) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 120; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "IncompleteAnimBase", (PyObject *)&__pyx_type_6rabbyt_6_anims_IncompleteAnimBase) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 120; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_IncompleteAnimBase = &__pyx_type_6rabbyt_6_anims_IncompleteAnimBase;
  __pyx_type_6rabbyt_6_anims_anim_slot.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_anim_slot) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 314; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "anim_slot", (PyObject *)&__pyx_type_6rabbyt_6_anims_anim_slot) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 314; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_anim_slot = &__pyx_type_6rabbyt_6_anims_anim_slot;
  __pyx_vtabptr_6rabbyt_6_anims_AnimConst = &__pyx_vtable_6rabbyt_6_anims_AnimConst;
  __pyx_vtable_6rabbyt_6_anims_AnimConst.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_AnimConst.tp_base = __pyx_ptype_6rabbyt_6_anims_Anim;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_AnimConst) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 373; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_AnimConst.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_AnimConst) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 373; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "AnimConst", (PyObject *)&__pyx_type_6rabbyt_6_anims_AnimConst) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 373; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimConst = &__pyx_type_6rabbyt_6_anims_AnimConst;
  __pyx_vtabptr_6rabbyt_6_anims_AnimPointer = &__pyx_vtable_6rabbyt_6_anims_AnimPointer;
  __pyx_vtable_6rabbyt_6_anims_AnimPointer.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_AnimPointer.tp_base = __pyx_ptype_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_AnimPointer.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_AnimPointer) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 389; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_AnimPointer.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_AnimPointer) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 389; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "AnimPointer", (PyObject *)&__pyx_type_6rabbyt_6_anims_AnimPointer) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 389; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimPointer = &__pyx_type_6rabbyt_6_anims_AnimPointer;
  __pyx_vtabptr_6rabbyt_6_anims_InterpolateAnim = &__pyx_vtable_6rabbyt_6_anims_InterpolateAnim;
  __pyx_vtable_6rabbyt_6_anims_InterpolateAnim.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_InterpolateAnim.tp_base = __pyx_ptype_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_InterpolateAnim.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_InterpolateAnim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 428; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_InterpolateAnim.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_InterpolateAnim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 428; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "InterpolateAnim", (PyObject *)&__pyx_type_6rabbyt_6_anims_InterpolateAnim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 428; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_InterpolateAnim = &__pyx_type_6rabbyt_6_anims_InterpolateAnim;
  __pyx_vtabptr_6rabbyt_6_anims_ChainAnim = &__pyx_vtable_6rabbyt_6_anims_ChainAnim;
  __pyx_vtable_6rabbyt_6_anims_ChainAnim.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_ChainAnim.tp_base = __pyx_ptype_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_ChainAnim.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_ChainAnim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 545; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_ChainAnim.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_ChainAnim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 545; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "ChainAnim", (PyObject *)&__pyx_type_6rabbyt_6_anims_ChainAnim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 545; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_ChainAnim = &__pyx_type_6rabbyt_6_anims_ChainAnim;
  __pyx_vtabptr_6rabbyt_6_anims_AnimStaticCubicBezier = &__pyx_vtable_6rabbyt_6_anims_AnimStaticCubicBezier;
  __pyx_vtable_6rabbyt_6_anims_AnimStaticCubicBezier.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_Anim;
  *(void(**)(void))&__pyx_vtable_6rabbyt_6_anims_AnimStaticCubicBezier.g = (void(*)(void))__pyx_f_6rabbyt_6_anims_21AnimStaticCubicBezier_g;
  __pyx_type_6rabbyt_6_anims_AnimStaticCubicBezier.tp_base = __pyx_ptype_6rabbyt_6_anims_Anim;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_AnimStaticCubicBezier) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 622; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_AnimStaticCubicBezier.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_AnimStaticCubicBezier) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 622; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "AnimStaticCubicBezier", (PyObject *)&__pyx_type_6rabbyt_6_anims_AnimStaticCubicBezier) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 622; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimStaticCubicBezier = &__pyx_type_6rabbyt_6_anims_AnimStaticCubicBezier;
  __pyx_vtabptr_6rabbyt_6_anims_AnimSlotReader = &__pyx_vtable_6rabbyt_6_anims_AnimSlotReader;
  __pyx_vtable_6rabbyt_6_anims_AnimSlotReader.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_AnimSlotReader.tp_base = __pyx_ptype_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_AnimSlotReader.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_AnimSlotReader) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 656; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_AnimSlotReader.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_AnimSlotReader) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 656; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "AnimSlotReader", (PyObject *)&__pyx_type_6rabbyt_6_anims_AnimSlotReader) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 656; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimSlotReader = &__pyx_type_6rabbyt_6_anims_AnimSlotReader;
  __pyx_vtabptr_6rabbyt_6_anims_AnimWrap = &__pyx_vtable_6rabbyt_6_anims_AnimWrap;
  __pyx_vtable_6rabbyt_6_anims_AnimWrap.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_AnimWrap.tp_base = __pyx_ptype_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_AnimWrap.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_AnimWrap) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 670; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_AnimWrap.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_AnimWrap) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 670; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "AnimWrap", (PyObject *)&__pyx_type_6rabbyt_6_anims_AnimWrap) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 670; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimWrap = &__pyx_type_6rabbyt_6_anims_AnimWrap;
  __pyx_vtabptr_6rabbyt_6_anims_ArithmeticAnim = &__pyx_vtable_6rabbyt_6_anims_ArithmeticAnim;
  __pyx_vtable_6rabbyt_6_anims_ArithmeticAnim.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_ArithmeticAnim.tp_base = __pyx_ptype_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_ArithmeticAnim.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_ArithmeticAnim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 761; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_ArithmeticAnim.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_ArithmeticAnim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 761; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "ArithmeticAnim", (PyObject *)&__pyx_type_6rabbyt_6_anims_ArithmeticAnim) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 761; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_ArithmeticAnim = &__pyx_type_6rabbyt_6_anims_ArithmeticAnim;
  __pyx_vtabptr_6rabbyt_6_anims_AnimPyFunc = &__pyx_vtable_6rabbyt_6_anims_AnimPyFunc;
  __pyx_vtable_6rabbyt_6_anims_AnimPyFunc.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_AnimPyFunc.tp_base = __pyx_ptype_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_AnimPyFunc.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_AnimPyFunc) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 802; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_AnimPyFunc.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_AnimPyFunc) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 802; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "AnimPyFunc", (PyObject *)&__pyx_type_6rabbyt_6_anims_AnimPyFunc) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 802; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimPyFunc = &__pyx_type_6rabbyt_6_anims_AnimPyFunc;
  __pyx_vtabptr_6rabbyt_6_anims_AnimProxy = &__pyx_vtable_6rabbyt_6_anims_AnimProxy;
  __pyx_vtable_6rabbyt_6_anims_AnimProxy.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_AnimSlotReader;
  __pyx_type_6rabbyt_6_anims_AnimProxy.tp_base = __pyx_ptype_6rabbyt_6_anims_AnimSlotReader;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_AnimProxy) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 830; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_AnimProxy.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_AnimProxy) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 830; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "AnimProxy", (PyObject *)&__pyx_type_6rabbyt_6_anims_AnimProxy) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 830; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimProxy = &__pyx_type_6rabbyt_6_anims_AnimProxy;
  __pyx_vtabptr_6rabbyt_6_anims_AnimRate = &__pyx_vtable_6rabbyt_6_anims_AnimRate;
  __pyx_vtable_6rabbyt_6_anims_AnimRate.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_Anim;
  __pyx_type_6rabbyt_6_anims_AnimRate.tp_base = __pyx_ptype_6rabbyt_6_anims_Anim;
  if (PyType_Ready(&__pyx_type_6rabbyt_6_anims_AnimRate) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 892; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_6_anims_AnimRate.tp_dict, __pyx_vtabptr_6rabbyt_6_anims_AnimRate) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 892; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "AnimRate", (PyObject *)&__pyx_type_6rabbyt_6_anims_AnimRate) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 892; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimRate = &__pyx_type_6rabbyt_6_anims_AnimRate;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":9 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n___credits__, __pyx_k2p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":31 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n___author__, __pyx_k3p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 31; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":66 */
  __pyx_1 = __Pyx_Import(__pyx_n_warnings, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_warnings, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":331 */
  __pyx_1 = PyInt_FromLong(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 331; goto __pyx_L1;}
  __pyx_k5 = __pyx_1;
  __pyx_1 = 0;
  Py_INCREF(__pyx_k6p);
  __pyx_k7 = __pyx_k6p;
  __pyx_2 = PyInt_FromLong((-1)); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 331; goto __pyx_L1;}
  __pyx_k8 = __pyx_2;
  __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":411 */
  Py_INCREF(Py_None);
  __pyx_k9 = Py_None;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":431 */
  __pyx_k10 = 0;
  __pyx_k11 = 0;
  Py_INCREF(Py_None);
  __pyx_k12 = Py_None;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":691 */
  Py_INCREF(Py_True);
  __pyx_k13 = Py_True;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":818 */
  Py_INCREF(Py_False);
  __pyx_k14 = Py_False;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":845 */
  Py_INCREF(Py_False);
  __pyx_k15 = Py_False;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._anims.pyx":904 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._anims");
}

static char *__pyx_filenames[] = {
  "rabbyt._anims.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static int __Pyx_GetStarArgs(
    PyObject **args, 
    PyObject **kwds,
    char *kwd_list[], 
    Py_ssize_t nargs,
    PyObject **args2, 
    PyObject **kwds2,
    char rqd_kwds[])
{
    PyObject *x = 0, *args1 = 0, *kwds1 = 0;
    int i;
    char **p;
    
    if (args2)
        *args2 = 0;
    if (kwds2)
        *kwds2 = 0;
    
    if (args2) {
        args1 = PyTuple_GetSlice(*args, 0, nargs);
        if (!args1)
            goto bad;
        *args2 = PyTuple_GetSlice(*args, nargs, PyTuple_GET_SIZE(*args));
        if (!*args2)
            goto bad;
    }
    else if (PyTuple_GET_SIZE(*args) > nargs) {
        int m = nargs;
        int n = PyTuple_GET_SIZE(*args);
        PyErr_Format(PyExc_TypeError,
            "function takes at most %d positional arguments (%d given)",
                m, n);
        goto bad;
    }
    else {
        args1 = *args;
        Py_INCREF(args1);
    }
    
    if (rqd_kwds && !*kwds)
            for (i = 0, p = kwd_list; *p; i++, p++)
                if (rqd_kwds[i])
                    goto missing_kwarg;
    
    if (kwds2) {
        if (*kwds) {
            kwds1 = PyDict_New();
            if (!kwds1)
                goto bad;
            *kwds2 = PyDict_Copy(*kwds);
            if (!*kwds2)
                goto bad;
            for (i = 0, p = kwd_list; *p; i++, p++) {
                x = PyDict_GetItemString(*kwds, *p);
                if (x) {
                    if (PyDict_SetItemString(kwds1, *p, x) < 0)
                        goto bad;
                    if (PyDict_DelItemString(*kwds2, *p) < 0)
                        goto bad;
                }
                else if (rqd_kwds && rqd_kwds[i])
                    goto missing_kwarg;
            }
        }
        else {
            *kwds2 = PyDict_New();
            if (!*kwds2)
                goto bad;
        }
    }
    else {
        kwds1 = *kwds;
        Py_XINCREF(kwds1);
        if (rqd_kwds && *kwds)
            for (i = 0, p = kwd_list; *p; i++, p++)
                if (rqd_kwds[i] && !PyDict_GetItemString(*kwds, *p))
                        goto missing_kwarg;
    }
    
    *args = args1;
    *kwds = kwds1;
    return 0;
missing_kwarg:
    PyErr_Format(PyExc_TypeError,
        "required keyword argument '%s' is missing", *p);
bad:
    Py_XDECREF(args1);
    Py_XDECREF(kwds1);
    if (args2) {
        Py_XDECREF(*args2);
    }
    if (kwds2) {
        Py_XDECREF(*kwds2);
    }
    return -1;
}

static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name) {
    if (!type) {
        PyErr_Format(PyExc_SystemError, "Missing type object");
        return 0;
    }
    if ((none_allowed && obj == Py_None) || PyObject_TypeCheck(obj, type))
        return 1;
    PyErr_Format(PyExc_TypeError,
        "Argument '%s' has incorrect type (expected %s, got %s)",
        name, type->tp_name, obj->ob_type->tp_name);
    return 0;
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

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type) {
    if (!type) {
        PyErr_Format(PyExc_SystemError, "Missing type object");
        return 0;
    }
    if (obj == Py_None || PyObject_TypeCheck(obj, type))
        return 1;
    PyErr_Format(PyExc_TypeError, "Cannot convert %s to %s",
        obj->ob_type->tp_name, type->tp_name);
    return 0;
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

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
    PyObject *result;
    result = PyObject_GetAttr(dict, name);
    if (!result)
        PyErr_SetObject(PyExc_NameError, name);
    return result;
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
