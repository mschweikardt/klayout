
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
*  @file gsiDeclQStatusTipEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStatusTipEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStatusTipEvent

// QStatusTipEvent *QStatusTipEvent::clone()


static void _init_f_clone_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStatusTipEvent * > ();
}

static void _call_f_clone_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStatusTipEvent * > ((QStatusTipEvent *)((QStatusTipEvent *)cls)->clone ());
}


// QString QStatusTipEvent::tip()


static void _init_f_tip_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_tip_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QStatusTipEvent *)cls)->tip ());
}


namespace gsi
{

static gsi::Methods methods_QStatusTipEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("clone", "@brief Method QStatusTipEvent *QStatusTipEvent::clone()\nThis is a reimplementation of QEvent::clone", true, &_init_f_clone_c0, &_call_f_clone_c0);
  methods += new qt_gsi::GenericMethod ("tip", "@brief Method QString QStatusTipEvent::tip()\n", true, &_init_f_tip_c0, &_call_f_tip_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QStatusTipEvent> decl_QStatusTipEvent (qtdecl_QEvent (), "QtGui", "QStatusTipEvent_Native",
  methods_QStatusTipEvent (),
  "@hide\n@alias QStatusTipEvent");

GSI_QTGUI_PUBLIC gsi::Class<QStatusTipEvent> &qtdecl_QStatusTipEvent () { return decl_QStatusTipEvent; }

}


class QStatusTipEvent_Adaptor : public QStatusTipEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QStatusTipEvent_Adaptor();

  //  [adaptor ctor] QStatusTipEvent::QStatusTipEvent(const QString &tip)
  QStatusTipEvent_Adaptor(const QString &tip) : QStatusTipEvent(tip)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QStatusTipEvent *QStatusTipEvent::clone()
  QStatusTipEvent * cbs_clone_c0_0() const
  {
    return QStatusTipEvent::clone();
  }

  virtual QStatusTipEvent * clone() const
  {
    if (cb_clone_c0_0.can_issue()) {
      return cb_clone_c0_0.issue<QStatusTipEvent_Adaptor, QStatusTipEvent *>(&QStatusTipEvent_Adaptor::cbs_clone_c0_0);
    } else {
      return QStatusTipEvent::clone();
    }
  }

  //  [adaptor impl] void QStatusTipEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QStatusTipEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QStatusTipEvent_Adaptor, bool>(&QStatusTipEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QStatusTipEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_clone_c0_0;
  gsi::Callback cb_setAccepted_864_0;
};

QStatusTipEvent_Adaptor::~QStatusTipEvent_Adaptor() { }

//  Constructor QStatusTipEvent::QStatusTipEvent(const QString &tip) (adaptor class)

static void _init_ctor_QStatusTipEvent_Adaptor_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tip");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QStatusTipEvent_Adaptor> ();
}

static void _call_ctor_QStatusTipEvent_Adaptor_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QStatusTipEvent_Adaptor *> (new QStatusTipEvent_Adaptor (arg1));
}


// QStatusTipEvent *QStatusTipEvent::clone()

static void _init_cbs_clone_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStatusTipEvent * > ();
}

static void _call_cbs_clone_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStatusTipEvent * > ((QStatusTipEvent *)((QStatusTipEvent_Adaptor *)cls)->cbs_clone_c0_0 ());
}

static void _set_callback_cbs_clone_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QStatusTipEvent_Adaptor *)cls)->cb_clone_c0_0 = cb;
}


// void QStatusTipEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStatusTipEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QStatusTipEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QStatusTipEvent> &qtdecl_QStatusTipEvent ();

static gsi::Methods methods_QStatusTipEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStatusTipEvent::QStatusTipEvent(const QString &tip)\nThis method creates an object of class QStatusTipEvent.", &_init_ctor_QStatusTipEvent_Adaptor_2025, &_call_ctor_QStatusTipEvent_Adaptor_2025);
  methods += new qt_gsi::GenericMethod ("clone", "@brief Virtual method QStatusTipEvent *QStatusTipEvent::clone()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("clone", "@hide", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0, &_set_callback_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QStatusTipEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QStatusTipEvent_Adaptor> decl_QStatusTipEvent_Adaptor (qtdecl_QStatusTipEvent (), "QtGui", "QStatusTipEvent",
  methods_QStatusTipEvent_Adaptor (),
  "@qt\n@brief Binding of QStatusTipEvent");

}
