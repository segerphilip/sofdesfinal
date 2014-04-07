/* 0.9.7.2 on Sat Sep  5 16:08:39 2009 */

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
#include "stdlib.h"
#include "anim_sys.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static char __pyx_mdoc[] = "\nThis module provides some functions for collision detection.\n";

static PyObject *__Pyx_GetItemInt(PyObject *o, Py_ssize_t i); /*proto*/

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static PyObject *__Pyx_UnpackItem(PyObject *); /*proto*/
static int __Pyx_EndUnpack(PyObject *); /*proto*/

static int __Pyx_SetItemInt(PyObject *o, Py_ssize_t i, PyObject *v); /*proto*/

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/

static PyObject *__Pyx_ImportModule(char *name); /*proto*/

static int __Pyx_GetVtable(PyObject *dict, void *vtabptr); /*proto*/

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


struct __pyx_vtabstruct_6rabbyt_6_anims_cAnimable {
  PyObject *(*_modify_slots)(struct __pyx_obj_6rabbyt_6_anims_cAnimable *);
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_cAnimable *__pyx_vtabptr_6rabbyt_6_anims_cAnimable;



struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot {
  int (*c_set_anim)(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *,struct __pyx_obj_6rabbyt_6_anims_Anim *);
  struct __pyx_obj_6rabbyt_6_anims_Anim *(*c_get_anim)(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *);
  float (*c_get_value)(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *);
  int (*c_set_value)(struct __pyx_obj_6rabbyt_6_anims_AnimSlot *,float);
};
static struct __pyx_vtabstruct_6rabbyt_6_anims_AnimSlot *__pyx_vtabptr_6rabbyt_6_anims_AnimSlot;

static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_cAnimable = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_6_anims_AnimSlot = 0;

/* Declarations from rabbyt._sprites */

struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite {
  struct __pyx_obj_6rabbyt_6_anims_cAnimable __pyx_base;
  float _bounding_radius;
  AnimSlot_s _x;
  AnimSlot_s _y;
  AnimSlot_s _rot;
  AnimSlot_s _red;
  AnimSlot_s _green;
  AnimSlot_s _blue;
  AnimSlot_s _alpha;
  AnimSlot_s _scale_x;
  AnimSlot_s _scale_y;
};

struct __pyx_obj_6rabbyt_8_sprites_cSprite {
  struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite __pyx_base;
  struct __pyx_obj_6rabbyt_10primitives_Quad *_shape;
  struct __pyx_obj_6rabbyt_10primitives_Quad *_tex_shape;
  AnimSlot_s _u;
  AnimSlot_s _v;
  int _texture_id;
  int _bounding_radius_is_explicit;
};


struct __pyx_vtabstruct_6rabbyt_8_sprites_cBaseSprite {
  struct __pyx_vtabstruct_6rabbyt_6_anims_cAnimable __pyx_base;
  struct __pyx_t_6rabbyt_10primitives_Point2d (*_convert_offset)(struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *,float,float);
};
static struct __pyx_vtabstruct_6rabbyt_8_sprites_cBaseSprite *__pyx_vtabptr_6rabbyt_8_sprites_cBaseSprite;


struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite {
  struct __pyx_vtabstruct_6rabbyt_8_sprites_cBaseSprite __pyx_base;
  int (*_render)(struct __pyx_obj_6rabbyt_8_sprites_cSprite *);
  struct __pyx_t_6rabbyt_10primitives_float2 (*_bounds_x)(struct __pyx_obj_6rabbyt_8_sprites_cSprite *);
  struct __pyx_t_6rabbyt_10primitives_float2 (*_bounds_y)(struct __pyx_obj_6rabbyt_8_sprites_cSprite *);
};
static struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *__pyx_vtabptr_6rabbyt_8_sprites_cSprite;

static PyTypeObject *__pyx_ptype_6rabbyt_8_sprites_cBaseSprite = 0;
static PyTypeObject *__pyx_ptype_6rabbyt_8_sprites_cSprite = 0;

/* Declarations from rabbyt.collisions */

enum __pyx_t_6rabbyt_10collisions__Side {
  __pyx_e_6rabbyt_10collisions_LEFT = 1,
  __pyx_e_6rabbyt_10collisions_RIGHT = 2
};

enum __pyx_t_6rabbyt_10collisions__Axis {
  __pyx_e_6rabbyt_10collisions_X = 1,
  __pyx_e_6rabbyt_10collisions_Y = 2
};

struct __pyx_t_6rabbyt_10collisions_side_s {
  float x;
  float y;
  enum __pyx_t_6rabbyt_10collisions__Side side;
  struct __pyx_t_6rabbyt_10collisions_side_s *other_side;
  int index;
};

struct __pyx_t_6rabbyt_10collisions_collision_object_s {
  float x;
  float y;
  float brs;
};

struct __pyx_t_6rabbyt_10collisions_rect_s {
  float l;
  float r;
  float t;
  float b;
};

static int __pyx_k3;
static int __pyx_k4;
static int __pyx_f_6rabbyt_10collisions__compar_sides_x(void *,void *); /*proto*/
static int __pyx_f_6rabbyt_10collisions__compar_sides_y(void *,void *); /*proto*/
static void __pyx_f_6rabbyt_10collisions__rdc(struct __pyx_t_6rabbyt_10collisions_side_s **,int,enum __pyx_t_6rabbyt_10collisions__Axis,int,int,int); /*proto*/
static PyObject *__pyx_f_6rabbyt_10collisions__brute_force(struct __pyx_t_6rabbyt_10collisions_collision_object_s *,int,PyObject *); /*proto*/
static int __pyx_f_6rabbyt_10collisions__read_rect(PyObject *,struct __pyx_t_6rabbyt_10collisions_rect_s *); /*proto*/
static int __pyx_f_6rabbyt_10collisions__collide_rect(struct __pyx_t_6rabbyt_10collisions_rect_s *,struct __pyx_t_6rabbyt_10collisions_rect_s *); /*proto*/


/* Implementation of rabbyt.collisions */

static char __pyx_k1[] = "\nCopyright (C) 2007  Matthew Marshall\n\nPermission is hereby granted, free of charge, to any person obtaining a copy\nof this software and associated documentation files (the \"Software\"), to deal\nin the Software without restriction, including without limitation the rights\nto use, copy, modify, merge, publish, distribute, sublicense, and/or sell\ncopies of the Software, and to permit persons to whom the Software is\nfurnished to do so, subject to the following conditions:\n\nThe above copyright notice and this permission notice shall be included in\nall copies or substantial portions of the Software.\n\nTHE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\nIMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\nFITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\nAUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\nLIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\nOUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN\nTHE SOFTWARE.\n";
static char __pyx_k2[] = "Matthew Marshall <matthew@matthewmarshall.org>";

static PyObject *__pyx_n___credits__;
static PyObject *__pyx_n___author__;
static PyObject *__pyx_n_collide;
static PyObject *__pyx_n_collide_single;
static PyObject *__pyx_n_collide_groups;
static PyObject *__pyx_n_aabb_collide;
static PyObject *__pyx_n_aabb_collide_single;
static PyObject *__pyx_n_aabb_collide_groups;
static PyObject *__pyx_n_rdc;
static PyObject *__pyx_n_brute_force;
static PyObject *__pyx_n___docs_all__;

static PyObject *__pyx_k1p;
static PyObject *__pyx_k2p;

static PyObject *__pyx_n_x;
static PyObject *__pyx_n_y;
static PyObject *__pyx_n_bounding_radius;


static PyObject *__pyx_f_6rabbyt_10collisions__get_object_data(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_6rabbyt_10collisions__get_object_data(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_obj = 0;
  float __pyx_v_x;
  float __pyx_v_y;
  float __pyx_v_brs;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  float __pyx_3;
  float __pyx_4;
  PyObject *__pyx_5 = 0;
  PyObject *__pyx_6 = 0;
  Py_ssize_t __pyx_7;
  PyObject *__pyx_8 = 0;
  static char *__pyx_argnames[] = {"obj",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_obj)) return 0;
  Py_INCREF(__pyx_v_obj);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":45 */
  __pyx_1 = PyObject_HasAttr(__pyx_v_obj,__pyx_n_x); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 45; goto __pyx_L1;}
  if (__pyx_1) {
    __pyx_1 = PyObject_HasAttr(__pyx_v_obj,__pyx_n_y); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 45; goto __pyx_L1;}
  }
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":46 */
    __pyx_2 = PyObject_GetAttr(__pyx_v_obj, __pyx_n_x); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    __pyx_3 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_2 = PyObject_GetAttr(__pyx_v_obj, __pyx_n_y); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    __pyx_4 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_v_x = __pyx_3;
    __pyx_v_y = __pyx_4;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":47 */
    __pyx_1 = PyObject_HasAttr(__pyx_v_obj,__pyx_n_bounding_radius); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 47; goto __pyx_L1;}
    if (__pyx_1) {
      __pyx_2 = PyObject_GetAttr(__pyx_v_obj, __pyx_n_bounding_radius); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; goto __pyx_L1;}
      __pyx_5 = PyInt_FromLong(2); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; goto __pyx_L1;}
      __pyx_6 = PyNumber_Power(__pyx_2, __pyx_5, Py_None); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; goto __pyx_L1;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      __pyx_3 = PyFloat_AsDouble(__pyx_6); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; goto __pyx_L1;}
      Py_DECREF(__pyx_6); __pyx_6 = 0;
      __pyx_v_brs = __pyx_3;
      goto __pyx_L3;
    }
    /*else*/ {
      __pyx_v_brs = 0;
    }
    __pyx_L3:;
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":52 */
    __pyx_2 = __Pyx_GetItemInt(__pyx_v_obj, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; goto __pyx_L1;}
    __pyx_4 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_v_x = __pyx_4;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":53 */
    __pyx_5 = __Pyx_GetItemInt(__pyx_v_obj, 1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 53; goto __pyx_L1;}
    __pyx_3 = PyFloat_AsDouble(__pyx_5); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 53; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_v_y = __pyx_3;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":54 */
    __pyx_7 = PyObject_Length(__pyx_v_obj); if (__pyx_7 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 54; goto __pyx_L1;}
    __pyx_1 = (__pyx_7 > 2);
    if (__pyx_1) {
      __pyx_6 = __Pyx_GetItemInt(__pyx_v_obj, 2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 55; goto __pyx_L1;}
      __pyx_2 = PyInt_FromLong(2); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 55; goto __pyx_L1;}
      __pyx_5 = PyNumber_Power(__pyx_6, __pyx_2, Py_None); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 55; goto __pyx_L1;}
      Py_DECREF(__pyx_6); __pyx_6 = 0;
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      __pyx_4 = PyFloat_AsDouble(__pyx_5); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 55; goto __pyx_L1;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      __pyx_v_brs = __pyx_4;
      goto __pyx_L4;
    }
    /*else*/ {
      __pyx_v_brs = 0;
    }
    __pyx_L4:;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":58 */
  __pyx_6 = PyFloat_FromDouble(__pyx_v_x); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 58; goto __pyx_L1;}
  __pyx_2 = PyFloat_FromDouble(__pyx_v_y); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 58; goto __pyx_L1;}
  __pyx_5 = PyFloat_FromDouble(__pyx_v_brs); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 58; goto __pyx_L1;}
  __pyx_8 = PyTuple_New(3); if (!__pyx_8) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 58; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_8, 0, __pyx_6);
  PyTuple_SET_ITEM(__pyx_8, 1, __pyx_2);
  PyTuple_SET_ITEM(__pyx_8, 2, __pyx_5);
  __pyx_6 = 0;
  __pyx_2 = 0;
  __pyx_5 = 0;
  __pyx_r = __pyx_8;
  __pyx_8 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_5);
  Py_XDECREF(__pyx_6);
  Py_XDECREF(__pyx_8);
  __Pyx_AddTraceback("rabbyt.collisions._get_object_data");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_obj);
  return __pyx_r;
}

