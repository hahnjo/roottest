#include "TObjArray.h"
#include "TClonesArray.h"

class Collector : public TObject {
   TClonesArray   fMyClArr; 
   TObjArray      fMyObjArr;
   Bool_t         fValid;

public:
   Collector() : fMyClArr("TNamed") {}
   ClassDef(Collector,1);
};

class Real : public Collector {
   Float_t fValue;

   ClassDef(Real,1);
};

class Event {

   TClonesArray fArr;
   Collector fCol;
   Int_t fEventNum;

public:
   Event() : fArr("Real") {};
};

#include "TTree.h"

void tobj(bool debug=false) {
   Event * e = new Event;
   TTree *t = new TTree("T","T");
   if (debug) gDebug = 9;
   t->Branch("event","Event",&e,32000,99);
   if (debug) gDebug = 0;
   t->Print();
}
