#ifndef DATABLOCK2_H
#define DATABLOCK2_H
 
#include "DataBlockBase.h"
#include "PureAbstractInterface.h"
 
class DataBlock2 : public DataBlockBase, public PureAbstractInterface {
 
 public:
 
  DataBlock2();
  virtual ~DataBlock2();
 
  virtual Short_t      GetXyzzy() const;
  virtual Short_t      GetAbc()   const;

 private:

  ClassDef(DataBlock2,1)
};

inline Short_t DataBlock2::GetXyzzy() const { return fRawBlock[0]; }
inline Short_t DataBlock2::GetAbc() const { return fRawBlock[1]; }

#endif
