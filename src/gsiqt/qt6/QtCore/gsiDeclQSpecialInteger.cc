
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQSpecialInteger.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSpecialInteger>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSpecialInteger

//  Constructor QSpecialInteger::QSpecialInteger()


static void _init_ctor_QSpecialInteger_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSpecialInteger> ();
}

static void _call_ctor_QSpecialInteger_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSpecialInteger *> (new QSpecialInteger ());
}


//  Constructor QSpecialInteger::QSpecialInteger(S::StorageType i)


static void _init_ctor_QSpecialInteger_1778 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return_new<QSpecialInteger> ();
}

static void _call_ctor_QSpecialInteger_1778 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger *> (new QSpecialInteger (arg1));
}


// bool QSpecialInteger::operator !=(QSpecialInteger<S> i)


static void _init_f_operator_excl__eq__c2145 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<QSpecialInteger<S> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2145 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QSpecialInteger<S> arg1 = gsi::arg_reader<QSpecialInteger<S> >() (args, heap);
  ret.write<bool > ((bool)((QSpecialInteger *)cls)->operator != (arg1));
}


// QSpecialInteger &QSpecialInteger::operator %=(S::StorageType i)


static void _init_f_operator%_eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator%_eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator %= (arg1));
}


// QSpecialInteger &QSpecialInteger::operator &=(S::StorageType i)


static void _init_f_operator_amp__eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_amp__eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator &= (arg1));
}


// QSpecialInteger &QSpecialInteger::operator *=(S::StorageType i)


static void _init_f_operator_star__eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_star__eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator *= (arg1));
}


// QSpecialInteger &QSpecialInteger::operator ++()


static void _init_f_operator_plus__plus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_plus__plus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator ++ ());
}


// QSpecialInteger QSpecialInteger::operator ++(int)


static void _init_f_operator_plus__plus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QSpecialInteger > ();
}

static void _call_f_operator_plus__plus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QSpecialInteger > ((QSpecialInteger)((QSpecialInteger *)cls)->operator ++ (arg1));
}


// QSpecialInteger &QSpecialInteger::operator +=(S::StorageType i)


static void _init_f_operator_plus__eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_plus__eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator += (arg1));
}


// QSpecialInteger &QSpecialInteger::operator --()


static void _init_f_operator_minus__minus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_minus__minus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator -- ());
}


// QSpecialInteger QSpecialInteger::operator --(int)


static void _init_f_operator_minus__minus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QSpecialInteger > ();
}

static void _call_f_operator_minus__minus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QSpecialInteger > ((QSpecialInteger)((QSpecialInteger *)cls)->operator -- (arg1));
}


// QSpecialInteger &QSpecialInteger::operator -=(S::StorageType i)


static void _init_f_operator_minus__eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_minus__eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator -= (arg1));
}


// QSpecialInteger &QSpecialInteger::operator /=(S::StorageType i)


static void _init_f_operator_slash__eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_slash__eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator /= (arg1));
}


// QSpecialInteger &QSpecialInteger::operator <<=(S::StorageType i)


static void _init_f_operator_lt__lt__eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_lt__lt__eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator <<= (arg1));
}


// QSpecialInteger &QSpecialInteger::operator =(S::StorageType i)


static void _init_f_operator_eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator = (arg1));
}


// bool QSpecialInteger::operator ==(QSpecialInteger<S> i)


static void _init_f_operator_eq__eq__c2145 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<QSpecialInteger<S> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2145 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QSpecialInteger<S> arg1 = gsi::arg_reader<QSpecialInteger<S> >() (args, heap);
  ret.write<bool > ((bool)((QSpecialInteger *)cls)->operator == (arg1));
}


// QSpecialInteger &QSpecialInteger::operator >>=(S::StorageType i)


static void _init_f_operator_gt__gt__eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_gt__gt__eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator >>= (arg1));
}


// QSpecialInteger &QSpecialInteger::operator ^=(S::StorageType i)


static void _init_f_operator_acute__eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_acute__eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator ^= (arg1));
}


// QSpecialInteger &QSpecialInteger::operator |=(S::StorageType i)


static void _init_f_operator_pipe__eq__1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<S::StorageType > (argspec_0);
  decl->set_return<QSpecialInteger & > ();
}

static void _call_f_operator_pipe__eq__1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  S::StorageType arg1 = gsi::arg_reader<S::StorageType >() (args, heap);
  ret.write<QSpecialInteger & > ((QSpecialInteger &)((QSpecialInteger *)cls)->operator |= (arg1));
}


// static QSpecialInteger QSpecialInteger::max()


static void _init_f_max_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QSpecialInteger > ();
}

static void _call_f_max_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSpecialInteger > ((QSpecialInteger)QSpecialInteger::max ());
}


// static QSpecialInteger QSpecialInteger::min()


static void _init_f_min_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QSpecialInteger > ();
}

