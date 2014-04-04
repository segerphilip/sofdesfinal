/* 0.9.7.2 on Sat Sep  5 16:08:37 2009 */

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
#include "stdlib.h"
#include "include_gl.h"
#include "anim_sys.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static char __pyx_mdoc[] = "\nThe most interesting part of this module is probably the ``Sprite`` class.\n\nIf you need more specialized rendering, try subclassing from ``BaseSprite``.\n";

static PyObject *__Pyx_GetItemInt(PyObject *o, Py_ssize_t i); /*proto*/

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/

static PyObject *__Pyx_ImportModule(char *name); /*proto*/

static int __Pyx_GetVtable(PyObject *dict, void *vtabptr); /*proto*/

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


/* Implementation of rabbyt._sprites */

static char __pyx_k1[] = "\n        bounding_radius\n\n        This should be the distance of the farthest point from the center.  It\n        can be used for collision detection.\n        ";
static char __pyx_k2[] = "\n        bounding_radius_squared\n\n        This is just like ``bounding_radius``, only it\'s squared.  (duh)\n\n        ``bounding_radius`` and ``bounding_radius_squared`` are automatically\n        kept in sync with each other.\n        ";
static char __pyx_k3[] = "\n        bounding_radius\n\n        This should be the distance of the farthest point from the center.  It\n        can be used for collision detection.\n\n        By default this is calculated from the ``shape`` property, and is\n        automatically updated whenever the shape is updated.  However, you can\n        set it explicitly yourself.\n\n        After the value is explicitly set it will no longer be updated by\n        changes to the shape.  To revert back to the default behavior, delete\n        the property using the ``del`` statement::\n\n            del sprite.bounding_radius\n        ";
static char __pyx_k4[] = "\n        The shape of the sprite.\n\n        This must either be of the form ``[left, top, right, bottom]``, or a\n        list of four coordinates, eg. ``[(0,0), (20,0), (20,20), (0,20)]``\n\n        ``[-10, -10, 10, 10]`` is the default.\n\n        When you assign to ``shape``, ``bounding_radius`` is automatically set\n        to the distance of the farthest coordinate.\n        ";
static char __pyx_k5[] = "\n        This defines how a texture is mapped onto the sprite.\n\n        Like ``Sprite.shape``, you can give either\n        ``[left, top, right, bottom]`` or a list of coordinates.\n\n        The default is ``[0, 1, 1, 0]``, which uses the entire texture.\n\n        For easy integration with pyglet, a tuple with four items will be\n        interpreted as the format used by the ``tex_coords`` attribute\n        of pyglet textures.\n        ";
static char __pyx_k6[] = " x coordinate of the left side of the sprite ";
static char __pyx_k7[] = " x coordinate of the right side of the sprite ";
static char __pyx_k8[] = " y coordinate of the bottom of the sprite ";
static char __pyx_k9[] = " y coordinate of the top of the sprite ";
static char __pyx_k10[] = "\nCopyright (C) 2007  Matthew Marshall\n\nPermission is hereby granted, free of charge, to any person obtaining a copy\nof this software and associated documentation files (the \"Software\"), to deal\nin the Software without restriction, including without limitation the rights\nto use, copy, modify, merge, publish, distribute, sublicense, and/or sell\ncopies of the Software, and to permit persons to whom the Software is\nfurnished to do so, subject to the following conditions:\n\nThe above copyright notice and this permission notice shall be included in\nall copies or substantial portions of the Software.\n\nTHE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\nIMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\nFITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\nAUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\nLIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\nOUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN\nTHE SOFTWARE.\n";
static char __pyx_k11[] = "Matthew Marshall <matthew@matthewmarshall.org>";
static char __pyx_k12[] = "Sprite BaseSprite";

static PyObject *__pyx_n___credits__;
static PyObject *__pyx_n___author__;
static PyObject *__pyx_n_split;
static PyObject *__pyx_n___docs_all__;

static PyObject *__pyx_k10p;
static PyObject *__pyx_k11p;
static PyObject *__pyx_k12p;