static PyObject *__pyx_n_min_split;
static PyObject *__pyx_n_extend;


static PyObject *__pyx_f_6rabbyt_10collisions_collide(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_10collisions_collide[] = "\n    ``collide(objects) -> list of collisions``\n\n    Collides ``objects``, first using ``rdc()`` and then using\n    ``brute_force()``.\n\n    Each object should have the attributes ``x``, ``y``, ``bounding_radius``,\n    and ``bounding_radius_squared``.\n    ";
static PyObject *__pyx_f_6rabbyt_10collisions_collide(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_objects = 0;
  PyObject *__pyx_v_collisions;
  PyObject *__pyx_v_group;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  Py_ssize_t __pyx_5;
  int __pyx_6;
  PyObject *__pyx_7 = 0;
  static char *__pyx_argnames[] = {"objects",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_objects)) return 0;
  Py_INCREF(__pyx_v_objects);
  __pyx_v_collisions = Py_None; Py_INCREF(Py_None);
  __pyx_v_group = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":70 */
  __pyx_1 = PyList_New(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; goto __pyx_L1;}
  Py_DECREF(__pyx_v_collisions);
  __pyx_v_collisions = __pyx_1;
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":71 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_rdc); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 71; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 71; goto __pyx_L1;}
  Py_INCREF(__pyx_v_objects);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_objects);
  __pyx_3 = PyDict_New(); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 71; goto __pyx_L1;}
  __pyx_4 = PyInt_FromLong(10); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 71; goto __pyx_L1;}
  if (PyDict_SetItem(__pyx_3, __pyx_n_min_split, __pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 71; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_4 = PyEval_CallObjectWithKeywords(__pyx_1, __pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 71; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_1 = PyObject_GetIter(__pyx_4); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 71; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  for (;;) {
    __pyx_2 = PyIter_Next(__pyx_1);
    if (!__pyx_2) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 71; goto __pyx_L1;}
      break;
    }
    Py_DECREF(__pyx_v_group);
    __pyx_v_group = __pyx_2;
    __pyx_2 = 0;
    __pyx_5 = PyObject_Length(__pyx_v_group); if (__pyx_5 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; goto __pyx_L1;}
    __pyx_6 = (__pyx_5 > 1);
    if (__pyx_6) {
      __pyx_3 = PyObject_GetAttr(__pyx_v_collisions, __pyx_n_extend); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 73; goto __pyx_L1;}
      __pyx_4 = __Pyx_GetName(__pyx_m, __pyx_n_brute_force); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 73; goto __pyx_L1;}
      __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 73; goto __pyx_L1;}
      Py_INCREF(__pyx_v_group);
      PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_group);
      __pyx_7 = PyObject_CallObject(__pyx_4, __pyx_2); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 73; goto __pyx_L1;}
      Py_DECREF(__pyx_4); __pyx_4 = 0;
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      __pyx_4 = PyTuple_New(1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 73; goto __pyx_L1;}
      PyTuple_SET_ITEM(__pyx_4, 0, __pyx_7);
      __pyx_7 = 0;
      __pyx_2 = PyObject_CallObject(__pyx_3, __pyx_4); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 73; goto __pyx_L1;}
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      Py_DECREF(__pyx_4); __pyx_4 = 0;
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      goto __pyx_L4;
    }
    __pyx_L4:;
  }
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":74 */
  Py_INCREF(__pyx_v_collisions);
  __pyx_r = __pyx_v_collisions;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_7);
  __Pyx_AddTraceback("rabbyt.collisions.collide");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_collisions);
  Py_DECREF(__pyx_v_group);
  Py_DECREF(__pyx_v_objects);
  return __pyx_r;
}

static PyObject *__pyx_n__get_object_data;
static PyObject *__pyx_n_append;