static void _call_f_min_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSpecialInteger > ((QSpecialInteger)QSpecialInteger::min ());
}



namespace gsi
{

static gsi::Methods methods_QSpecialInteger () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSpecialInteger::QSpecialInteger()\nThis method creates an object of class QSpecialInteger.", &_init_ctor_QSpecialInteger_0, &_call_ctor_QSpecialInteger_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSpecialInteger::QSpecialInteger(S::StorageType i)\nThis method creates an object of class QSpecialInteger.", &_init_ctor_QSpecialInteger_1778, &_call_ctor_QSpecialInteger_1778);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QSpecialInteger::operator !=(QSpecialInteger<S> i)\n", true, &_init_f_operator_excl__eq__c2145, &_call_f_operator_excl__eq__c2145);
  methods += new qt_gsi::GenericMethod ("%=", "@brief Method QSpecialInteger &QSpecialInteger::operator %=(S::StorageType i)\n", false, &_init_f_operator%_eq__1778, &_call_f_operator%_eq__1778);
  methods += new qt_gsi::GenericMethod ("&=", "@brief Method QSpecialInteger &QSpecialInteger::operator &=(S::StorageType i)\n", false, &_init_f_operator_amp__eq__1778, &_call_f_operator_amp__eq__1778);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QSpecialInteger &QSpecialInteger::operator *=(S::StorageType i)\n", false, &_init_f_operator_star__eq__1778, &_call_f_operator_star__eq__1778);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QSpecialInteger &QSpecialInteger::operator ++()\n", false, &_init_f_operator_plus__plus__0, &_call_f_operator_plus__plus__0);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QSpecialInteger QSpecialInteger::operator ++(int)\n", false, &_init_f_operator_plus__plus__767, &_call_f_operator_plus__plus__767);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QSpecialInteger &QSpecialInteger::operator +=(S::StorageType i)\n", false, &_init_f_operator_plus__eq__1778, &_call_f_operator_plus__eq__1778);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QSpecialInteger &QSpecialInteger::operator --()\n", false, &_init_f_operator_minus__minus__0, &_call_f_operator_minus__minus__0);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QSpecialInteger QSpecialInteger::operator --(int)\n", false, &_init_f_operator_minus__minus__767, &_call_f_operator_minus__minus__767);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QSpecialInteger &QSpecialInteger::operator -=(S::StorageType i)\n", false, &_init_f_operator_minus__eq__1778, &_call_f_operator_minus__eq__1778);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QSpecialInteger &QSpecialInteger::operator /=(S::StorageType i)\n", false, &_init_f_operator_slash__eq__1778, &_call_f_operator_slash__eq__1778);
  methods += new qt_gsi::GenericMethod ("<<=", "@brief Method QSpecialInteger &QSpecialInteger::operator <<=(S::StorageType i)\n", false, &_init_f_operator_lt__lt__eq__1778, &_call_f_operator_lt__lt__eq__1778);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSpecialInteger &QSpecialInteger::operator =(S::StorageType i)\n", false, &_init_f_operator_eq__1778, &_call_f_operator_eq__1778);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QSpecialInteger::operator ==(QSpecialInteger<S> i)\n", true, &_init_f_operator_eq__eq__c2145, &_call_f_operator_eq__eq__c2145);
  methods += new qt_gsi::GenericMethod (">>=", "@brief Method QSpecialInteger &QSpecialInteger::operator >>=(S::StorageType i)\n", false, &_init_f_operator_gt__gt__eq__1778, &_call_f_operator_gt__gt__eq__1778);
  methods += new qt_gsi::GenericMethod ("^=", "@brief Method QSpecialInteger &QSpecialInteger::operator ^=(S::StorageType i)\n", false, &_init_f_operator_acute__eq__1778, &_call_f_operator_acute__eq__1778);
  methods += new qt_gsi::GenericMethod ("|=", "@brief Method QSpecialInteger &QSpecialInteger::operator |=(S::StorageType i)\n", false, &_init_f_operator_pipe__eq__1778, &_call_f_operator_pipe__eq__1778);
  methods += new qt_gsi::GenericStaticMethod ("max", "@brief Static method QSpecialInteger QSpecialInteger::max()\nThis method is static and can be called without an instance.", &_init_f_max_0, &_call_f_max_0);
  methods += new qt_gsi::GenericStaticMethod ("min", "@brief Static method QSpecialInteger QSpecialInteger::min()\nThis method is static and can be called without an instance.", &_init_f_min_0, &_call_f_min_0);
  return methods;
}

gsi::Class<QSpecialInteger> decl_QSpecialInteger ("QtCore", "QSpecialInteger",
  methods_QSpecialInteger (),
  "@qt\n@brief Binding of QSpecialInteger");


GSI_QTCORE_PUBLIC gsi::Class<QSpecialInteger> &qtdecl_QSpecialInteger () { return decl_QSpecialInteger; }

}