static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite__modify_slots(struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *__pyx_v_self) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_slot;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)Py_None); Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":133 */
  __pyx_1 = __pyx_vtabptr_6rabbyt_6_anims_cAnimable->_modify_slots(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 133; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":136 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base._anim_list, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 136; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 136; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":137 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_x);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":138 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base._anim_list, 1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":139 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_y);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":141 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base._anim_list, 2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 141; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 141; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":142 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_rot);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":144 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base._anim_list, 3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 144; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 144; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":145 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_red);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":146 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base._anim_list, 4); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 146; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 146; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":147 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_green);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":148 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base._anim_list, 5); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 148; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 148; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":149 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_blue);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":150 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base._anim_list, 6); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 150; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 150; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":151 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_alpha);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":153 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base._anim_list, 7); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 153; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 153; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":154 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_scale_x);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":155 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base._anim_list, 8); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 155; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 155; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":156 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_scale_y);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._sprites.cBaseSprite._modify_slots");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_slot);
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite_15bounding_radius___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite_15bounding_radius___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->_bounding_radius); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 166; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._sprites.cBaseSprite.bounding_radius.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_11cBaseSprite_15bounding_radius___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_v); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_11cBaseSprite_15bounding_radius___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_v) {
  int __pyx_r;
  float __pyx_1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_v);
  __pyx_1 = PyFloat_AsDouble(__pyx_v_v); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  ((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->_bounding_radius = __pyx_1;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._sprites.cBaseSprite.bounding_radius.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_v);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite_23bounding_radius_squared___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite_23bounding_radius_squared___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyFloat_FromDouble((((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->_bounding_radius * ((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->_bounding_radius)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 180; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._sprites.cBaseSprite.bounding_radius_squared.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_11cBaseSprite_23bounding_radius_squared___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_r2); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_11cBaseSprite_23bounding_radius_squared___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_r2) {
  float __pyx_v_r2;
  int __pyx_r;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_v_r2 = PyFloat_AsDouble(__pyx_arg_r2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 181; goto __pyx_L1;}
  ((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->_bounding_radius = sqrtf(__pyx_v_r2);

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._sprites.cBaseSprite.bounding_radius_squared.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static struct __pyx_t_6rabbyt_10primitives_Point2d __pyx_f_6rabbyt_8_sprites_11cBaseSprite__convert_offset(struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *__pyx_v_self,float __pyx_v_ox,float __pyx_v_oy) {
  float __pyx_v_x;
  float __pyx_v_y;
  float __pyx_v_sx;
  float __pyx_v_sy;
  float __pyx_v_r;
  float __pyx_v_co;
  float __pyx_v_si;
  struct __pyx_t_6rabbyt_10primitives_Point2d __pyx_v_out;
  struct __pyx_t_6rabbyt_10primitives_Point2d __pyx_r;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":187 */
  READ_SLOT((&__pyx_v_self->_x),(&__pyx_v_x));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":188 */
  READ_SLOT((&__pyx_v_self->_y),(&__pyx_v_y));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":189 */
  READ_SLOT((&__pyx_v_self->_scale_x),(&__pyx_v_sx));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":190 */
  READ_SLOT((&__pyx_v_self->_scale_y),(&__pyx_v_sy));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":191 */
  READ_SLOT((&__pyx_v_self->_rot),(&__pyx_v_r));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":193 */
  __pyx_v_co = cosf((__pyx_v_r * PI_OVER_180));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":194 */
  __pyx_v_si = sinf((__pyx_v_r * PI_OVER_180));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":195 */
  __pyx_v_out.x = ((((__pyx_v_ox * __pyx_v_sx) * __pyx_v_co) - ((__pyx_v_oy * __pyx_v_sy) * __pyx_v_si)) + __pyx_v_x);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":196 */
  __pyx_v_out.y = ((((__pyx_v_ox * __pyx_v_sx) * __pyx_v_si) + ((__pyx_v_oy * __pyx_v_sy) * __pyx_v_co)) + __pyx_v_y);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":197 */
  __pyx_r = __pyx_v_out;
  goto __pyx_L0;

  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite_convert_offset(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_8_sprites_11cBaseSprite_convert_offset[] = "\n        ``convert_offset((x, y)) -> (x, y)``\n\n        Converts coordinates relative to this sprite to global coordinates,\n        including rotation and scaling.\n        ";
static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite_convert_offset(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_offset = 0;
  struct __pyx_t_6rabbyt_10primitives_Point2d __pyx_v_c_offset;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  float __pyx_2;
  float __pyx_3;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  static char *__pyx_argnames[] = {"offset",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_offset)) return 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_offset);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":207 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_offset, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 207; goto __pyx_L1;}
  __pyx_2 = PyFloat_AsDouble(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 207; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_offset, 1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 207; goto __pyx_L1;}
  __pyx_3 = PyFloat_AsDouble(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 207; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_v_c_offset = ((struct __pyx_vtabstruct_6rabbyt_8_sprites_cBaseSprite *)((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->__pyx_base.__pyx_vtab)->_convert_offset(((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self),__pyx_2,__pyx_3);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":208 */
  __pyx_1 = PyFloat_FromDouble(__pyx_v_c_offset.x); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  __pyx_4 = PyFloat_FromDouble(__pyx_v_c_offset.y); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  __pyx_5 = PyTuple_New(2); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 208; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_5, 0, __pyx_1);
  PyTuple_SET_ITEM(__pyx_5, 1, __pyx_4);
  __pyx_1 = 0;
  __pyx_4 = 0;
  __pyx_r = __pyx_5;
  __pyx_5 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("rabbyt._sprites.cBaseSprite.convert_offset");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_offset);
  return __pyx_r;
}

static PyObject *__pyx_n_render_after_transform;

static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite_render(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_8_sprites_11cBaseSprite_render[] = "\n        ``render()``\n\n        Renders the sprite.\n\n        By default, this method will transform the OpenGL modelview matrix\n        according to ``x``, ``y``, ``scale``, and ``rot``, and call\n        ``render_after_transform()``.\n\n        If you want transformations to be handled for you, leave this method and\n        override ``render_after_transform()``.  Otherwise, override\n        ``render()``.\n        ";
static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite_render(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  float __pyx_v_x;
  float __pyx_v_y;
  float __pyx_v_sx;
  float __pyx_v_sy;
  float __pyx_v_r;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":227 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->_x),(&__pyx_v_x));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":228 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->_y),(&__pyx_v_y));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":229 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->_scale_x),(&__pyx_v_sx));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":230 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->_scale_y),(&__pyx_v_sy));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":231 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)__pyx_v_self)->_rot),(&__pyx_v_r));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":233 */
  __pyx_1 = (__pyx_v_x != 0);
  if (!__pyx_1) {
    __pyx_1 = (__pyx_v_y != 0);
    if (!__pyx_1) {
      __pyx_1 = (__pyx_v_sx != 1);
      if (!__pyx_1) {
        __pyx_1 = (__pyx_v_sy != 1);
        if (!__pyx_1) {
          __pyx_1 = (__pyx_v_r != 0);
        }
      }
    }
  }
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":234 */
    glPushMatrix();

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":235 */
    /*try:*/ {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":236 */
      glTranslatef(__pyx_v_x,__pyx_v_y,0);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":237 */
      __pyx_1 = (__pyx_v_r != 0);
      if (__pyx_1) {
        glRotatef(__pyx_v_r,0,0,1);
        goto __pyx_L6;
      }
      __pyx_L6:;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":239 */
      __pyx_1 = (__pyx_v_sx != 1);
      if (!__pyx_1) {
        __pyx_1 = (__pyx_v_sy != 1);
      }
      if (__pyx_1) {
        glScalef(__pyx_v_sx,__pyx_v_sy,1);
        goto __pyx_L7;
      }
      __pyx_L7:;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":241 */
      __pyx_2 = PyObject_GetAttr(__pyx_v_self, __pyx_n_render_after_transform); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 241; goto __pyx_L4;}
      __pyx_3 = PyObject_CallObject(__pyx_2, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 241; goto __pyx_L4;}
      Py_DECREF(__pyx_2); __pyx_2 = 0;
      Py_DECREF(__pyx_3); __pyx_3 = 0;
    }
    /*finally:*/ {
      int __pyx_why;
      PyObject *__pyx_exc_type, *__pyx_exc_value, *__pyx_exc_tb;
      int __pyx_exc_lineno;
      __pyx_why = 0; goto __pyx_L5;
      __pyx_L4: {
        __pyx_why = 4;
        Py_XDECREF(__pyx_2); __pyx_2 = 0;
        Py_XDECREF(__pyx_3); __pyx_3 = 0;
        PyErr_Fetch(&__pyx_exc_type, &__pyx_exc_value, &__pyx_exc_tb);
        __pyx_exc_lineno = __pyx_lineno;
        goto __pyx_L5;
      }
      __pyx_L5:;
      glPopMatrix();
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
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_2 = PyObject_GetAttr(__pyx_v_self, __pyx_n_render_after_transform); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 245; goto __pyx_L1;}
    __pyx_3 = PyObject_CallObject(__pyx_2, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 245; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._sprites.cBaseSprite.render");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite_render_after_transform(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_8_sprites_11cBaseSprite_render_after_transform[] = "\n        ``render_after_transform()``\n\n        This method is called by ``BaseSprite.render()`` after transformations\n        have been applied.\n\n        If you don\'t want to mess with doing transformations yourself, you can\n        override this method instead of ``render()``.\n        ";
static PyObject *__pyx_f_6rabbyt_8_sprites_11cBaseSprite_render_after_transform(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __Pyx_Raise(PyExc_NotImplementedError, 0, 0);
  {__pyx_filename = __pyx_f[0]; __pyx_lineno = 257; goto __pyx_L1;}

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._sprites.cBaseSprite.render_after_transform");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite__modify_slots(struct __pyx_obj_6rabbyt_8_sprites_cSprite *__pyx_v_self) {
  struct __pyx_obj_6rabbyt_6_anims_AnimSlot *__pyx_v_slot;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)Py_None); Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":271 */
  __pyx_1 = __pyx_vtabptr_6rabbyt_8_sprites_cBaseSprite->__pyx_base._modify_slots(((struct __pyx_obj_6rabbyt_6_anims_cAnimable *)__pyx_v_self)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 271; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":274 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base.__pyx_base._anim_list, 9); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 274; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 274; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":275 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_u);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":276 */
  __pyx_1 = __Pyx_GetItemInt(__pyx_v_self->__pyx_base.__pyx_base._anim_list, 10); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 276; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_6rabbyt_6_anims_AnimSlot)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 276; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_slot));
  __pyx_v_slot = ((struct __pyx_obj_6rabbyt_6_anims_AnimSlot *)__pyx_1);
  __pyx_1 = 0;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":277 */
  __pyx_v_slot->_slot = (&__pyx_v_self->_v);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite._modify_slots");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_slot);
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_15bounding_radius___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_15bounding_radius___get__(PyObject *__pyx_v_self) {
  float __pyx_v_s;
  float __pyx_v_sy;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":298 */
  __pyx_1 = ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_bounding_radius_is_explicit;
  if (__pyx_1) {
    __pyx_2 = PyFloat_FromDouble(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._bounding_radius); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 299; goto __pyx_L1;}
    __pyx_r = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":301 */
    READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._scale_x),(&__pyx_v_s));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":302 */
    READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._scale_y),(&__pyx_v_sy));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":303 */
    __pyx_1 = (__pyx_v_sy > __pyx_v_s);
    if (__pyx_1) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":304 */
      __pyx_v_s = __pyx_v_sy;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":305 */
    __pyx_2 = PyFloat_FromDouble((((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape->bounding_radius * __pyx_v_s)); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 305; goto __pyx_L1;}
    __pyx_r = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L0;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.bounding_radius.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_7cSprite_15bounding_radius___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_v); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_15bounding_radius___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_v) {
  int __pyx_r;
  float __pyx_1;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_v);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":307 */
  __pyx_1 = PyFloat_AsDouble(__pyx_v_v); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 307; goto __pyx_L1;}
  ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._bounding_radius = __pyx_1;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":308 */
  ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_bounding_radius_is_explicit = 1;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.bounding_radius.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_v);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_7cSprite_15bounding_radius___del__(PyObject *__pyx_v_self); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_15bounding_radius___del__(PyObject *__pyx_v_self) {
  int __pyx_r;
  Py_INCREF((PyObject *)__pyx_v_self);
  ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_bounding_radius_is_explicit = 0;

  __pyx_r = 0;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_23bounding_radius_squared___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_23bounding_radius_squared___get__(PyObject *__pyx_v_self) {
  float __pyx_v_s;
  float __pyx_v_sy;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":323 */
  __pyx_1 = ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_bounding_radius_is_explicit;
  if (__pyx_1) {
    __pyx_2 = PyFloat_FromDouble((((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._bounding_radius * ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._bounding_radius)); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 324; goto __pyx_L1;}
    __pyx_r = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":326 */
    READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._scale_x),(&__pyx_v_s));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":327 */
    READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._scale_y),(&__pyx_v_sy));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":328 */
    __pyx_1 = (__pyx_v_sy > __pyx_v_s);
    if (__pyx_1) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":329 */
      __pyx_v_s = __pyx_v_sy;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":330 */
    __pyx_2 = PyFloat_FromDouble((((((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape->bounding_radius * ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape->bounding_radius) * __pyx_v_s) * __pyx_v_s)); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 330; goto __pyx_L1;}
    __pyx_r = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L0;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.bounding_radius_squared.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_7cSprite_23bounding_radius_squared___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_r2); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_23bounding_radius_squared___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_r2) {
  float __pyx_v_r2;
  int __pyx_r;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_v_r2 = PyFloat_AsDouble(__pyx_arg_r2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 331; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":332 */
  ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._bounding_radius = sqrtf(__pyx_v_r2);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":333 */
  ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_bounding_radius_is_explicit = 1;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.bounding_radius_squared.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_7cSprite_23bounding_radius_squared___del__(PyObject *__pyx_v_self); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_23bounding_radius_squared___del__(PyObject *__pyx_v_self) {
  int __pyx_r;
  Py_INCREF((PyObject *)__pyx_v_self);
  ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_bounding_radius_is_explicit = 0;

  __pyx_r = 0;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_5shape___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_5shape___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(((PyObject *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape));
  __pyx_r = ((PyObject *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape);
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_7cSprite_5shape___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_5shape___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  struct __pyx_obj_6rabbyt_10primitives_Quad *__pyx_v__shape;
  int __pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_value);
  __pyx_v__shape = ((struct __pyx_obj_6rabbyt_10primitives_Quad *)Py_None); Py_INCREF(Py_None);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":353 */
  __pyx_1 = PyObject_IsInstance(__pyx_v_value,((PyObject *)__pyx_ptype_6rabbyt_10primitives_Quad)); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 353; goto __pyx_L1;}
  if (__pyx_1) {
    if (!__Pyx_TypeTest(__pyx_v_value, __pyx_ptype_6rabbyt_10primitives_Quad)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 354; goto __pyx_L1;}
    Py_INCREF(__pyx_v_value);
    Py_DECREF(((PyObject *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape));
    ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape = ((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_value);
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 356; goto __pyx_L1;}
    Py_INCREF(__pyx_v_value);
    PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_value);
    __pyx_3 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_10primitives_Quad), __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 356; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(((PyObject *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape));
    ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape = ((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_3);
    __pyx_3 = 0;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":358 */
  Py_INCREF(((PyObject *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape));
  Py_DECREF(((PyObject *)__pyx_v__shape));
  __pyx_v__shape = ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_shape;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.shape.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v__shape);
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_value);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_9tex_shape___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_9tex_shape___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(((PyObject *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_tex_shape));
  __pyx_r = ((PyObject *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_tex_shape);
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n__tex_shape_data_ptr;

static int __pyx_f_6rabbyt_8_sprites_7cSprite_9tex_shape___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_9tex_shape___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_value);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":376 */
  __pyx_1 = PyObject_IsInstance(__pyx_v_value,((PyObject *)__pyx_ptype_6rabbyt_10primitives_Quad)); if (__pyx_1 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 376; goto __pyx_L1;}
  if (__pyx_1) {
    if (!__Pyx_TypeTest(__pyx_v_value, __pyx_ptype_6rabbyt_10primitives_Quad)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 377; goto __pyx_L1;}
    Py_INCREF(__pyx_v_value);
    Py_DECREF(((PyObject *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_tex_shape));
    ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_tex_shape = ((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_v_value);
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 379; goto __pyx_L1;}
    Py_INCREF(__pyx_v_value);
    PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_value);
    __pyx_3 = PyObject_CallObject(((PyObject *)__pyx_ptype_6rabbyt_10primitives_Quad), __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 379; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(((PyObject *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_tex_shape));
    ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_tex_shape = ((struct __pyx_obj_6rabbyt_10primitives_Quad *)__pyx_3);
    __pyx_3 = 0;
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":380 */
  __pyx_2 = PyLong_FromUnsignedLong(((unsigned long)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_tex_shape->v)); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 380; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n__tex_shape_data_ptr, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 380; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.tex_shape.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_value);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_10texture_id___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_10texture_id___get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = PyInt_FromLong(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_texture_id); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 384; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.texture_id.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_7cSprite_10texture_id___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_value); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_10texture_id___set__(PyObject *__pyx_v_self, PyObject *__pyx_arg_value) {
  int __pyx_v_value;
  int __pyx_r;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_v_value = PyInt_AsLong(__pyx_arg_value); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 385; goto __pyx_L1;}
  ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->_texture_id = __pyx_v_value;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.texture_id.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_7cSprite__render(struct __pyx_obj_6rabbyt_8_sprites_cSprite *__pyx_v_self) {
  float __pyx_v_color[4];
  float __pyx_v_x;
  float __pyx_v_y;
  float __pyx_v_u;
  float __pyx_v_v;
  float __pyx_v_sx;
  float __pyx_v_sy;
  float __pyx_v_r;
  int __pyx_v_i;
  float __pyx_v_vx;
  float __pyx_v_vy;
  float __pyx_v_co;
  float __pyx_v_si;
  struct __pyx_t_6rabbyt_10primitives_Point2d *__pyx_v_vert;
  struct __pyx_t_6rabbyt_10primitives_Point2d *__pyx_v_tex;
  int __pyx_r;
  int __pyx_1;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":390 */
  __pyx_1 = (__pyx_v_self->_texture_id != 0);
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":391 */
    glEnable(GL_TEXTURE_2D);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":392 */
    glBindTexture(GL_TEXTURE_2D,__pyx_v_self->_texture_id);
    goto __pyx_L2;
  }
  /*else*/ {
    glDisable(GL_TEXTURE_2D);
  }
  __pyx_L2:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":397 */
  READ_SLOT((&__pyx_v_self->__pyx_base._red),(&(__pyx_v_color[0])));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":398 */
  READ_SLOT((&__pyx_v_self->__pyx_base._green),(&(__pyx_v_color[1])));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":399 */
  READ_SLOT((&__pyx_v_self->__pyx_base._blue),(&(__pyx_v_color[2])));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":400 */
  READ_SLOT((&__pyx_v_self->__pyx_base._alpha),(&(__pyx_v_color[3])));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":401 */
  glColor4fv(__pyx_v_color);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":404 */
  READ_SLOT((&__pyx_v_self->__pyx_base._x),(&__pyx_v_x));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":405 */
  READ_SLOT((&__pyx_v_self->__pyx_base._y),(&__pyx_v_y));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":406 */
  READ_SLOT((&__pyx_v_self->_u),(&__pyx_v_u));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":407 */
  READ_SLOT((&__pyx_v_self->_v),(&__pyx_v_v));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":408 */
  READ_SLOT((&__pyx_v_self->__pyx_base._scale_x),(&__pyx_v_sx));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":409 */
  READ_SLOT((&__pyx_v_self->__pyx_base._scale_y),(&__pyx_v_sy));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":410 */
  READ_SLOT((&__pyx_v_self->__pyx_base._rot),(&__pyx_v_r));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":416 */
  __pyx_v_vert = __pyx_v_self->_shape->v;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":417 */
  __pyx_v_tex = __pyx_v_self->_tex_shape->v;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":419 */
  glBegin(GL_QUADS);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":420 */
  __pyx_1 = (__pyx_v_r == 0);
  if (__pyx_1) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":421 */
    glTexCoord2f(((__pyx_v_tex[0]).x + __pyx_v_u),((__pyx_v_tex[0]).y + __pyx_v_v));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":422 */
    glVertex2f((((__pyx_v_vert[0]).x * __pyx_v_sx) + __pyx_v_x),(((__pyx_v_vert[0]).y * __pyx_v_sy) + __pyx_v_y));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":423 */
    glTexCoord2f(((__pyx_v_tex[1]).x + __pyx_v_u),((__pyx_v_tex[1]).y + __pyx_v_v));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":424 */
    glVertex2f((((__pyx_v_vert[1]).x * __pyx_v_sx) + __pyx_v_x),(((__pyx_v_vert[1]).y * __pyx_v_sy) + __pyx_v_y));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":425 */
    glTexCoord2f(((__pyx_v_tex[2]).x + __pyx_v_u),((__pyx_v_tex[2]).y + __pyx_v_v));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":426 */
    glVertex2f((((__pyx_v_vert[2]).x * __pyx_v_sx) + __pyx_v_x),(((__pyx_v_vert[2]).y * __pyx_v_sy) + __pyx_v_y));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":427 */
    glTexCoord2f(((__pyx_v_tex[3]).x + __pyx_v_u),((__pyx_v_tex[3]).y + __pyx_v_v));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":428 */
    glVertex2f((((__pyx_v_vert[3]).x * __pyx_v_sx) + __pyx_v_x),(((__pyx_v_vert[3]).y * __pyx_v_sy) + __pyx_v_y));
    goto __pyx_L3;
  }
  /*else*/ {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":430 */
    __pyx_v_r = (__pyx_v_r * PI_OVER_180);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":431 */
    __pyx_v_co = cosf(__pyx_v_r);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":432 */
    __pyx_v_si = sinf(__pyx_v_r);

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":433 */
    for (__pyx_v_i = 0; __pyx_v_i < 4; ++__pyx_v_i) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":434 */
      glTexCoord2f(((__pyx_v_tex[__pyx_v_i]).x + __pyx_v_u),((__pyx_v_tex[__pyx_v_i]).y + __pyx_v_v));

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":435 */
      __pyx_v_vx = ((__pyx_v_vert[__pyx_v_i]).x * __pyx_v_sx);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":436 */
      __pyx_v_vy = ((__pyx_v_vert[__pyx_v_i]).y * __pyx_v_sy);

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":437 */
      glVertex2f((((__pyx_v_vx * __pyx_v_co) - (__pyx_v_vy * __pyx_v_si)) + __pyx_v_x),(((__pyx_v_vx * __pyx_v_si) + (__pyx_v_vy * __pyx_v_co)) + __pyx_v_y));
    }
  }
  __pyx_L3:;

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":438 */
  glEnd();

  __pyx_r = 0;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_render(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_6rabbyt_8_sprites_7cSprite_render[] = "\n        \n        ";
static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_render(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  int __pyx_1;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = ((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base.__pyx_base.__pyx_vtab)->_render(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)); if (__pyx_1 == (-1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 444; goto __pyx_L1;}

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.render");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static struct __pyx_t_6rabbyt_10primitives_float2 __pyx_f_6rabbyt_8_sprites_7cSprite__bounds_x(struct __pyx_obj_6rabbyt_8_sprites_cSprite *__pyx_v_self) {
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_bounds;
  float __pyx_v_r;
  float __pyx_v_co;
  float __pyx_v_si;
  float __pyx_v_x;
  float __pyx_v_sx;
  float __pyx_v_sy;
  int __pyx_v_i;
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_r;
  int __pyx_1;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":450 */
  READ_SLOT((&__pyx_v_self->__pyx_base._scale_x),(&__pyx_v_sx));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":451 */
  READ_SLOT((&__pyx_v_self->__pyx_base._scale_y),(&__pyx_v_sy));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":452 */
  READ_SLOT((&__pyx_v_self->__pyx_base._rot),(&__pyx_v_r));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":453 */
  __pyx_v_r = (__pyx_v_r * PI_OVER_180);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":454 */
  __pyx_v_co = cosf(__pyx_v_r);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":455 */
  __pyx_v_si = sinf(__pyx_v_r);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":457 */
  for (__pyx_v_i = 0; __pyx_v_i < 4; ++__pyx_v_i) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":458 */
    __pyx_v_x = ((((__pyx_v_self->_shape->v[__pyx_v_i]).x * __pyx_v_sx) * __pyx_v_co) - (((__pyx_v_self->_shape->v[__pyx_v_i]).y * __pyx_v_sy) * __pyx_v_si));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":459 */
    __pyx_1 = (__pyx_v_i == 0);
    if (__pyx_1) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":460 */
      __pyx_v_bounds.a = __pyx_v_x;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":461 */
      __pyx_v_bounds.b = __pyx_v_x;
      goto __pyx_L4;
    }
    /*else*/ {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":463 */
      __pyx_1 = (__pyx_v_bounds.a > __pyx_v_x);
      if (__pyx_1) {
        __pyx_v_bounds.a = __pyx_v_x;
        goto __pyx_L5;
      }
      __pyx_L5:;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":465 */
      __pyx_1 = (__pyx_v_bounds.b < __pyx_v_x);
      if (__pyx_1) {
        __pyx_v_bounds.b = __pyx_v_x;
        goto __pyx_L6;
      }
      __pyx_L6:;
    }
    __pyx_L4:;
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":467 */
  __pyx_r = __pyx_v_bounds;
  goto __pyx_L0;

  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static struct __pyx_t_6rabbyt_10primitives_float2 __pyx_f_6rabbyt_8_sprites_7cSprite__bounds_y(struct __pyx_obj_6rabbyt_8_sprites_cSprite *__pyx_v_self) {
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_v_bounds;
  float __pyx_v_r;
  float __pyx_v_co;
  float __pyx_v_si;
  float __pyx_v_y;
  float __pyx_v_sx;
  float __pyx_v_sy;
  int __pyx_v_i;
  struct __pyx_t_6rabbyt_10primitives_float2 __pyx_r;
  int __pyx_1;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":473 */
  READ_SLOT((&__pyx_v_self->__pyx_base._scale_x),(&__pyx_v_sx));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":474 */
  READ_SLOT((&__pyx_v_self->__pyx_base._scale_y),(&__pyx_v_sy));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":475 */
  READ_SLOT((&__pyx_v_self->__pyx_base._rot),(&__pyx_v_r));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":476 */
  __pyx_v_r = (__pyx_v_r * PI_OVER_180);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":477 */
  __pyx_v_co = cosf(__pyx_v_r);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":478 */
  __pyx_v_si = sinf(__pyx_v_r);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":480 */
  for (__pyx_v_i = 0; __pyx_v_i < 4; ++__pyx_v_i) {

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":481 */
    __pyx_v_y = ((((__pyx_v_self->_shape->v[__pyx_v_i]).x * __pyx_v_sx) * __pyx_v_si) + (((__pyx_v_self->_shape->v[__pyx_v_i]).y * __pyx_v_sy) * __pyx_v_co));

    /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":482 */
    __pyx_1 = (__pyx_v_i == 0);
    if (__pyx_1) {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":483 */
      __pyx_v_bounds.a = __pyx_v_y;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":484 */
      __pyx_v_bounds.b = __pyx_v_y;
      goto __pyx_L4;
    }
    /*else*/ {

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":486 */
      __pyx_1 = (__pyx_v_bounds.a > __pyx_v_y);
      if (__pyx_1) {
        __pyx_v_bounds.a = __pyx_v_y;
        goto __pyx_L5;
      }
      __pyx_L5:;

      /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":488 */
      __pyx_1 = (__pyx_v_bounds.b < __pyx_v_y);
      if (__pyx_1) {
        __pyx_v_bounds.b = __pyx_v_y;
        goto __pyx_L6;
      }
      __pyx_L6:;
    }
    __pyx_L4:;
  }

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":490 */
  __pyx_r = __pyx_v_bounds;
  goto __pyx_L0;

  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_4left___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_4left___get__(PyObject *__pyx_v_self) {
  float __pyx_v_x;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":496 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._x),(&__pyx_v_x));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":497 */
  __pyx_1 = PyFloat_FromDouble((((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base.__pyx_base.__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)).a + __pyx_v_x)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 497; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.left.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_x;

static int __pyx_f_6rabbyt_8_sprites_7cSprite_4left___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_x); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_4left___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_x) {
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_x);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base.__pyx_base.__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)).a); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 499; goto __pyx_L1;}
  __pyx_2 = PyNumber_Subtract(__pyx_v_x, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 499; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_x, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 499; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.left.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_x);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_5right___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_5right___get__(PyObject *__pyx_v_self) {
  float __pyx_v_x;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":505 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._x),(&__pyx_v_x));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":506 */
  __pyx_1 = PyFloat_FromDouble((((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base.__pyx_base.__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)).b + __pyx_v_x)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 506; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.right.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_7cSprite_5right___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_x); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_5right___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_x) {
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_x);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base.__pyx_base.__pyx_vtab)->_bounds_x(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)).b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 508; goto __pyx_L1;}
  __pyx_2 = PyNumber_Subtract(__pyx_v_x, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 508; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_x, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 508; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.right.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_x);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_6bottom___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_6bottom___get__(PyObject *__pyx_v_self) {
  float __pyx_v_y;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":514 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._y),(&__pyx_v_y));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":515 */
  __pyx_1 = PyFloat_FromDouble((((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base.__pyx_base.__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)).a + __pyx_v_y)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 515; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.bottom.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_y;

static int __pyx_f_6rabbyt_8_sprites_7cSprite_6bottom___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_y); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_6bottom___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_y) {
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_y);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base.__pyx_base.__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)).a); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 517; goto __pyx_L1;}
  __pyx_2 = PyNumber_Subtract(__pyx_v_y, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 517; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_y, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 517; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.bottom.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_y);
  return __pyx_r;
}

