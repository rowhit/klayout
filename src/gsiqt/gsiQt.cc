
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2017 Matthias Koefferlein

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


#include "gsiQt.h"

#include <QtGui/QGraphicsItem>
#include <QtGui/QGraphicsObject>
#include <QtCore/QVariant>

namespace qt_gsi
{

// ---------------------------------------------------------------------------
//  QVariant::Type implementation
//  (this type is not created automatically since QVariant is implemented implicitly)

class QVariant_Namespace { };

//  A dummy namespace "QVariant"
gsi::Class<QVariant_Namespace> decl_QVariant_Namespace ("QVariant",
  gsi::Methods(),
  "@qt\n@brief This class represents the QVariant namespace");

static gsi::Enum<QVariant::Type> decl_QVariant_Type_Enum ("QVariant_Type",
    gsi::enum_const ("Invalid", QVariant::Invalid, "@brief Enum constant QVariant::Invalid") +
    gsi::enum_const ("Bool", QVariant::Bool, "@brief Enum constant QVariant::Bool") +
    gsi::enum_const ("Int", QVariant::Int, "@brief Enum constant QVariant::Int") +
    gsi::enum_const ("UInt", QVariant::UInt, "@brief Enum constant QVariant::UInt") +
    gsi::enum_const ("LongLong", QVariant::LongLong, "@brief Enum constant QVariant::LongLong") +
    gsi::enum_const ("ULongLong", QVariant::ULongLong, "@brief Enum constant QVariant::ULongLong") +
    gsi::enum_const ("Double", QVariant::Double, "@brief Enum constant QVariant::Double") +
    gsi::enum_const ("Char", QVariant::Char, "@brief Enum constant QVariant::Char") +
    gsi::enum_const ("Map", QVariant::Map, "@brief Enum constant QVariant::Map") +
    gsi::enum_const ("List", QVariant::List, "@brief Enum constant QVariant::List") +
    gsi::enum_const ("String", QVariant::String, "@brief Enum constant QVariant::String") +
    gsi::enum_const ("StringList", QVariant::StringList, "@brief Enum constant QVariant::StringList") +
    gsi::enum_const ("ByteArray", QVariant::ByteArray, "@brief Enum constant QVariant::ByteArray") +
    gsi::enum_const ("BitArray", QVariant::BitArray, "@brief Enum constant QVariant::BitArray") +
    gsi::enum_const ("Date", QVariant::Date, "@brief Enum constant QVariant::Date") +
    gsi::enum_const ("Time", QVariant::Time, "@brief Enum constant QVariant::Time") +
    gsi::enum_const ("DateTime", QVariant::DateTime, "@brief Enum constant QVariant::DateTime") +
    gsi::enum_const ("Url", QVariant::Url, "@brief Enum constant QVariant::Url") +
    gsi::enum_const ("Locale", QVariant::Locale, "@brief Enum constant QVariant::Locale") +
    gsi::enum_const ("Rect", QVariant::Rect, "@brief Enum constant QVariant::Rect") +
    gsi::enum_const ("RectF", QVariant::RectF, "@brief Enum constant QVariant::RectF") +
    gsi::enum_const ("Size", QVariant::Size, "@brief Enum constant QVariant::Size") +
    gsi::enum_const ("SizeF", QVariant::SizeF, "@brief Enum constant QVariant::SizeF") +
    gsi::enum_const ("Line", QVariant::Line, "@brief Enum constant QVariant::Line") +
    gsi::enum_const ("LineF", QVariant::LineF, "@brief Enum constant QVariant::LineF") +
    gsi::enum_const ("Point", QVariant::Point, "@brief Enum constant QVariant::Point") +
    gsi::enum_const ("PointF", QVariant::PointF, "@brief Enum constant QVariant::PointF") +
    gsi::enum_const ("RegExp", QVariant::RegExp, "@brief Enum constant QVariant::RegExp") +
    gsi::enum_const ("Hash", QVariant::Hash, "@brief Enum constant QVariant::Hash") +
    gsi::enum_const ("LastCoreType", QVariant::LastCoreType, "@brief Enum constant QVariant::LastCoreType") +
    gsi::enum_const ("Font", QVariant::Font, "@brief Enum constant QVariant::Font") +
    gsi::enum_const ("Pixmap", QVariant::Pixmap, "@brief Enum constant QVariant::Pixmap") +
    gsi::enum_const ("Brush", QVariant::Brush, "@brief Enum constant QVariant::Brush") +
    gsi::enum_const ("Color", QVariant::Color, "@brief Enum constant QVariant::Color") +
    gsi::enum_const ("Palette", QVariant::Palette, "@brief Enum constant QVariant::Palette") +
    gsi::enum_const ("Icon", QVariant::Icon, "@brief Enum constant QVariant::Icon") +
    gsi::enum_const ("Image", QVariant::Image, "@brief Enum constant QVariant::Image") +
    gsi::enum_const ("Polygon", QVariant::Polygon, "@brief Enum constant QVariant::Polygon") +
    gsi::enum_const ("Region", QVariant::Region, "@brief Enum constant QVariant::Region") +
    gsi::enum_const ("Bitmap", QVariant::Bitmap, "@brief Enum constant QVariant::Bitmap") +
    gsi::enum_const ("Cursor", QVariant::Cursor, "@brief Enum constant QVariant::Cursor") +
    gsi::enum_const ("SizePolicy", QVariant::SizePolicy, "@brief Enum constant QVariant::SizePolicy") +
    gsi::enum_const ("KeySequence", QVariant::KeySequence, "@brief Enum constant QVariant::KeySequence") +
    gsi::enum_const ("Pen", QVariant::Pen, "@brief Enum constant QVariant::Pen") +
    gsi::enum_const ("TextLength", QVariant::TextLength, "@brief Enum constant QVariant::TextLength") +
    gsi::enum_const ("TextFormat", QVariant::TextFormat, "@brief Enum constant QVariant::TextFormat") +
    gsi::enum_const ("Matrix", QVariant::Matrix, "@brief Enum constant QVariant::Matrix") +
    gsi::enum_const ("Transform", QVariant::Transform, "@brief Enum constant QVariant::Transform") +
    gsi::enum_const ("Matrix4x4", QVariant::Matrix4x4, "@brief Enum constant QVariant::Matrix4x4") +
    gsi::enum_const ("Vector2D", QVariant::Vector2D, "@brief Enum constant QVariant::Vector2D") +
    gsi::enum_const ("Vector3D", QVariant::Vector3D, "@brief Enum constant QVariant::Vector3D") +
    gsi::enum_const ("Vector4D", QVariant::Vector4D, "@brief Enum constant QVariant::Vector4D") +
    gsi::enum_const ("Quaternion", QVariant::Quaternion, "@brief Enum constant QVariant::Quaternion") +
    gsi::enum_const ("LastGuiType", QVariant::LastGuiType, "@brief Enum constant QVariant::LastGuiType") +
    gsi::enum_const ("UserType", QVariant::UserType, "@brief Enum constant QVariant::UserType") +
    gsi::enum_const ("LastType", QVariant::LastType, "@brief Enum constant QVariant::LastType"),
  "@qt\n@brief This class represents the QVariant::Type enum");

static gsi::QFlagsClass<QVariant::Type> decl_QVariant_Type_Enums ("QVariant_QFlags_Type",
  "@qt\n@brief This class represents the QFlags<QVariant::Type> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QVariant_Namespace> inject_QVariant_Type_Enum_in_parent (decl_QVariant_Type_Enum.defs ());
static gsi::ClassExt<QVariant_Namespace> decl_QVariant_Type_Enum_as_child (decl_QVariant_Type_Enum, "Type");
static gsi::ClassExt<QVariant_Namespace> decl_QVariant_Type_Enums_as_child (decl_QVariant_Type_Enums, "QFlags_Type");

// ---------------------------------------------------------------------------
//  AbstractMethodCalledException implementation

AbstractMethodCalledException::AbstractMethodCalledException (const char *method_name)
  : tl::Exception (tl::to_string (QObject::tr ("Abstract method called (%s)")).c_str (), method_name)
{
  //  .. nothing yet ..
}

// ---------------------------------------------------------------------------
//  QtObjectBase implementation

void QtObjectBase::init(QObject *object)
{
  //  This method is called whenever a QtObjectBase object is created as a GSI 
  //  interface for a QObject. If there is a parent, we can make C++ hold the reference to that
  //  object, thus moving the ownership to the C++ parent.
  if (object->parent ()) {
    keep ();
  }
}

void QtObjectBase::init(QGraphicsItem *object)
{
  //  This method is called whenever a QtObjectBase object is created as a GSI 
  //  interface for a QGraphicsItem. If there is a parent, we can make C++ hold the reference to that
  //  object, thus moving the ownership to the C++ parent.
  if (object->parentItem ()) {
    keep ();
  }
}

void QtObjectBase::init(QGraphicsObject *object)
{
  //  This method is called whenever a QtObjectBase object is created as a GSI 
  //  interface for a QGraphicsObject. If there is a parent, we can make C++ hold the reference to that
  //  object, thus moving the ownership to the C++ parent.
  if (object->parentItem () || object->parent ()) {
    keep ();
  }
}

}