static PyObject *__pyx_f_6rabbyt_10collisions_collide_single(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_10collisions_collide_single[] = "\n    ``collide_single(single, objects)``\n\n    Finds collisions between a single object and a list of objects.\n\n    ``single`` can either be an object with ``x``, ``y``, and\n    ``bounding_radius`` attributes, or a tuple of ``(x,y, bounding_radius)``\n    (In both cases, ``bounding_radius`` is optional and defaults to ``0``.)\n    ";
static PyObject *__pyx_f_6rabbyt_10collisions_collide_single(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_single = 0;
  PyObject *__pyx_v_objects = 0;
  PyObject *__pyx_v_o;
  float __pyx_v_x;
  float __pyx_v_y;
  float __pyx_v_brs;
  float __pyx_v_dx;
  float __pyx_v_dy;
  float __pyx_v_ox;
  float __pyx_v_oy;
  float __pyx_v_obrs;
  PyObject *__pyx_v_collisions;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  float __pyx_4;
  PyObject *__pyx_5 = 0;
  int __pyx_6;
  static char *__pyx_argnames[] = {"single","objects",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_single, &__pyx_v_objects)) return 0;
  Py_INCREF(__pyx_v_single);
  Py_INCREF(__pyx_v_objects);
  __pyx_v_o = Py_None; Py_INCREF(Py_None);
  __pyx_v_collisions = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":90 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n__get_object_data); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  Py_INCREF(__pyx_v_single);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_single);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_1 = PyObject_GetIter(__pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  __pyx_4 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_v_x = __pyx_4;
  __pyx_3 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  __pyx_4 = PyFloat_AsDouble(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_v_y = __pyx_4;
  __pyx_2 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  __pyx_4 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_v_brs = __pyx_4;
  if (__Pyx_EndUnpack(__pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":92 */
  __pyx_3 = PyList_New(0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
  Py_DECREF(__pyx_v_collisions);
  __pyx_v_collisions = __pyx_3;
  __pyx_3 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":93 */
  __pyx_2 = PyObject_GetIter(__pyx_v_objects); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 93; goto __pyx_L1;}
  for (;;) {
    __pyx_1 = PyIter_Next(__pyx_2);
    if (!__pyx_1) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 93; goto __pyx_L1;}
      break;
    }
    Py_DECREF(__pyx_v_o);
    __pyx_v_o = __pyx_1;
    __pyx_1 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":94 */
    __pyx_3 = __Pyx_GetName(__pyx_m, __pyx_n__get_object_data); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    Py_INCREF(__pyx_v_o);
    PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_o);
    __pyx_5 = PyObject_CallObject(__pyx_3, __pyx_1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_3 = PyObject_GetIter(__pyx_5); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_1 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    __pyx_4 = PyFloat_AsDouble(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_v_ox = __pyx_4;
    __pyx_5 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    __pyx_4 = PyFloat_AsDouble(__pyx_5); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_v_oy = __pyx_4;
    __pyx_1 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    __pyx_4 = PyFloat_AsDouble(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_v_obrs = __pyx_4;
    if (__Pyx_EndUnpack(__pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":95 */
    __pyx_v_dx = (__pyx_v_x - __pyx_v_ox);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":96 */
    __pyx_v_dy = (__pyx_v_y - __pyx_v_oy);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":97 */
    __pyx_6 = (((__pyx_v_dx * __pyx_v_dx) + (__pyx_v_dy * __pyx_v_dy)) < (__pyx_v_obrs + __pyx_v_brs));
    if (__pyx_6) {
      __pyx_5 = PyObject_GetAttr(__pyx_v_collisions, __pyx_n_append); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 98; goto __pyx_L1;}
      __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 98; goto __pyx_L1;}
      Py_INCREF(__pyx_v_o);
      PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_o);
      __pyx_3 = PyObject_CallObject(__pyx_5, __pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 98; goto __pyx_L1;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      Py_DECREF(__pyx_1); __pyx_1 = 0;
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      goto __pyx_L4;
    }
    __pyx_L4:;
  }
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":99 */
  Py_INCREF(__pyx_v_collisions);
  __pyx_r = __pyx_v_collisions;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt.collisions.collide_single");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_o);
  Py_DECREF(__pyx_v_collisions);
  Py_DECREF(__pyx_v_single);
  Py_DECREF(__pyx_v_objects);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10collisions__compar_sides_x(void *__pyx_v_p1,void *__pyx_v_p2) {
  float __pyx_v_x1;
  float __pyx_v_x2;
  int __pyx_r;
  int __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":118 */
  __pyx_v_x1 = ((((struct __pyx_t_6rabbyt_10collisions_side_s **)__pyx_v_p1)[0])[0]).x;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":119 */
  __pyx_v_x2 = ((((struct __pyx_t_6rabbyt_10collisions_side_s **)__pyx_v_p2)[0])[0]).x;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":120 */
  __pyx_1 = (__pyx_v_x1 < __pyx_v_x2);
  if (__pyx_1) {
    __pyx_r = (-1);
    goto __pyx_L0;
    goto __pyx_L2;
  }
  __pyx_1 = (__pyx_v_x1 > __pyx_v_x2);
  if (__pyx_1) {
    __pyx_r = 1;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_r = 0;
    goto __pyx_L0;
  }
  __pyx_L2:;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10collisions__compar_sides_y(void *__pyx_v_p1,void *__pyx_v_p2) {
  float __pyx_v_y1;
  float __pyx_v_y2;
  int __pyx_r;
  int __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":129 */
  __pyx_v_y1 = ((((struct __pyx_t_6rabbyt_10collisions_side_s **)__pyx_v_p1)[0])[0]).y;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":130 */
  __pyx_v_y2 = ((((struct __pyx_t_6rabbyt_10collisions_side_s **)__pyx_v_p2)[0])[0]).y;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":131 */
  __pyx_1 = (__pyx_v_y1 < __pyx_v_y2);
  if (__pyx_1) {
    __pyx_r = (-1);
    goto __pyx_L0;
    goto __pyx_L2;
  }
  __pyx_1 = (__pyx_v_y1 > __pyx_v_y2);
  if (__pyx_1) {
    __pyx_r = 1;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_r = 0;
    goto __pyx_L0;
  }
  __pyx_L2:;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10collisions_rdc(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_10collisions_rdc[] = "\n    ``rdc(objects, [max_depth,] [min_split]) -> list of collision groups``\n\n    Uses the Recursive Dimensional Clustering algorithm to find groups of\n    colliding objects.\n\n    ``objects`` should be a list of objects.  Each object should have the\n    attributes ``x``, ``y``, and ``bounding_radius``.\n\n    If the number of objects in a collision group is less than ``min_split``,\n    recursion will stop.  This defaults to ``1``, but in practice, it is\n    usually faster to just use a brute force method once a group gets down\n    to ``10`` objects.\n\n    ``max_depth`` is the maximum number of recursions to make.  It defaults to\n    ``0``, which is infinite.\n\n    Instead of returning individual collisions, ``rdc()`` returns groups\n    (lists) of colliding objects.  For example, if ``A`` collides with ``B``\n    and ``B`` collides with ``C``, one of the groups will be ``[A, B, C]``,\n    even though ``A`` and ``C`` don\'t directly collide.\n\n    Also, each object is returned at most once.  If it is in one group, it won\'t\n    be in any other.  An object without any collisions isn\'t returned at all.\n    ";
static PyObject *__pyx_f_6rabbyt_10collisions_rdc(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_objects = 0;
  int __pyx_v_min_split;
  int __pyx_v_max_depth;
  struct __pyx_t_6rabbyt_10collisions_side_s *__pyx_v_side_list;
  struct __pyx_t_6rabbyt_10collisions_side_s **__pyx_v_side_p_list;
  int __pyx_v_length;
  int __pyx_v_i;
  int __pyx_v_d;
  float __pyx_v_r;
  float __pyx_v_x;
  float __pyx_v_y;
  PyObject *__pyx_v_o;
  PyObject *__pyx_v_groups;
  PyObject *__pyx_v_current_group;
  PyObject *__pyx_r;
  Py_ssize_t __pyx_1;
  long __pyx_2;
  PyObject *__pyx_3 = 0;
  float __pyx_4;
  int __pyx_5;
  PyObject *__pyx_6 = 0;
  PyObject *__pyx_7 = 0;
  static char *__pyx_argnames[] = {"objects","min_split","max_depth",0};
  __pyx_v_min_split = __pyx_k3;
  __pyx_v_max_depth = __pyx_k4;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O|ii", __pyx_argnames, &__pyx_v_objects, &__pyx_v_min_split, &__pyx_v_max_depth)) return 0;
  Py_INCREF(__pyx_v_objects);
  __pyx_v_o = Py_None; Py_INCREF(Py_None);
  __pyx_v_groups = Py_None; Py_INCREF(Py_None);
  __pyx_v_current_group = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":169 */
  __pyx_1 = PyObject_Length(__pyx_v_objects); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 169; goto __pyx_L1;}
  __pyx_v_length = (__pyx_1 * 2);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":171 */
  __pyx_v_side_list = ((struct __pyx_t_6rabbyt_10collisions_side_s *)malloc(((sizeof(struct __pyx_t_6rabbyt_10collisions_side_s)) * __pyx_v_length)));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":172 */
  __pyx_v_side_p_list = ((struct __pyx_t_6rabbyt_10collisions_side_s **)malloc(((sizeof(struct __pyx_t_6rabbyt_10collisions_side_s *)) * __pyx_v_length)));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":173 */
  /*try:*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":174 */
    __pyx_2 = (__pyx_v_length / 2);
    for (__pyx_v_i = 0; __pyx_v_i < __pyx_2; ++__pyx_v_i) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":175 */
      __pyx_3 = __Pyx_GetItemInt(__pyx_v_objects, __pyx_v_i); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L3;}
      Py_DECREF(__pyx_v_o);
      __pyx_v_o = __pyx_3;
      __pyx_3 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":176 */
      __pyx_3 = PyObject_GetAttr(__pyx_v_o, __pyx_n_bounding_radius); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 176; goto __pyx_L3;}
      __pyx_4 = PyFloat_AsDouble(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 176; goto __pyx_L3;}
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      __pyx_v_r = __pyx_4;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":177 */
      __pyx_3 = PyObject_GetAttr(__pyx_v_o, __pyx_n_x); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 177; goto __pyx_L3;}
      __pyx_4 = PyFloat_AsDouble(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 177; goto __pyx_L3;}
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      __pyx_v_x = __pyx_4;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":178 */
      __pyx_3 = PyObject_GetAttr(__pyx_v_o, __pyx_n_y); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L3;}
      __pyx_4 = PyFloat_AsDouble(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L3;}
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      __pyx_v_y = __pyx_4;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":179 */
      (__pyx_v_side_list[(__pyx_v_i * 2)]).x = (__pyx_v_x - __pyx_v_r);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":180 */
      (__pyx_v_side_list[(__pyx_v_i * 2)]).y = (__pyx_v_y - __pyx_v_r);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":181 */
      (__pyx_v_side_list[(__pyx_v_i * 2)]).side = __pyx_e_6rabbyt_10collisions_LEFT;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":182 */
      (__pyx_v_side_list[(__pyx_v_i * 2)]).index = __pyx_v_i;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":183 */
      (__pyx_v_side_list[((__pyx_v_i * 2) + 1)]).x = (__pyx_v_x + __pyx_v_r);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":184 */
      (__pyx_v_side_list[((__pyx_v_i * 2) + 1)]).y = (__pyx_v_y + __pyx_v_r);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":185 */
      (__pyx_v_side_list[((__pyx_v_i * 2) + 1)]).side = __pyx_e_6rabbyt_10collisions_RIGHT;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":186 */
      (__pyx_v_side_list[((__pyx_v_i * 2) + 1)]).index = __pyx_v_i;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":188 */
      (__pyx_v_side_p_list[(__pyx_v_i * 2)]) = (&(__pyx_v_side_list[(__pyx_v_i * 2)]));

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":189 */
      (__pyx_v_side_p_list[((__pyx_v_i * 2) + 1)]) = (&(__pyx_v_side_list[((__pyx_v_i * 2) + 1)]));
    }

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":191 */
    __pyx_f_6rabbyt_10collisions__rdc(__pyx_v_side_p_list,__pyx_v_length,__pyx_e_6rabbyt_10collisions_X,0,__pyx_v_min_split,__pyx_v_max_depth);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":193 */
    __pyx_3 = PyList_New(0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 193; goto __pyx_L3;}
    Py_DECREF(__pyx_v_groups);
    __pyx_v_groups = __pyx_3;
    __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":194 */
    __pyx_3 = PyList_New(0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 194; goto __pyx_L3;}
    Py_DECREF(__pyx_v_current_group);
    __pyx_v_current_group = __pyx_3;
    __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":195 */
    __pyx_v_d = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":196 */
    for (__pyx_v_i = 0; __pyx_v_i < __pyx_v_length; ++__pyx_v_i) {
      __pyx_5 = (((__pyx_v_side_p_list[__pyx_v_i])[0]).side == __pyx_e_6rabbyt_10collisions_LEFT);
      if (__pyx_5) {

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":198 */
        __pyx_5 = (__pyx_v_d == 0);
        if (__pyx_5) {
          __pyx_5 = (((__pyx_v_side_p_list[__pyx_v_i])[0]).index == ((__pyx_v_side_p_list[(__pyx_v_i + 1)])[0]).index);
          if (__pyx_5) {

            /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":205 */
            __pyx_v_i = (__pyx_v_i + 1);

            /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":206 */
            goto __pyx_L7;
            goto __pyx_L11;
          }
          __pyx_L11:;
          goto __pyx_L10;
        }
        __pyx_L10:;

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":207 */
        __pyx_v_d = (__pyx_v_d + 1);

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":208 */
        __pyx_3 = PyObject_GetAttr(__pyx_v_current_group, __pyx_n_append); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L3;}
        __pyx_6 = __Pyx_GetItemInt(__pyx_v_objects, ((__pyx_v_side_p_list[__pyx_v_i])[0]).index); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L3;}
        __pyx_7 = PyTuple_New(1); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L3;}
        PyTuple_SET_ITEM(__pyx_7, 0, __pyx_6);
        __pyx_6 = 0;
        __pyx_6 = PyObject_CallObject(__pyx_3, __pyx_7); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L3;}
        Py_DECREF(__pyx_3); __pyx_3 = 0;
        Py_DECREF(__pyx_7); __pyx_7 = 0;
        Py_DECREF(__pyx_6); __pyx_6 = 0;
        goto __pyx_L9;
      }
      /*else*/ {

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":210 */
        __pyx_v_d = (__pyx_v_d - 1);

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":211 */
        __pyx_5 = (__pyx_v_d == 0);
        if (__pyx_5) {

          /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":212 */
          __pyx_3 = PyObject_GetAttr(__pyx_v_groups, __pyx_n_append); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 212; goto __pyx_L3;}
          __pyx_7 = PyTuple_New(1); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 212; goto __pyx_L3;}
          Py_INCREF(__pyx_v_current_group);
          PyTuple_SET_ITEM(__pyx_7, 0, __pyx_v_current_group);
          __pyx_6 = PyObject_CallObject(__pyx_3, __pyx_7); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 212; goto __pyx_L3;}
          Py_DECREF(__pyx_3); __pyx_3 = 0;
          Py_DECREF(__pyx_7); __pyx_7 = 0;
          Py_DECREF(__pyx_6); __pyx_6 = 0;

          /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":213 */
          __pyx_3 = PyList_New(0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 213; goto __pyx_L3;}
          Py_DECREF(__pyx_v_current_group);
          __pyx_v_current_group = __pyx_3;
          __pyx_3 = 0;
          goto __pyx_L12;
        }
        __pyx_L12:;
      }
      __pyx_L9:;
      __pyx_L7:;
    }

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":214 */
    Py_INCREF(__pyx_v_groups);
    __pyx_r = __pyx_v_groups;
    goto __pyx_L2;
  }
  /*finally:*/ {
    int __pyx_why;
    PyObject *__pyx_exc_type, *__pyx_exc_value, *__pyx_exc_tb;
    int __pyx_exc_lineno;
    __pyx_why = 0; goto __pyx_L4;
    __pyx_L2: __pyx_why = 3; goto __pyx_L4;
    __pyx_L3: {
      __pyx_why = 4;
      Py_XDECREF(__pyx_7); __pyx_7 = 0;
      Py_XDECREF(__pyx_6); __pyx_6 = 0;
      Py_XDECREF(__pyx_3); __pyx_3 = 0;
      PyErr_Fetch(&__pyx_exc_type, &__pyx_exc_value, &__pyx_exc_tb);
      __pyx_exc_lineno = __pyx_lineno;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":216 */
    free(__pyx_v_side_list);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":217 */
    free(__pyx_v_side_p_list);
    switch (__pyx_why) {
      case 3: goto __pyx_L0;
      case 4: {
        PyErr_Restore(__pyx_exc_type, __pyx_exc_value, __pyx_exc_tb);
        __pyx_lineno = __pyx_exc_lineno;
        __pyx_exc_type = 0;
        __pyx_exc_value = 0;
        __pyx_exc_tb = 0;
        goto __pyx_L1;
      }
    }
  }

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_6);
  Py_XDECREF(__pyx_7);
  __Pyx_AddTraceback("rabbyt.collisions.rdc");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_o);
  Py_DECREF(__pyx_v_groups);
  Py_DECREF(__pyx_v_current_group);
  Py_DECREF(__pyx_v_objects);
  return __pyx_r;
}