static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_3top___get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_f_6rabbyt_8_sprites_7cSprite_3top___get__(PyObject *__pyx_v_self) {
  float __pyx_v_y;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":523 */
  READ_SLOT((&((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base._y),(&__pyx_v_y));

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":524 */
  __pyx_1 = PyFloat_FromDouble((((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base.__pyx_base.__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)).b + __pyx_v_y)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 524; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.top.__get__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_6rabbyt_8_sprites_7cSprite_3top___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_y); /*proto*/
static int __pyx_f_6rabbyt_8_sprites_7cSprite_3top___set__(PyObject *__pyx_v_self, PyObject *__pyx_v_y) {
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_y);
  __pyx_1 = PyFloat_FromDouble(((struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite *)((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)->__pyx_base.__pyx_base.__pyx_vtab)->_bounds_y(((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)__pyx_v_self)).b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 526; goto __pyx_L1;}
  __pyx_2 = PyNumber_Subtract(__pyx_v_y, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 526; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_y, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 526; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._sprites.cSprite.top.__set__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_y);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n___author__, "__author__"},
  {&__pyx_n___credits__, "__credits__"},
  {&__pyx_n___docs_all__, "__docs_all__"},
  {&__pyx_n__tex_shape_data_ptr, "_tex_shape_data_ptr"},
  {&__pyx_n_render_after_transform, "render_after_transform"},
  {&__pyx_n_split, "split"},
  {&__pyx_n_x, "x"},
  {&__pyx_n_y, "y"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k10p, __pyx_k10, sizeof(__pyx_k10)},
  {&__pyx_k11p, __pyx_k11, sizeof(__pyx_k11)},
  {&__pyx_k12p, __pyx_k12, sizeof(__pyx_k12)},
  {0, 0, 0}
};
static struct __pyx_vtabstruct_6rabbyt_8_sprites_cBaseSprite __pyx_vtable_6rabbyt_8_sprites_cBaseSprite;

static PyObject *__pyx_tp_new_6rabbyt_8_sprites_cBaseSprite(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *p;
  PyObject *o = __pyx_ptype_6rabbyt_6_anims_cAnimable->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite *)o);
  *(struct __pyx_vtabstruct_6rabbyt_8_sprites_cBaseSprite **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_8_sprites_cBaseSprite;
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_8_sprites_cBaseSprite(PyObject *o) {
  __pyx_ptype_6rabbyt_6_anims_cAnimable->tp_dealloc(o);
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_11cBaseSprite_bounding_radius(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_11cBaseSprite_15bounding_radius___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_11cBaseSprite_bounding_radius(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_11cBaseSprite_15bounding_radius___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_11cBaseSprite_bounding_radius_squared(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_11cBaseSprite_23bounding_radius_squared___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_11cBaseSprite_bounding_radius_squared(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_11cBaseSprite_23bounding_radius_squared___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static struct PyMethodDef __pyx_methods_6rabbyt_8_sprites_cBaseSprite[] = {
  {"convert_offset", (PyCFunction)__pyx_f_6rabbyt_8_sprites_11cBaseSprite_convert_offset, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_8_sprites_11cBaseSprite_convert_offset},
  {"render", (PyCFunction)__pyx_f_6rabbyt_8_sprites_11cBaseSprite_render, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_8_sprites_11cBaseSprite_render},
  {"render_after_transform", (PyCFunction)__pyx_f_6rabbyt_8_sprites_11cBaseSprite_render_after_transform, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_8_sprites_11cBaseSprite_render_after_transform},
  {0, 0, 0, 0}
};

static struct PyGetSetDef __pyx_getsets_6rabbyt_8_sprites_cBaseSprite[] = {
  {"bounding_radius", __pyx_getprop_6rabbyt_8_sprites_11cBaseSprite_bounding_radius, __pyx_setprop_6rabbyt_8_sprites_11cBaseSprite_bounding_radius, __pyx_k1, 0},
  {"bounding_radius_squared", __pyx_getprop_6rabbyt_8_sprites_11cBaseSprite_bounding_radius_squared, __pyx_setprop_6rabbyt_8_sprites_11cBaseSprite_bounding_radius_squared, __pyx_k2, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_cBaseSprite = {
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

static PySequenceMethods __pyx_tp_as_sequence_cBaseSprite = {
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

static PyMappingMethods __pyx_tp_as_mapping_cBaseSprite = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_cBaseSprite = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_8_sprites_cBaseSprite = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._sprites.cBaseSprite", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_8_sprites_cBaseSprite), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_8_sprites_cBaseSprite, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_cBaseSprite, /*tp_as_number*/
  &__pyx_tp_as_sequence_cBaseSprite, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_cBaseSprite, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_cBaseSprite, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_8_sprites_cBaseSprite, /*tp_methods*/
  0, /*tp_members*/
  __pyx_getsets_6rabbyt_8_sprites_cBaseSprite, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_8_sprites_cBaseSprite, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite __pyx_vtable_6rabbyt_8_sprites_cSprite;

static PyObject *__pyx_tp_new_6rabbyt_8_sprites_cSprite(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6rabbyt_8_sprites_cSprite *p;
  PyObject *o = __pyx_ptype_6rabbyt_8_sprites_cBaseSprite->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6rabbyt_8_sprites_cSprite *)o);
  *(struct __pyx_vtabstruct_6rabbyt_8_sprites_cSprite **)&p->__pyx_base.__pyx_base.__pyx_vtab = __pyx_vtabptr_6rabbyt_8_sprites_cSprite;
  p->_shape = ((struct __pyx_obj_6rabbyt_10primitives_Quad *)Py_None); Py_INCREF(Py_None);
  p->_tex_shape = ((struct __pyx_obj_6rabbyt_10primitives_Quad *)Py_None); Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_6rabbyt_8_sprites_cSprite(PyObject *o) {
  struct __pyx_obj_6rabbyt_8_sprites_cSprite *p = (struct __pyx_obj_6rabbyt_8_sprites_cSprite *)o;
  Py_XDECREF(((PyObject *)p->_shape));
  Py_XDECREF(((PyObject *)p->_tex_shape));
  __pyx_ptype_6rabbyt_8_sprites_cBaseSprite->tp_dealloc(o);
}

static int __pyx_tp_traverse_6rabbyt_8_sprites_cSprite(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_6rabbyt_8_sprites_cSprite *p = (struct __pyx_obj_6rabbyt_8_sprites_cSprite *)o;
  traverseproc t;
  if ((t = __pyx_ptype_6rabbyt_8_sprites_cBaseSprite->tp_traverse)) {
    e = t(o, v, a); if (e) return e;
  }
  if (p->_shape) {
    e = (*v)(((PyObject*)p->_shape), a); if (e) return e;
  }
  if (p->_tex_shape) {
    e = (*v)(((PyObject*)p->_tex_shape), a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_6rabbyt_8_sprites_cSprite(PyObject *o) {
  struct __pyx_obj_6rabbyt_8_sprites_cSprite *p = (struct __pyx_obj_6rabbyt_8_sprites_cSprite *)o;
  PyObject *t;
  inquiry c;
  if ((c = __pyx_ptype_6rabbyt_8_sprites_cBaseSprite->tp_clear)) {
    c(o);
  }
  t = ((PyObject *)p->_shape); 
  p->_shape = ((struct __pyx_obj_6rabbyt_10primitives_Quad *)Py_None); Py_INCREF(Py_None);
  Py_XDECREF(t);
  t = ((PyObject *)p->_tex_shape); 
  p->_tex_shape = ((struct __pyx_obj_6rabbyt_10primitives_Quad *)Py_None); Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_7cSprite_bounding_radius(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_7cSprite_15bounding_radius___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_7cSprite_bounding_radius(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_15bounding_radius___set__(o, v);
  }
  else {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_15bounding_radius___del__(o);
  }
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_7cSprite_bounding_radius_squared(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_7cSprite_23bounding_radius_squared___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_7cSprite_bounding_radius_squared(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_23bounding_radius_squared___set__(o, v);
  }
  else {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_23bounding_radius_squared___del__(o);
  }
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_7cSprite_shape(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_7cSprite_5shape___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_7cSprite_shape(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_5shape___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_7cSprite_tex_shape(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_7cSprite_9tex_shape___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_7cSprite_tex_shape(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_9tex_shape___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_7cSprite_texture_id(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_7cSprite_10texture_id___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_7cSprite_texture_id(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_10texture_id___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_7cSprite_left(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_7cSprite_4left___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_7cSprite_left(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_4left___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_7cSprite_right(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_7cSprite_5right___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_7cSprite_right(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_5right___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_7cSprite_bottom(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_7cSprite_6bottom___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_7cSprite_bottom(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_6bottom___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static PyObject *__pyx_getprop_6rabbyt_8_sprites_7cSprite_top(PyObject *o, void *x) {
  return __pyx_f_6rabbyt_8_sprites_7cSprite_3top___get__(o);
}

static int __pyx_setprop_6rabbyt_8_sprites_7cSprite_top(PyObject *o, PyObject *v, void *x) {
  if (v) {
    return __pyx_f_6rabbyt_8_sprites_7cSprite_3top___set__(o, v);
  }
  else {
    PyErr_SetString(PyExc_NotImplementedError, "__del__");
    return -1;
  }
}

static struct PyMethodDef __pyx_methods_6rabbyt_8_sprites_cSprite[] = {
  {"render", (PyCFunction)__pyx_f_6rabbyt_8_sprites_7cSprite_render, METH_VARARGS|METH_KEYWORDS, __pyx_doc_6rabbyt_8_sprites_7cSprite_render},
  {0, 0, 0, 0}
};

static struct PyGetSetDef __pyx_getsets_6rabbyt_8_sprites_cSprite[] = {
  {"bounding_radius", __pyx_getprop_6rabbyt_8_sprites_7cSprite_bounding_radius, __pyx_setprop_6rabbyt_8_sprites_7cSprite_bounding_radius, __pyx_k3, 0},
  {"bounding_radius_squared", __pyx_getprop_6rabbyt_8_sprites_7cSprite_bounding_radius_squared, __pyx_setprop_6rabbyt_8_sprites_7cSprite_bounding_radius_squared, __pyx_k2, 0},
  {"shape", __pyx_getprop_6rabbyt_8_sprites_7cSprite_shape, __pyx_setprop_6rabbyt_8_sprites_7cSprite_shape, __pyx_k4, 0},
  {"tex_shape", __pyx_getprop_6rabbyt_8_sprites_7cSprite_tex_shape, __pyx_setprop_6rabbyt_8_sprites_7cSprite_tex_shape, __pyx_k5, 0},
  {"texture_id", __pyx_getprop_6rabbyt_8_sprites_7cSprite_texture_id, __pyx_setprop_6rabbyt_8_sprites_7cSprite_texture_id, 0, 0},
  {"left", __pyx_getprop_6rabbyt_8_sprites_7cSprite_left, __pyx_setprop_6rabbyt_8_sprites_7cSprite_left, __pyx_k6, 0},
  {"right", __pyx_getprop_6rabbyt_8_sprites_7cSprite_right, __pyx_setprop_6rabbyt_8_sprites_7cSprite_right, __pyx_k7, 0},
  {"bottom", __pyx_getprop_6rabbyt_8_sprites_7cSprite_bottom, __pyx_setprop_6rabbyt_8_sprites_7cSprite_bottom, __pyx_k8, 0},
  {"top", __pyx_getprop_6rabbyt_8_sprites_7cSprite_top, __pyx_setprop_6rabbyt_8_sprites_7cSprite_top, __pyx_k9, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_cSprite = {
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

static PySequenceMethods __pyx_tp_as_sequence_cSprite = {
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

static PyMappingMethods __pyx_tp_as_mapping_cSprite = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_cSprite = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6rabbyt_8_sprites_cSprite = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "rabbyt._sprites.cSprite", /*tp_name*/
  sizeof(struct __pyx_obj_6rabbyt_8_sprites_cSprite), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6rabbyt_8_sprites_cSprite, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_cSprite, /*tp_as_number*/
  &__pyx_tp_as_sequence_cSprite, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_cSprite, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_cSprite, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_6rabbyt_8_sprites_cSprite, /*tp_traverse*/
  __pyx_tp_clear_6rabbyt_8_sprites_cSprite, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6rabbyt_8_sprites_cSprite, /*tp_methods*/
  0, /*tp_members*/
  __pyx_getsets_6rabbyt_8_sprites_cSprite, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6rabbyt_8_sprites_cSprite, /*tp_new*/
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

PyMODINIT_FUNC init_sprites(void); /*proto*/
PyMODINIT_FUNC init_sprites(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("_sprites", __pyx_methods, __pyx_mdoc, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_ptype_6rabbyt_6_anims_cAnimable = __Pyx_ImportType("rabbyt._anims", "cAnimable", sizeof(struct __pyx_obj_6rabbyt_6_anims_cAnimable)); if (!__pyx_ptype_6rabbyt_6_anims_cAnimable) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (__Pyx_GetVtable(__pyx_ptype_6rabbyt_6_anims_cAnimable->tp_dict, &__pyx_vtabptr_6rabbyt_6_anims_cAnimable) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_vtabptr_6rabbyt_8_sprites_cBaseSprite = &__pyx_vtable_6rabbyt_8_sprites_cBaseSprite;
  __pyx_vtable_6rabbyt_8_sprites_cBaseSprite.__pyx_base = *__pyx_vtabptr_6rabbyt_6_anims_cAnimable;
  *(void(**)(void))&__pyx_vtable_6rabbyt_8_sprites_cBaseSprite.__pyx_base._modify_slots = (void(*)(void))__pyx_f_6rabbyt_8_sprites_11cBaseSprite__modify_slots;
  *(void(**)(void))&__pyx_vtable_6rabbyt_8_sprites_cBaseSprite._convert_offset = (void(*)(void))__pyx_f_6rabbyt_8_sprites_11cBaseSprite__convert_offset;
  __pyx_type_6rabbyt_8_sprites_cBaseSprite.tp_base = __pyx_ptype_6rabbyt_6_anims_cAnimable;
  if (PyType_Ready(&__pyx_type_6rabbyt_8_sprites_cBaseSprite) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_8_sprites_cBaseSprite.tp_dict, __pyx_vtabptr_6rabbyt_8_sprites_cBaseSprite) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "cBaseSprite", (PyObject *)&__pyx_type_6rabbyt_8_sprites_cBaseSprite) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_8_sprites_cBaseSprite = &__pyx_type_6rabbyt_8_sprites_cBaseSprite;
  __pyx_vtabptr_6rabbyt_8_sprites_cSprite = &__pyx_vtable_6rabbyt_8_sprites_cSprite;
  __pyx_vtable_6rabbyt_8_sprites_cSprite.__pyx_base = *__pyx_vtabptr_6rabbyt_8_sprites_cBaseSprite;
  *(void(**)(void))&__pyx_vtable_6rabbyt_8_sprites_cSprite.__pyx_base.__pyx_base._modify_slots = (void(*)(void))__pyx_f_6rabbyt_8_sprites_7cSprite__modify_slots;
  *(void(**)(void))&__pyx_vtable_6rabbyt_8_sprites_cSprite._render = (void(*)(void))__pyx_f_6rabbyt_8_sprites_7cSprite__render;
  *(void(**)(void))&__pyx_vtable_6rabbyt_8_sprites_cSprite._bounds_x = (void(*)(void))__pyx_f_6rabbyt_8_sprites_7cSprite__bounds_x;
  *(void(**)(void))&__pyx_vtable_6rabbyt_8_sprites_cSprite._bounds_y = (void(*)(void))__pyx_f_6rabbyt_8_sprites_7cSprite__bounds_y;
  __pyx_type_6rabbyt_8_sprites_cSprite.tp_base = __pyx_ptype_6rabbyt_8_sprites_cBaseSprite;
  __pyx_type_6rabbyt_8_sprites_cSprite.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_6rabbyt_8_sprites_cSprite) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 260; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6rabbyt_8_sprites_cSprite.tp_dict, __pyx_vtabptr_6rabbyt_8_sprites_cSprite) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 260; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "cSprite", (PyObject *)&__pyx_type_6rabbyt_8_sprites_cSprite) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 260; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_8_sprites_cSprite = &__pyx_type_6rabbyt_8_sprites_cSprite;
  __pyx_ptype_6rabbyt_10primitives_Quad = __Pyx_ImportType("rabbyt.primitives", "Quad", sizeof(struct __pyx_obj_6rabbyt_10primitives_Quad)); if (!__pyx_ptype_6rabbyt_10primitives_Quad) {__pyx_filename = __pyx_f[1]; __pyx_lineno = 7; goto __pyx_L1;}
  if (__Pyx_GetVtable(__pyx_ptype_6rabbyt_10primitives_Quad->tp_dict, &__pyx_vtabptr_6rabbyt_10primitives_Quad) < 0) {__pyx_filename = __pyx_f[1]; __pyx_lineno = 7; goto __pyx_L1;}
  __pyx_ptype_6rabbyt_6_anims_AnimSlot = __Pyx_ImportType("rabbyt._anims", "AnimSlot", sizeof(struct __pyx_obj_6rabbyt_6_anims_AnimSlot)); if (!__pyx_ptype_6rabbyt_6_anims_AnimSlot) {__pyx_filename = __pyx_f[2]; __pyx_lineno = 42; goto __pyx_L1;}
  if (__Pyx_GetVtable(__pyx_ptype_6rabbyt_6_anims_AnimSlot->tp_dict, &__pyx_vtabptr_6rabbyt_6_anims_AnimSlot) < 0) {__pyx_filename = __pyx_f[2]; __pyx_lineno = 42; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":8 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n___credits__, __pyx_k10p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":30 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n___author__, __pyx_k11p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 30; goto __pyx_L1;}

  /* "/home/mmarshall/build/rabbyt/rabbyt/rabbyt._sprites.pyx":528 */
  __pyx_1 = PyObject_GetAttr(__pyx_k12p, __pyx_n_split); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 528; goto __pyx_L1;}
  __pyx_2 = PyObject_CallObject(__pyx_1, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 528; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (PyObject_SetAttr(__pyx_m, __pyx_n___docs_all__, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 528; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("rabbyt._sprites");
}

static char *__pyx_filenames[] = {
  "rabbyt._sprites.pyx",
  "rabbyt.primitives.pxd",
  "rabbyt._anims.pxd",
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
