//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TPObjRef_h
#define TPObjRef_h
class TPObjRef;

#include "TPObjRef.h"

class TPObjRef {

public:
// Nested classes forward declaration.
class typeID_t;

public:
// Nested classes declaration.
class typeID_t {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned short m_TLCnvID;    //
   unsigned short m_cnvID;      //

   typeID_t();
   typeID_t(const typeID_t & );
   virtual ~typeID_t();

};

public:
// Data Members.
   TPObjRef::typeID_t m_typeID;    //
   unsigned int       m_index;     //

   TPObjRef();
   TPObjRef(const TPObjRef & );
   virtual ~TPObjRef();

};
#endif