static void __pyx_f_6rabbyt_10collisions__rdc(struct __pyx_t_6rabbyt_10collisions_side_s **__pyx_v_side_p_list,int __pyx_v_length,enum __pyx_t_6rabbyt_10collisions__Axis __pyx_v_axis,int __pyx_v_depth,int __pyx_v_min_split,int __pyx_v_max_depth) {
  int __pyx_v_i;
  enum __pyx_t_6rabbyt_10collisions__Axis __pyx_v_next_axis;
  int __pyx_v_group_start;
  int __pyx_v_d;
  int __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":222 */
  __pyx_1 = (__pyx_v_length <= (__pyx_v_min_split * 2));
  if (__pyx_1) {
    goto __pyx_L0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":224 */
  __pyx_1 = (__pyx_v_max_depth > 0);
  if (__pyx_1) {
    __pyx_1 = (__pyx_v_depth >= __pyx_v_max_depth);
  }
  if (__pyx_1) {
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":229 */
  __pyx_1 = (__pyx_v_axis == __pyx_e_6rabbyt_10collisions_X);
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":230 */
    qsort(__pyx_v_side_p_list,__pyx_v_length,(sizeof(struct __pyx_t_6rabbyt_10collisions_side_s *)),__pyx_f_6rabbyt_10collisions__compar_sides_x);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":231 */
    __pyx_v_next_axis = __pyx_e_6rabbyt_10collisions_Y;
    goto __pyx_L4;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":233 */
    qsort(__pyx_v_side_p_list,__pyx_v_length,(sizeof(struct __pyx_t_6rabbyt_10collisions_side_s *)),__pyx_f_6rabbyt_10collisions__compar_sides_y);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":234 */
    __pyx_v_next_axis = __pyx_e_6rabbyt_10collisions_X;
  }
  __pyx_L4:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":238 */
  __pyx_v_group_start = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":239 */
  __pyx_v_d = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":240 */
  for (__pyx_v_i = 0; __pyx_v_i < __pyx_v_length; ++__pyx_v_i) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":241 */
    __pyx_1 = (__pyx_v_group_start == 0);
    if (__pyx_1) {
      __pyx_1 = (__pyx_v_i == (__pyx_v_length - 1));
    }
    if (__pyx_1) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":244 */
      __pyx_1 = (__pyx_v_depth == 0);
      if (__pyx_1) {
        __pyx_f_6rabbyt_10collisions__rdc(__pyx_v_side_p_list,__pyx_v_length,__pyx_e_6rabbyt_10collisions_Y,1,__pyx_v_min_split,__pyx_v_max_depth);
        goto __pyx_L8;
      }
      __pyx_L8:;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":246 */
      goto __pyx_L0;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":248 */
    __pyx_1 = (((__pyx_v_side_p_list[__pyx_v_i])[0]).side == __pyx_e_6rabbyt_10collisions_LEFT);
    if (__pyx_1) {
      __pyx_v_d = (__pyx_v_d + 1);
      goto __pyx_L9;
    }
    /*else*/ {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":251 */
      __pyx_v_d = (__pyx_v_d - 1);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":252 */
      __pyx_1 = (__pyx_v_d == 0);
      if (__pyx_1) {
        __pyx_1 = (__pyx_v_i == (__pyx_v_length - 1));
        if (!__pyx_1) {
          __pyx_1 = (__pyx_v_axis == __pyx_e_6rabbyt_10collisions_X);
          if (__pyx_1) {
            __pyx_1 = (((__pyx_v_side_p_list[(__pyx_v_i + 1)])[0]).x != ((__pyx_v_side_p_list[__pyx_v_i])[0]).x);
          }
          if (!__pyx_1) {
            __pyx_1 = (__pyx_v_axis == __pyx_e_6rabbyt_10collisions_Y);
            if (__pyx_1) {
              __pyx_1 = (((__pyx_v_side_p_list[(__pyx_v_i + 1)])[0]).y != ((__pyx_v_side_p_list[__pyx_v_i])[0]).y);
            }
          }
        }
        if (__pyx_1) {

          /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":263 */
          __pyx_f_6rabbyt_10collisions__rdc((&(__pyx_v_side_p_list[__pyx_v_group_start])),((__pyx_v_i - __pyx_v_group_start) + 1),__pyx_v_next_axis,(__pyx_v_depth + 1),__pyx_v_min_split,__pyx_v_max_depth);

          /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":265 */
          __pyx_v_group_start = (__pyx_v_i + 1);
          goto __pyx_L11;
        }
        __pyx_L11:;
        goto __pyx_L10;
      }
      __pyx_L10:;
    }
    __pyx_L9:;
  }

  __pyx_L0:;
}

static PyObject *__pyx_f_6rabbyt_10collisions__brute_force(struct __pyx_t_6rabbyt_10collisions_collision_object_s *__pyx_v_objs,int __pyx_v_length,PyObject *__pyx_v_objects) {
  float __pyx_v_dx;
  float __pyx_v_dy;
  int __pyx_v_i;
  int __pyx_v_j;
  PyObject *__pyx_v_collisions;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  long __pyx_2;
  int __pyx_3;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  PyObject *__pyx_6 = 0;
  Py_INCREF(__pyx_v_objects);
  __pyx_v_collisions = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":275 */
  __pyx_1 = PyList_New(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 275; goto __pyx_L1;}
  Py_DECREF(__pyx_v_collisions);
  __pyx_v_collisions = __pyx_1;
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":276 */
  __pyx_2 = (__pyx_v_length - 1);
  for (__pyx_v_i = 0; __pyx_v_i < __pyx_2; ++__pyx_v_i) {
    for (__pyx_v_j = __pyx_v_i+1; __pyx_v_j < __pyx_v_length; ++__pyx_v_j) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":278 */
      __pyx_v_dx = ((__pyx_v_objs[__pyx_v_i]).x - (__pyx_v_objs[__pyx_v_j]).x);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":279 */
      __pyx_v_dy = ((__pyx_v_objs[__pyx_v_i]).y - (__pyx_v_objs[__pyx_v_j]).y);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":280 */
      __pyx_3 = (((__pyx_v_dx * __pyx_v_dx) + (__pyx_v_dy * __pyx_v_dy)) < ((__pyx_v_objs[__pyx_v_i]).brs + (__pyx_v_objs[__pyx_v_j]).brs));
      if (__pyx_3) {
        __pyx_1 = PyObject_GetAttr(__pyx_v_collisions, __pyx_n_append); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 281; goto __pyx_L1;}
        __pyx_4 = __Pyx_GetItemInt(__pyx_v_objects, __pyx_v_i); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 281; goto __pyx_L1;}
        __pyx_5 = __Pyx_GetItemInt(__pyx_v_objects, __pyx_v_j); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 282; goto __pyx_L1;}
        __pyx_6 = PyTuple_New(2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 281; goto __pyx_L1;}
        PyTuple_SET_ITEM(__pyx_6, 0, __pyx_4);
        PyTuple_SET_ITEM(__pyx_6, 1, __pyx_5);
        __pyx_4 = 0;
        __pyx_5 = 0;
        __pyx_4 = PyTuple_New(1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 281; goto __pyx_L1;}
        PyTuple_SET_ITEM(__pyx_4, 0, __pyx_6);
        __pyx_6 = 0;
        __pyx_5 = PyObject_CallObject(__pyx_1, __pyx_4); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 281; goto __pyx_L1;}
        Py_DECREF(__pyx_1); __pyx_1 = 0;
        Py_DECREF(__pyx_4); __pyx_4 = 0;
        Py_DECREF(__pyx_5); __pyx_5 = 0;
        goto __pyx_L6;
      }
      __pyx_L6:;
    }
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":283 */
  Py_INCREF(__pyx_v_collisions);
  __pyx_r = __pyx_v_collisions;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  Py_XDECREF(__pyx_6);
  __Pyx_AddTraceback("rabbyt.collisions._brute_force");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_collisions);
  Py_DECREF(__pyx_v_objects);
  return __pyx_r;
}

static PyObject *__pyx_n_bounding_radius_squared;

static PyObject *__pyx_f_6rabbyt_10collisions_brute_force(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_10collisions_brute_force[] = "\n    ``brute_force(objects) -> list of collisions``\n\n    Finds collisions between ``objects`` using a brute force algorithm.\n\n    ``objects`` should be a list of objects, each of which have the attributes\n    ``x``, ``y``, and ``bounding_radius_squared``.  Each object is checked\n    against every other object.\n\n    For example, if ``A`` collides with ``B``, ``B`` collides with ``C``, and\n    ``D`` doesn\'t collide with anything, the result will be:\n    ``[(A, B), (B, C)]``.\n    ";
static PyObject *__pyx_f_6rabbyt_10collisions_brute_force(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_objects = 0;
  struct __pyx_t_6rabbyt_10collisions_collision_object_s *__pyx_v_objs;
  int __pyx_v_i;
  int __pyx_v_length;
  PyObject *__pyx_v_o;
  PyObject *__pyx_r;
  Py_ssize_t __pyx_1;
  PyObject *__pyx_2 = 0;
  float __pyx_3;
  static char *__pyx_argnames[] = {"objects",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_objects)) return 0;
  Py_INCREF(__pyx_v_objects);
  __pyx_v_o = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":302 */
  __pyx_1 = PyObject_Length(__pyx_v_objects); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 302; goto __pyx_L1;}
  __pyx_v_length = __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":303 */
  __pyx_v_objs = ((struct __pyx_t_6rabbyt_10collisions_collision_object_s *)malloc(((sizeof(struct __pyx_t_6rabbyt_10collisions_collision_object_s)) * __pyx_v_length)));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":304 */
  /*try:*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":309 */
    for (__pyx_v_i = 0; __pyx_v_i < __pyx_v_length; ++__pyx_v_i) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":310 */
      __pyx_2 = __Pyx_GetItemInt(__pyx_v_objects, __pyx_v_i); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 310; goto __pyx_L3;}
      Py_DECREF(__pyx_v_o);
      __pyx_v_o = __pyx_2;
      __pyx_2 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":311 */
      __pyx_2 = PyObject_GetAttr(__pyx_v_o, __pyx_n_x); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 311; goto __pyx_L3;}
      __pyx_3 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 311; goto __pyx_L3;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      (__pyx_v_objs[__pyx_v_i]).x = __pyx_3;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":312 */
      __pyx_2 = PyObject_GetAttr(__pyx_v_o, __pyx_n_y); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 312; goto __pyx_L3;}
      __pyx_3 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 312; goto __pyx_L3;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      (__pyx_v_objs[__pyx_v_i]).y = __pyx_3;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":313 */
      __pyx_2 = PyObject_GetAttr(__pyx_v_o, __pyx_n_bounding_radius_squared); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 313; goto __pyx_L3;}
      __pyx_3 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 313; goto __pyx_L3;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      (__pyx_v_objs[__pyx_v_i]).brs = __pyx_3;
    }

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":315 */
    __pyx_2 = __pyx_f_6rabbyt_10collisions__brute_force(__pyx_v_objs,__pyx_v_length,__pyx_v_objects); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 315; goto __pyx_L3;}
    __pyx_r = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L2;
  }
  /*finally:*/ {
    int __pyx_why;
    PyObject *__pyx_exc_type, *__pyx_exc_value, *__pyx_exc_tb;
    int __pyx_exc_lineno;
    __pyx_why = 0; goto __pyx_L4;
    __pyx_L2: __pyx_why = 3; goto __pyx_L4;
    __pyx_L3: {
      __pyx_why = 4;
      Py_XDECREF(__pyx_2); __pyx_2 = 0;
      PyErr_Fetch(&__pyx_exc_type, &__pyx_exc_value, &__pyx_exc_tb);
      __pyx_exc_lineno = __pyx_lineno;
      goto __pyx_L4;
    }
    __pyx_L4:;
    free(__pyx_v_objs);
    switch (__pyx_why) {
      case 3: goto __pyx_L0;
      case 4: {
        PyErr_Restore(__pyx_exc_type, __pyx_exc_value, __pyx_exc_tb);
        __pyx_lineno = __pyx_exc_lineno;
        __pyx_exc_type = 0;
        __pyx_exc_value = 0;
        __pyx_exc_tb = 0;
        goto __pyx_L1;
      }
    }
  }

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt.collisions.brute_force");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_o);
  Py_DECREF(__pyx_v_objects);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10collisions_collide_groups(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_10collisions_collide_groups[] = "\n    ``collide_groups(group_a, group_b)``\n\n    Returns a list of collisions between objects in ``group_a`` with objects\n    in ``group_b``.\n\n    All objects must either have ``x``, ``y``, and (optionally)\n    ``bounding_radius`` attributes *or* behave like a tuple with the form\n    ``(x, y, bounding_radius)`` or ``(x, y)``.\n\n    If ``bounding_radius`` is missing it will default to ``0``.\n    ";
static PyObject *__pyx_f_6rabbyt_10collisions_collide_groups(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_group_a = 0;
  PyObject *__pyx_v_group_b = 0;
  struct __pyx_t_6rabbyt_10collisions_collision_object_s *__pyx_v_c_group_b;
  int __pyx_v_i;
  int __pyx_v_length;
  struct __pyx_t_6rabbyt_10collisions_collision_object_s __pyx_v_obj;
  PyObject *__pyx_v_o;
  float __pyx_v_dx;
  float __pyx_v_dy;
  PyObject *__pyx_v_collisions;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_ssize_t __pyx_3;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  float __pyx_6;
  int __pyx_7;
  static char *__pyx_argnames[] = {"group_a","group_b",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_group_a, &__pyx_v_group_b)) return 0;
  Py_INCREF(__pyx_v_group_a);
  Py_INCREF(__pyx_v_group_b);
  __pyx_v_o = Py_None; Py_INCREF(Py_None);
  __pyx_v_collisions = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":339 */
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 339; goto __pyx_L1;}
  Py_INCREF(__pyx_v_group_b);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_group_b);
  __pyx_2 = PyObject_CallObject(((PyObject *)(&PyList_Type)), __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 339; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_v_group_b);
  __pyx_v_group_b = __pyx_2;
  __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":340 */
  __pyx_3 = PyObject_Length(__pyx_v_group_b); if (__pyx_3 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 340; goto __pyx_L1;}
  __pyx_v_length = __pyx_3;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":342 */
  __pyx_v_c_group_b = ((struct __pyx_t_6rabbyt_10collisions_collision_object_s *)malloc(((sizeof(struct __pyx_t_6rabbyt_10collisions_collision_object_s)) * __pyx_v_length)));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":343 */
  /*try:*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":344 */
    __pyx_v_i = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":345 */
    __pyx_1 = PyObject_GetIter(__pyx_v_group_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 345; goto __pyx_L3;}
    for (;;) {
      __pyx_2 = PyIter_Next(__pyx_1);
      if (!__pyx_2) {
        if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 345; goto __pyx_L3;}
        break;
      }
      Py_DECREF(__pyx_v_o);
      __pyx_v_o = __pyx_2;
      __pyx_2 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":346 */
      __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n__get_object_data); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      __pyx_4 = PyTuple_New(1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      Py_INCREF(__pyx_v_o);
      PyTuple_SET_ITEM(__pyx_4, 0, __pyx_v_o);
      __pyx_5 = PyObject_CallObject(__pyx_2, __pyx_4); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      Py_DECREF(__pyx_4); __pyx_4 = 0;
      __pyx_2 = PyObject_GetIter(__pyx_5); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      __pyx_4 = __Pyx_UnpackItem(__pyx_2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      __pyx_6 = PyFloat_AsDouble(__pyx_4); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      Py_DECREF(__pyx_4); __pyx_4 = 0;
      (__pyx_v_c_group_b[__pyx_v_i]).x = __pyx_6;
      __pyx_5 = __Pyx_UnpackItem(__pyx_2); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      __pyx_6 = PyFloat_AsDouble(__pyx_5); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      (__pyx_v_c_group_b[__pyx_v_i]).y = __pyx_6;
      __pyx_4 = __Pyx_UnpackItem(__pyx_2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      __pyx_6 = PyFloat_AsDouble(__pyx_4); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      Py_DECREF(__pyx_4); __pyx_4 = 0;
      (__pyx_v_c_group_b[__pyx_v_i]).brs = __pyx_6;
      if (__Pyx_EndUnpack(__pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 346; goto __pyx_L3;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":347 */
      __pyx_v_i = (__pyx_v_i + 1);
    }
    Py_DECREF(__pyx_1); __pyx_1 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":349 */
    __pyx_5 = PyList_New(0); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 349; goto __pyx_L3;}
    Py_DECREF(__pyx_v_collisions);
    __pyx_v_collisions = __pyx_5;
    __pyx_5 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":350 */
    __pyx_4 = PyObject_GetIter(__pyx_v_group_a); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 350; goto __pyx_L3;}
    for (;;) {
      __pyx_2 = PyIter_Next(__pyx_4);
      if (!__pyx_2) {
        if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 350; goto __pyx_L3;}
        break;
      }
      Py_DECREF(__pyx_v_o);
      __pyx_v_o = __pyx_2;
      __pyx_2 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":351 */
      __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n__get_object_data); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      __pyx_5 = PyTuple_New(1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      Py_INCREF(__pyx_v_o);
      PyTuple_SET_ITEM(__pyx_5, 0, __pyx_v_o);
      __pyx_2 = PyObject_CallObject(__pyx_1, __pyx_5); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      Py_DECREF(__pyx_1); __pyx_1 = 0;
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      __pyx_1 = PyObject_GetIter(__pyx_2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      __pyx_5 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      __pyx_6 = PyFloat_AsDouble(__pyx_5); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      __pyx_v_obj.x = __pyx_6;
      __pyx_2 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      __pyx_6 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      __pyx_v_obj.y = __pyx_6;
      __pyx_5 = __Pyx_UnpackItem(__pyx_1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      __pyx_6 = PyFloat_AsDouble(__pyx_5); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      __pyx_v_obj.brs = __pyx_6;
      if (__Pyx_EndUnpack(__pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 351; goto __pyx_L3;}
      Py_DECREF(__pyx_1); __pyx_1 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":352 */
      for (__pyx_v_i = 0; __pyx_v_i < __pyx_v_length; ++__pyx_v_i) {

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":353 */
        __pyx_v_dx = ((__pyx_v_c_group_b[__pyx_v_i]).x - __pyx_v_obj.x);

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":354 */
        __pyx_v_dy = ((__pyx_v_c_group_b[__pyx_v_i]).y - __pyx_v_obj.y);

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":355 */
        __pyx_7 = (((__pyx_v_dx * __pyx_v_dx) + (__pyx_v_dy * __pyx_v_dy)) < ((__pyx_v_c_group_b[__pyx_v_i]).brs + __pyx_v_obj.brs));
        if (__pyx_7) {
          __pyx_2 = PyObject_GetAttr(__pyx_v_collisions, __pyx_n_append); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 356; goto __pyx_L3;}
          __pyx_5 = __Pyx_GetItemInt(__pyx_v_group_b, __pyx_v_i); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 356; goto __pyx_L3;}
          __pyx_1 = PyTuple_New(2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 356; goto __pyx_L3;}
          Py_INCREF(__pyx_v_o);
          PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_o);
          PyTuple_SET_ITEM(__pyx_1, 1, __pyx_5);
          __pyx_5 = 0;
          __pyx_5 = PyTuple_New(1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 356; goto __pyx_L3;}
          PyTuple_SET_ITEM(__pyx_5, 0, __pyx_1);
          __pyx_1 = 0;
          __pyx_1 = PyObject_CallObject(__pyx_2, __pyx_5); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 356; goto __pyx_L3;}
          Py_DECREF(__pyx_2); __pyx_2 = 0;
          Py_DECREF(__pyx_5); __pyx_5 = 0;
          Py_DECREF(__pyx_1); __pyx_1 = 0;
          goto __pyx_L11;
        }
        __pyx_L11:;
      }
    }
    Py_DECREF(__pyx_4); __pyx_4 = 0;
  }
  /*finally:*/ {
    int __pyx_why;
    PyObject *__pyx_exc_type, *__pyx_exc_value, *__pyx_exc_tb;
    int __pyx_exc_lineno;
    __pyx_why = 0; goto __pyx_L4;
    __pyx_L3: {
      __pyx_why = 4;
      Py_XDECREF(__pyx_2); __pyx_2 = 0;
      Py_XDECREF(__pyx_5); __pyx_5 = 0;
      Py_XDECREF(__pyx_1); __pyx_1 = 0;
      Py_XDECREF(__pyx_4); __pyx_4 = 0;
      PyErr_Fetch(&__pyx_exc_type, &__pyx_exc_value, &__pyx_exc_tb);
      __pyx_exc_lineno = __pyx_lineno;
      goto __pyx_L4;
    }
    __pyx_L4:;
    free(__pyx_v_c_group_b);
    switch (__pyx_why) {
      case 4: {
        PyErr_Restore(__pyx_exc_type, __pyx_exc_value, __pyx_exc_tb);
        __pyx_lineno = __pyx_exc_lineno;
        __pyx_exc_type = 0;
        __pyx_exc_value = 0;
        __pyx_exc_tb = 0;
        goto __pyx_L1;
      }
    }
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":360 */
  Py_INCREF(__pyx_v_collisions);
  __pyx_r = __pyx_v_collisions;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt.collisions.collide_groups");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_o);
  Py_DECREF(__pyx_v_collisions);
  Py_DECREF(__pyx_v_group_a);
  Py_DECREF(__pyx_v_group_b);
  return __pyx_r;
}

static PyObject *__pyx_n_left;
static PyObject *__pyx_n_right;
static PyObject *__pyx_n_top;
static PyObject *__pyx_n_bottom;

static int __pyx_f_6rabbyt_10collisions__read_rect(PyObject *__pyx_v_obj,struct __pyx_t_6rabbyt_10collisions_rect_s *__pyx_v_rect) {
  float __pyx_v_x;
  float __pyx_v_y;
  struct __pyx_obj_6rabbyt_8_sprites_cSprite *__pyx_v_sprite;
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_temp_float2;
  int __pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  float __pyx_3;
  float __pyx_4;
  Py_INCREF(__pyx_v_obj);
  __pyx_v_sprite = ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)Py_None); Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":370 */
  __pyx_1 = PyObject_IsInstance(__pyx_v_obj,((PyObject *)__pyx_ptype_6rabbyt_8_sprites_cSprite)); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 370; goto __pyx_L1;}
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":371 */
    if (!__Pyx_TypeTest(__pyx_v_obj, __pyx_ptype_6rabbyt_8_sprites_cSprite)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 371; goto __pyx_L1;}
    Py_INCREF(__pyx_v_obj);
    Py_DECREF(((PyObject *)__pyx_v_sprite));
    __pyx_v_sprite = ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_obj);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":372 */
    READ_SLOT((&__pyx_v_sprite->__pyx_base._x),(&__pyx_v_x));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":373 */
    READ_SLOT((&__pyx_v_sprite->__pyx_base._y),(&__pyx_v_y));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":374 */
    __pyx_v_temp_float2 = ((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)__pyx_v_sprite->__pyx_base.__pyx_base.__pyx_vtab)->_bounds_x(__pyx_v_sprite);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":375 */
    __pyx_v_rect->l = (__pyx_v_temp_float2.a + __pyx_v_x);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":376 */
    __pyx_v_rect->r = (__pyx_v_temp_float2.b + __pyx_v_x);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":377 */
    __pyx_v_temp_float2 = ((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)__pyx_v_sprite->__pyx_base.__pyx_base.__pyx_vtab)->_bounds_y(__pyx_v_sprite);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":378 */
    __pyx_v_rect->b = (__pyx_v_temp_float2.a + __pyx_v_y);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":379 */
    __pyx_v_rect->t = (__pyx_v_temp_float2.b + __pyx_v_y);
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":381 */
    __pyx_2 = PyObject_GetAttr(__pyx_v_obj, __pyx_n_left); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 381; goto __pyx_L1;}
    __pyx_3 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 381; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_v_rect->l = __pyx_3;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":382 */
    __pyx_2 = PyObject_GetAttr(__pyx_v_obj, __pyx_n_right); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 382; goto __pyx_L1;}
    __pyx_3 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 382; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_v_rect->r = __pyx_3;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":383 */
    __pyx_2 = PyObject_GetAttr(__pyx_v_obj, __pyx_n_top); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 383; goto __pyx_L1;}
    __pyx_3 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 383; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_v_rect->t = __pyx_3;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":384 */
    __pyx_2 = PyObject_GetAttr(__pyx_v_obj, __pyx_n_bottom); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 384; goto __pyx_L1;}
    __pyx_3 = PyFloat_AsDouble(__pyx_2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 384; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_v_rect->b = __pyx_3;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":385 */
  __pyx_1 = (__pyx_v_rect->r < __pyx_v_rect->l);
  if (__pyx_1) {
    __pyx_3 = __pyx_v_rect->r;
    __pyx_4 = __pyx_v_rect->l;
    __pyx_v_rect->l = __pyx_3;
    __pyx_v_rect->r = __pyx_4;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":388 */
  __pyx_1 = (__pyx_v_rect->t < __pyx_v_rect->b);
  if (__pyx_1) {
    __pyx_3 = __pyx_v_rect->t;
    __pyx_4 = __pyx_v_rect->b;
    __pyx_v_rect->b = __pyx_3;
    __pyx_v_rect->t = __pyx_4;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":390 */
  __pyx_r = 1;
  goto __pyx_L0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt.collisions._read_rect");
  __pyx_r = (-1);
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_sprite);
  Py_DECREF(__pyx_v_obj);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_10collisions__collide_rect(struct __pyx_t_6rabbyt_10collisions_rect_s *__pyx_v_a,struct __pyx_t_6rabbyt_10collisions_rect_s *__pyx_v_b) {
  int __pyx_r;
  int __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":393 */
  __pyx_1 = (__pyx_v_a->l <= __pyx_v_b->r);
  if (__pyx_1) {
    __pyx_1 = (__pyx_v_a->r >= __pyx_v_b->l);
    if (__pyx_1) {
      __pyx_1 = (__pyx_v_a->b <= __pyx_v_b->t);
      if (__pyx_1) {
        __pyx_1 = (__pyx_v_a->t >= __pyx_v_b->b);
      }
    }
  }
  if (__pyx_1) {
    __pyx_r = 1;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":395 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10collisions_aabb_collide(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_10collisions_aabb_collide[] = "\n    ``aabb_collide(objects)``\n\n    ``aabb_collide`` works similar to ``collide``,  but instead of using\n    bounding radius it uses axis aligned bounding boxes [AABB].\n\n    All objects must have ``left``, ``top``, ``right``, and ``bottom``\n    attributes.\n    ";
static PyObject *__pyx_f_6rabbyt_10collisions_aabb_collide(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_objects = 0;
  struct __pyx_t_6rabbyt_10collisions_side_s *__pyx_v_side_list;
  struct __pyx_t_6rabbyt_10collisions_side_s **__pyx_v_side_p_list;
  struct __pyx_t_6rabbyt_10collisions_side_s *__pyx_v_temp_side;
  int __pyx_v_length;
  int __pyx_v_i;
  int __pyx_v_j;
  int __pyx_v_index;
  float __pyx_v_l;
  float __pyx_v_t;
  float __pyx_v_r;
  float __pyx_v_b;
  struct __pyx_t_6rabbyt_10collisions_rect_s __pyx_v_rect;
  PyObject *__pyx_v_o;
  PyObject *__pyx_v_collisions;
  PyObject *__pyx_r;
  Py_ssize_t __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  PyObject *__pyx_5 = 0;
  PyObject *__pyx_6 = 0;
  static char *__pyx_argnames[] = {"objects",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_objects)) return 0;
  Py_INCREF(__pyx_v_objects);
  __pyx_v_o = Py_None; Py_INCREF(Py_None);
  __pyx_v_collisions = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":416 */
  __pyx_1 = PyObject_Length(__pyx_v_objects); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 416; goto __pyx_L1;}
  __pyx_v_length = (__pyx_1 * 2);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":418 */
  __pyx_v_side_list = ((struct __pyx_t_6rabbyt_10collisions_side_s *)malloc(((sizeof(struct __pyx_t_6rabbyt_10collisions_side_s)) * __pyx_v_length)));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":419 */
  __pyx_v_side_p_list = ((struct __pyx_t_6rabbyt_10collisions_side_s **)malloc(((sizeof(struct __pyx_t_6rabbyt_10collisions_side_s *)) * __pyx_v_length)));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":420 */
  /*try:*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":421 */
    __pyx_v_i = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":422 */
    __pyx_2 = PyObject_GetIter(__pyx_v_objects); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 422; goto __pyx_L3;}
    for (;;) {
      __pyx_3 = PyIter_Next(__pyx_2);
      if (!__pyx_3) {
        if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 422; goto __pyx_L3;}
        break;
      }
      Py_DECREF(__pyx_v_o);
      __pyx_v_o = __pyx_3;
      __pyx_3 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":423 */
      __pyx_4 = __pyx_f_6rabbyt_10collisions__read_rect(__pyx_v_o,(&__pyx_v_rect)); if (__pyx_4 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 423; goto __pyx_L3;}

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":424 */
      (__pyx_v_side_list[__pyx_v_i]).x = __pyx_v_rect.l;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":425 */
      (__pyx_v_side_list[__pyx_v_i]).y = __pyx_v_rect.b;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":426 */
      (__pyx_v_side_list[__pyx_v_i]).side = __pyx_e_6rabbyt_10collisions_LEFT;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":427 */
      (__pyx_v_side_list[__pyx_v_i]).other_side = (&(__pyx_v_side_list[(__pyx_v_i + 1)]));

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":428 */
      (__pyx_v_side_list[__pyx_v_i]).index = (__pyx_v_i / 2);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":429 */
      (__pyx_v_side_p_list[__pyx_v_i]) = (&(__pyx_v_side_list[__pyx_v_i]));

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":430 */
      __pyx_v_i = (__pyx_v_i + 1);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":431 */
      (__pyx_v_side_list[__pyx_v_i]).x = __pyx_v_rect.r;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":432 */
      (__pyx_v_side_list[__pyx_v_i]).y = __pyx_v_rect.t;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":433 */
      (__pyx_v_side_list[__pyx_v_i]).side = __pyx_e_6rabbyt_10collisions_RIGHT;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":434 */
      (__pyx_v_side_list[__pyx_v_i]).other_side = (&(__pyx_v_side_list[(__pyx_v_i - 1)]));

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":435 */
      (__pyx_v_side_list[__pyx_v_i]).index = (__pyx_v_i / 2);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":436 */
      (__pyx_v_side_p_list[__pyx_v_i]) = (&(__pyx_v_side_list[__pyx_v_i]));

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":437 */
      __pyx_v_i = (__pyx_v_i + 1);
    }
    Py_DECREF(__pyx_2); __pyx_2 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":439 */
    __pyx_f_6rabbyt_10collisions__rdc(__pyx_v_side_p_list,__pyx_v_length,__pyx_e_6rabbyt_10collisions_X,0,1,0);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":441 */
    __pyx_3 = PyList_New(0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 441; goto __pyx_L3;}
    Py_DECREF(__pyx_v_collisions);
    __pyx_v_collisions = __pyx_3;
    __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":442 */
    for (__pyx_v_i = 0; __pyx_v_i < __pyx_v_length; ++__pyx_v_i) {
      __pyx_4 = (((__pyx_v_side_p_list[__pyx_v_i])[0]).side == __pyx_e_6rabbyt_10collisions_LEFT);
      if (__pyx_4) {

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":444 */
        __pyx_v_index = ((__pyx_v_side_p_list[__pyx_v_i])[0]).index;

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":445 */
        __pyx_v_temp_side = (__pyx_v_side_p_list[__pyx_v_i]);

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":446 */
        __pyx_v_l = __pyx_v_temp_side->x;

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":447 */
        __pyx_v_r = (__pyx_v_temp_side->other_side[0]).x;

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":448 */
        __pyx_v_b = (__pyx_v_temp_side[0]).y;

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":449 */
        __pyx_v_t = ((__pyx_v_temp_side[0]).other_side[0]).y;

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":450 */
        __pyx_v_j = (__pyx_v_i + 1);

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":451 */
        __pyx_v_temp_side = (__pyx_v_side_p_list[__pyx_v_j]);

        /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":452 */
        while (1) {
          __pyx_4 = (__pyx_v_temp_side->index != __pyx_v_index);
          if (!__pyx_4) break;

          /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":453 */
          __pyx_4 = (__pyx_v_temp_side->side == __pyx_e_6rabbyt_10collisions_LEFT);
          if (__pyx_4) {
            __pyx_4 = (__pyx_v_l <= (__pyx_v_temp_side->other_side[0]).x);
            if (__pyx_4) {
              __pyx_4 = (__pyx_v_r >= __pyx_v_temp_side->x);
              if (__pyx_4) {
                __pyx_4 = (__pyx_v_b <= (__pyx_v_temp_side->other_side[0]).y);
                if (__pyx_4) {
                  __pyx_4 = (__pyx_v_t >= __pyx_v_temp_side->y);
                }
              }
            }
            if (__pyx_4) {
              __pyx_2 = PyObject_GetAttr(__pyx_v_collisions, __pyx_n_append); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 458; goto __pyx_L3;}
              __pyx_3 = __Pyx_GetItemInt(__pyx_v_objects, __pyx_v_index); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 458; goto __pyx_L3;}
              __pyx_5 = __Pyx_GetItemInt(__pyx_v_objects, ((__pyx_v_side_p_list[__pyx_v_j])[0]).index); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 459; goto __pyx_L3;}
              __pyx_6 = PyTuple_New(2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 458; goto __pyx_L3;}
              PyTuple_SET_ITEM(__pyx_6, 0, __pyx_3);
              PyTuple_SET_ITEM(__pyx_6, 1, __pyx_5);
              __pyx_3 = 0;
              __pyx_5 = 0;
              __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 458; goto __pyx_L3;}
              PyTuple_SET_ITEM(__pyx_3, 0, __pyx_6);
              __pyx_6 = 0;
              __pyx_5 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 458; goto __pyx_L3;}
              Py_DECREF(__pyx_2); __pyx_2 = 0;
              Py_DECREF(__pyx_3); __pyx_3 = 0;
              Py_DECREF(__pyx_5); __pyx_5 = 0;
              goto __pyx_L13;
            }
            __pyx_L13:;
            goto __pyx_L12;
          }
          __pyx_L12:;

          /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":460 */
          __pyx_v_j = (__pyx_v_j + 1);

          /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":461 */
          __pyx_v_temp_side = (__pyx_v_side_p_list[__pyx_v_j]);
        }
        goto __pyx_L9;
      }
      __pyx_L9:;
    }

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":465 */
    Py_INCREF(__pyx_v_collisions);
    __pyx_r = __pyx_v_collisions;
    goto __pyx_L2;
  }
  /*finally:*/ {
    int __pyx_why;
    PyObject *__pyx_exc_type, *__pyx_exc_value, *__pyx_exc_tb;
    int __pyx_exc_lineno;
    __pyx_why = 0; goto __pyx_L4;
    __pyx_L2: __pyx_why = 3; goto __pyx_L4;
    __pyx_L3: {
      __pyx_why = 4;
      Py_XDECREF(__pyx_6); __pyx_6 = 0;
      Py_XDECREF(__pyx_2); __pyx_2 = 0;
      Py_XDECREF(__pyx_3); __pyx_3 = 0;
      Py_XDECREF(__pyx_5); __pyx_5 = 0;
      PyErr_Fetch(&__pyx_exc_type, &__pyx_exc_value, &__pyx_exc_tb);
      __pyx_exc_lineno = __pyx_lineno;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":467 */
    free(__pyx_v_side_list);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":468 */
    free(__pyx_v_side_p_list);
    switch (__pyx_why) {
      case 3: goto __pyx_L0;
      case 4: {
        PyErr_Restore(__pyx_exc_type, __pyx_exc_value, __pyx_exc_tb);
        __pyx_lineno = __pyx_exc_lineno;
        __pyx_exc_type = 0;
        __pyx_exc_value = 0;
        __pyx_exc_tb = 0;
        goto __pyx_L1;
      }
    }
  }

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_5);
  Py_XDECREF(__pyx_6);
  __Pyx_AddTraceback("rabbyt.collisions.aabb_collide");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_o);
  Py_DECREF(__pyx_v_collisions);
  Py_DECREF(__pyx_v_objects);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10collisions_aabb_collide_single(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_10collisions_aabb_collide_single[] = "\n    ``aabb_collide_single(single, objects)``\n\n    Finds all objects in ``objects`` that collide with ``single``, (using\n    bounding boxes.)\n\n    All objects must have ``left``, ``top``, ``right``, and ``bottom``\n    attributes.\n\n    A list of all objects from ``objects`` that collide with ``single`` is\n    returned.\n    ";
static PyObject *__pyx_f_6rabbyt_10collisions_aabb_collide_single(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_single = 0;
  PyObject *__pyx_v_objects = 0;
  struct __pyx_t_6rabbyt_10collisions_rect_s __pyx_v_r_a;
  struct __pyx_t_6rabbyt_10collisions_rect_s __pyx_v_r_b;
  PyObject *__pyx_v_o;
  PyObject *__pyx_v_collisions;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  static char *__pyx_argnames[] = {"single","objects",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_single, &__pyx_v_objects)) return 0;
  Py_INCREF(__pyx_v_single);
  Py_INCREF(__pyx_v_objects);
  __pyx_v_o = Py_None; Py_INCREF(Py_None);
  __pyx_v_collisions = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":486 */
  __pyx_1 = __pyx_f_6rabbyt_10collisions__read_rect(__pyx_v_single,(&__pyx_v_r_a)); if (__pyx_1 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 486; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":488 */
  __pyx_2 = PyList_New(0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 488; goto __pyx_L1;}
  Py_DECREF(__pyx_v_collisions);
  __pyx_v_collisions = __pyx_2;
  __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":489 */
  __pyx_2 = PyObject_GetIter(__pyx_v_objects); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 489; goto __pyx_L1;}
  for (;;) {
    __pyx_3 = PyIter_Next(__pyx_2);
    if (!__pyx_3) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 489; goto __pyx_L1;}
      break;
    }
    Py_DECREF(__pyx_v_o);
    __pyx_v_o = __pyx_3;
    __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":490 */
    __pyx_1 = __pyx_f_6rabbyt_10collisions__read_rect(__pyx_v_o,(&__pyx_v_r_b)); if (__pyx_1 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 490; goto __pyx_L1;}

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":491 */
    __pyx_1 = __pyx_f_6rabbyt_10collisions__collide_rect((&__pyx_v_r_a),(&__pyx_v_r_b));
    if (__pyx_1) {
      __pyx_3 = PyObject_GetAttr(__pyx_v_collisions, __pyx_n_append); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 492; goto __pyx_L1;}
      __pyx_4 = PyTuple_New(1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 492; goto __pyx_L1;}
      Py_INCREF(__pyx_v_o);
      PyTuple_SET_ITEM(__pyx_4, 0, __pyx_v_o);
      __pyx_5 = PyObject_CallObject(__pyx_3, __pyx_4); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 492; goto __pyx_L1;}
      Py_DECREF(__pyx_3); __pyx_3 = 0;
      Py_DECREF(__pyx_4); __pyx_4 = 0;
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      goto __pyx_L4;
    }
    __pyx_L4:;
  }
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":493 */
  Py_INCREF(__pyx_v_collisions);
  __pyx_r = __pyx_v_collisions;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt.collisions.aabb_collide_single");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_o);
  Py_DECREF(__pyx_v_collisions);
  Py_DECREF(__pyx_v_single);
  Py_DECREF(__pyx_v_objects);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_10collisions_aabb_collide_groups(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_10collisions_aabb_collide_groups[] = "\n    ``aabb_collide_groups(group_a, group_b)``\n\n    Returns a list of collisions between objects in ``group_a`` with objects\n    in ``group_b``.\n\n    All objects must have ``left``, ``top``, ``right``, and ``bottom``\n    attributes.\n    ";
static PyObject *__pyx_f_6rabbyt_10collisions_aabb_collide_groups(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_group_a = 0;
  PyObject *__pyx_v_group_b = 0;
  struct __pyx_t_6rabbyt_10collisions_rect_s *__pyx_v_c_group_b;
  struct __pyx_t_6rabbyt_10collisions_rect_s __pyx_v_a;
  int __pyx_v_i;
  int __pyx_v_length;
  PyObject *__pyx_v_o;
  PyObject *__pyx_v_collisions;
  PyObject *__pyx_r;
  int __pyx_1;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  Py_ssize_t __pyx_5;
  PyObject *__pyx_6 = 0;
  PyObject *__pyx_7 = 0;
  static char *__pyx_argnames[] = {"group_a","group_b",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_group_a, &__pyx_v_group_b)) return 0;
  Py_INCREF(__pyx_v_group_a);
  Py_INCREF(__pyx_v_group_b);
  __pyx_v_o = Py_None; Py_INCREF(Py_None);
  __pyx_v_collisions = Py_None; Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":509 */
  __pyx_1 = PyObject_IsInstance(__pyx_v_group_b,((PyObject *)(&PyList_Type))); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 509; goto __pyx_L1;}
  __pyx_2 = (!__pyx_1);
  if (__pyx_2) {
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 510; goto __pyx_L1;}
    Py_INCREF(__pyx_v_group_b);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_group_b);
    __pyx_4 = PyObject_CallObject(((PyObject *)(&PyList_Type)), __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 510; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_v_group_b);
    __pyx_v_group_b = __pyx_4;
    __pyx_4 = 0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":512 */
  __pyx_5 = PyObject_Length(__pyx_v_group_b); if (__pyx_5 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 512; goto __pyx_L1;}
  __pyx_v_length = __pyx_5;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":513 */
  __pyx_v_c_group_b = ((struct __pyx_t_6rabbyt_10collisions_rect_s *)malloc(((sizeof(struct __pyx_t_6rabbyt_10collisions_rect_s)) * __pyx_v_length)));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":515 */
  /*try:*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":516 */
    __pyx_v_i = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":517 */
    __pyx_3 = PyObject_GetIter(__pyx_v_group_b); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 517; goto __pyx_L4;}
    for (;;) {
      __pyx_4 = PyIter_Next(__pyx_3);
      if (!__pyx_4) {
        if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 517; goto __pyx_L4;}
        break;
      }
      Py_DECREF(__pyx_v_o);
      __pyx_v_o = __pyx_4;
      __pyx_4 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":518 */
      __pyx_1 = __pyx_f_6rabbyt_10collisions__read_rect(__pyx_v_o,(&(__pyx_v_c_group_b[__pyx_v_i]))); if (__pyx_1 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 518; goto __pyx_L4;}

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":519 */
      __pyx_v_i = (__pyx_v_i + 1);
    }
    Py_DECREF(__pyx_3); __pyx_3 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":521 */
    __pyx_4 = PyList_New(0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 521; goto __pyx_L4;}
    Py_DECREF(__pyx_v_collisions);
    __pyx_v_collisions = __pyx_4;
    __pyx_4 = 0;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":522 */
    __pyx_3 = PyObject_GetIter(__pyx_v_group_a); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 522; goto __pyx_L4;}
    for (;;) {
      __pyx_4 = PyIter_Next(__pyx_3);
      if (!__pyx_4) {
        if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 522; goto __pyx_L4;}
        break;
      }
      Py_DECREF(__pyx_v_o);
      __pyx_v_o = __pyx_4;
      __pyx_4 = 0;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":523 */
      __pyx_2 = __pyx_f_6rabbyt_10collisions__read_rect(__pyx_v_o,(&__pyx_v_a)); if (__pyx_2 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 523; goto __pyx_L4;}

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":524 */
      for (__pyx_v_i = 0; __pyx_v_i < __pyx_v_length; ++__pyx_v_i) {
        __pyx_1 = __pyx_f_6rabbyt_10collisions__collide_rect((&__pyx_v_a),(&(__pyx_v_c_group_b[__pyx_v_i])));
        if (__pyx_1) {
          __pyx_4 = PyObject_GetAttr(__pyx_v_collisions, __pyx_n_append); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 526; goto __pyx_L4;}
          __pyx_6 = __Pyx_GetItemInt(__pyx_v_group_b, __pyx_v_i); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 526; goto __pyx_L4;}
          __pyx_7 = PyTuple_New(2); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 526; goto __pyx_L4;}
          Py_INCREF(__pyx_v_o);
          PyTuple_SET_ITEM(__pyx_7, 0, __pyx_v_o);
          PyTuple_SET_ITEM(__pyx_7, 1, __pyx_6);
          __pyx_6 = 0;
          __pyx_6 = PyTuple_New(1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 526; goto __pyx_L4;}
          PyTuple_SET_ITEM(__pyx_6, 0, __pyx_7);
          __pyx_7 = 0;
          __pyx_7 = PyObject_CallObject(__pyx_4, __pyx_6); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 526; goto __pyx_L4;}
          Py_DECREF(__pyx_4); __pyx_4 = 0;
          Py_DECREF(__pyx_6); __pyx_6 = 0;
          Py_DECREF(__pyx_7); __pyx_7 = 0;
          goto __pyx_L12;
        }
        __pyx_L12:;
      }
    }
    Py_DECREF(__pyx_3); __pyx_3 = 0;
  }
  /*finally:*/ {
    int __pyx_why;
    PyObject *__pyx_exc_type, *__pyx_exc_value, *__pyx_exc_tb;
    int __pyx_exc_lineno;
    __pyx_why = 0; goto __pyx_L5;
    __pyx_L4: {
      __pyx_why = 4;
      Py_XDECREF(__pyx_4); __pyx_4 = 0;
      Py_XDECREF(__pyx_6); __pyx_6 = 0;
      Py_XDECREF(__pyx_7); __pyx_7 = 0;
      Py_XDECREF(__pyx_3); __pyx_3 = 0;
      PyErr_Fetch(&__pyx_exc_type, &__pyx_exc_value, &__pyx_exc_tb);
      __pyx_exc_lineno = __pyx_lineno;
      goto __pyx_L5;
    }
    __pyx_L5:;
    free(__pyx_v_c_group_b);
    switch (__pyx_why) {
      case 4: {
        PyErr_Restore(__pyx_exc_type, __pyx_exc_value, __pyx_exc_tb);
        __pyx_lineno = __pyx_exc_lineno;
        __pyx_exc_type = 0;
        __pyx_exc_value = 0;
        __pyx_exc_tb = 0;
        goto __pyx_L1;
      }
    }
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":529 */
  Py_INCREF(__pyx_v_collisions);
  __pyx_r = __pyx_v_collisions;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_6);
  Py_XDECREF(__pyx_7);
  __Pyx_AddTraceback("rabbyt.collisions.aabb_collide_groups");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_o);
  Py_DECREF(__pyx_v_collisions);
  Py_DECREF(__pyx_v_group_a);
  Py_DECREF(__pyx_v_group_b);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n___author__, "__author__"},
  {&__pyx_n___credits__, "__credits__"},
  {&__pyx_n___docs_all__, "__docs_all__"},
  {&__pyx_n__get_object_data, "_get_object_data"},
  {&__pyx_n_aabb_collide, "aabb_collide"},
  {&__pyx_n_aabb_collide_groups, "aabb_collide_groups"},
  {&__pyx_n_aabb_collide_single, "aabb_collide_single"},
  {&__pyx_n_append, "append"},
  {&__pyx_n_bottom, "bottom"},
  {&__pyx_n_bounding_radius, "bounding_radius"},
  {&__pyx_n_bounding_radius_squared, "bounding_radius_squared"},
  {&__pyx_n_brute_force, "brute_force"},
  {&__pyx_n_collide, "collide"},
  {&__pyx_n_collide_groups, "collide_groups"},
  {&__pyx_n_collide_single, "collide_single"},
  {&__pyx_n_extend, "extend"},
  {&__pyx_n_left, "left"},
  {&__pyx_n_min_split, "min_split"},
  {&__pyx_n_rdc, "rdc"},
  {&__pyx_n_right, "right"},
  {&__pyx_n_top, "top"},
  {&__pyx_n_x, "x"},
  {&__pyx_n_y, "y"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k1p, __pyx_k1, sizeof(__pyx_k1)},
  {&__pyx_k2p, __pyx_k2, sizeof(__pyx_k2)},
  {0, 0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {"_get_object_data", (PyCFunction)__pyx_f_6rabbyt_10collisions__get_object_data, METH_VARARGS|METH_KEYWORDS, 0},
  {"collide", (PyCFunction)__pyx_f_6rabbyt_10collisions_collide, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_10collisions_collide},
  {"collide_single", (PyCFunction)__pyx_f_6rabbyt_10collisions_collide_single, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_10collisions_collide_single},
  {"rdc", (PyCFunction)__pyx_f_6rabbyt_10collisions_rdc, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_10collisions_rdc},
  {"brute_force", (PyCFunction)__pyx_f_6rabbyt_10collisions_brute_force, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_10collisions_brute_force},
  {"collide_groups", (PyCFunction)__pyx_f_6rabbyt_10collisions_collide_groups, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_10collisions_collide_groups},
  {"aabb_collide", (PyCFunction)__pyx_f_6rabbyt_10collisions_aabb_collide, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_10collisions_aabb_collide},
  {"aabb_collide_single", (PyCFunction)__pyx_f_6rabbyt_10collisions_aabb_collide_single, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_10collisions_aabb_collide_single},
  {"aabb_collide_groups", (PyCFunction)__pyx_f_6rabbyt_10collisions_aabb_collide_groups, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_10collisions_aabb_collide_groups},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initcollisions(void); /*proto*/
PyMODINIT_FUNC initcollisions(void) {
  PyObject *__pyx_1 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("collisions", __pyx_methods, __pyx_mdoc, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_ptype_6rabbyt_10primitives_Quad = __Pyx_ImportType("rabbyt.primitives", "Quad", sizeof(struct __pyx_obj_6rabbyt_10primitives_Quad)); if (!__pyx_ptype_6rabbyt_10primitives_Quad) {__pyx_filename = __pyx_f[1]; __pyx_lineno = 7; goto __pyx_L1;}
  if (__Pyx_GetVtable(__pyx_ptype_6rabbyt_10primitives_Quad->tp_dict, &__pyx_vtabptr_6rabbyt_10primitives_Quad) < 0) {__pyx_filename = __pyx_f[1]; __pyx_lineno = 7; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_cAnimable = __Pyx_ImportType("rabbyt._anims", "cAnimable", sizeof(struct __pyx_obj_6rabbyt_6_anims_cAnimable)); if (!__pyx_ptype_6rabbyt_6_anims_cAnimable) {__pyx_filename = __pyx_f[2]; __pyx_lineno = 34; goto __pyx_L1;}
  if (__Pyx_GetVtable(__pyx_ptype_6rabbyt_6_anims_cAnimable->tp_dict, &__pyx_vtabptr_6rabbyt_6_anims_cAnimable) < 0) {__pyx_filename = __pyx_f[2]; __pyx_lineno = 34; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimSlot = __Pyx_ImportType("rabbyt._anims", "AnimSlot", sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimSlot)); if (!__pyx_ptype_6rabbyt_6_anims_AnimSlot) {__pyx_filename = __pyx_f[2]; __pyx_lineno = 42; goto __pyx_L1;}
  if (__Pyx_GetVtable(__pyx_ptype_6rabbyt_6_anims_AnimSlot->tp_dict, &__pyx_vtabptr_6rabbyt_6_anims_AnimSlot) < 0) {__pyx_filename = __pyx_f[2]; __pyx_lineno = 42; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_8_sprites_cBaseSprite = __Pyx_ImportType("rabbyt._sprites", "cBaseSprite", sizeof(struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite)); if (!__pyx_ptype_6rabbyt_8_sprites_cBaseSprite) {__pyx_filename = __pyx_f[3]; __pyx_lineno = 5; goto __pyx_L1;}
  if (__Pyx_GetVtable(__pyx_ptype_6rabbyt_8_sprites_cBaseSprite->tp_dict, &__pyx_vtabptr_6rabbyt_8_sprites_cBaseSprite) < 0) {__pyx_filename = __pyx_f[3]; __pyx_lineno = 5; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_8_sprites_cSprite = __Pyx_ImportType("rabbyt._sprites", "cSprite", sizeof(struct __pyx_obj_6rabbyt_8_sprites_cSprite)); if (!__pyx_ptype_6rabbyt_8_sprites_cSprite) {__pyx_filename = __pyx_f[3]; __pyx_lineno = 15; goto __pyx_L1;}
  if (__Pyx_GetVtable(__pyx_ptype_6rabbyt_8_sprites_cSprite->tp_dict, &__pyx_vtabptr_6rabbyt_8_sprites_cSprite) < 0) {__pyx_filename = __pyx_f[3]; __pyx_lineno = 15; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":6 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n___credits__, __pyx_k1p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":28 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n___author__, __pyx_k2p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 28; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":138 */
  __pyx_k3 = 1;
  __pyx_k4 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt.collisions.pyx":531 */
  __pyx_1 = PyTuple_New(8); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 531; goto __pyx_L1;}
  Py_INCREF(__pyx_n_collide);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_n_collide);
  Py_INCREF(__pyx_n_collide_single);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_n_collide_single);
  Py_INCREF(__pyx_n_collide_groups);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_n_collide_groups);
  Py_INCREF(__pyx_n_aabb_collide);
  PyTuple_SET_ITEM(__pyx_1, 3, __pyx_n_aabb_collide);
  Py_INCREF(__pyx_n_aabb_collide_single);
  PyTuple_SET_ITEM(__pyx_1, 4, __pyx_n_aabb_collide_single);
  Py_INCREF(__pyx_n_aabb_collide_groups);
  PyTuple_SET_ITEM(__pyx_1, 5, __pyx_n_aabb_collide_groups);
  Py_INCREF(__pyx_n_rdc);
  PyTuple_SET_ITEM(__pyx_1, 6, __pyx_n_rdc);
  Py_INCREF(__pyx_n_brute_force);
  PyTuple_SET_ITEM(__pyx_1, 7, __pyx_n_brute_force);
  if (PyObject_SetAttr(__pyx_m, __pyx_n___docs_all__, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 531; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt.collisions");
}

static char *__pyx_filenames[] = {
  "rabbyt.collisions.pyx",
  "rabbyt.primitives.pxd",
  "rabbyt._anims.pxd",
  "rabbyt._sprites.pxd",
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

#ifndef __PYX_HAVE_RT_ImportType
#define __PYX_HAVE_RT_ImportType
static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, 
    long size) 
{
    PyObject *py_module = 0;
    PyObject *result = 0;
    
    py_module = __Pyx_ImportModule(module_name);
    if (!py_module)
        goto bad;
    result = PyObject_GetAttrString(py_module, class_name);
    if (!result)
        goto bad;
    if (!PyType_Check(result)) {
        PyErr_Format(PyExc_TypeError, 
            "%s.%s is not a type object",
            module_name, class_name);
        goto bad;
    }
    if (((PyTypeObject *)result)->tp_basicsize != size) {
        PyErr_Format(PyExc_ValueError, 
            "%s.%s does not appear to be the correct type object",
            module_name, class_name);
        goto bad;
    }
    return (PyTypeObject *)result;
bad:
    Py_XDECREF(result);
    return 0;
}
#endif

#ifndef __PYX_HAVE_RT_ImportModule
#define __PYX_HAVE_RT_ImportModule
static PyObject *__Pyx_ImportModule(char *name) {
    PyObject *py_name = 0;
    
    py_name = PyString_FromString(name);
    if (!py_name)
        goto bad;
    return PyImport_Import(py_name);
bad:
    Py_XDECREF(py_name);
    return 0;
}
#endif

static int __Pyx_GetVtable(PyObject *dict, void *vtabptr) {
    int result;
    PyObject *pycobj;
    
    pycobj = PyMapping_GetItemString(dict, "__pyx_vtable__");
    if (!pycobj)
        goto bad;
    *(void **)vtabptr = PyCObject_AsVoidPtr(pycobj);
    if (!*(void **)vtabptr)
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
