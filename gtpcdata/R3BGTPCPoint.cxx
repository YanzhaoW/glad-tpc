// -------------------------------------------------------------------------
// -----                      R3BGTPCPoint source file              -----
// -------------------------------------------------------------------------

#include "R3BGTPCPoint.h"
#include <iostream>

using std::cout;
using std::endl;

// -----   Default constructor   -------------------------------------------
R3BGTPCPoint::R3BGTPCPoint() : FairMCPoint() {
  fParentTrackID = fTrackStatus = 0;
  fPrimaryParticleID = fDetCopyID = 0;  
  fPDGCode = fModuleID = 0;     
  fCharge = fMass = fKineticEnergy = fTrackStep = 0.0;    
  fIsAccepted = kFALSE; 
}
// -------------------------------------------------------------------------

// -----   Standard constructor   ------------------------------------------
R3BGTPCPoint::R3BGTPCPoint(Int_t trackID, Int_t detID, TVector3 pos,
			   TVector3 mom, Double_t tof, Double_t length, 
			   Double_t eLoss, const UInt_t EventId,
			   Int_t parentTrackID, Int_t primaryParticleID, 
			   Int_t trackStatus, Int_t PDGCode, Int_t moduleID, 
			   Int_t detCopyID, TString particleName, TString volName, 
			   TString processName, Double_t charge, Double_t mass, 
			   Double_t kineticEnergy, Double_t trackStep, 
			   Bool_t isAccepted)
  : FairMCPoint(trackID, detID, pos, mom, tof, length, eLoss) {
  fParentTrackID = fTrackStatus = 0;
  fPrimaryParticleID = fDetCopyID = 0;  
  fPDGCode = fModuleID = 0;     
  fCharge = fMass = fKineticEnergy = fTrackStep = 0.0;    
  fIsAccepted = kFALSE; 
}
// -------------------------------------------------------------------------

// -----   Destructor   ----------------------------------------------------
R3BGTPCPoint::~R3BGTPCPoint() { 
}
// -------------------------------------------------------------------------

// -----   Public method Print   -------------------------------------------
void R3BGTPCPoint::Print(const Option_t* opt) const {
  cout << "-I- R3BGTPCPoint: STS Point for track " << fTrackID
       << " in detector " << fDetectorID << endl;
  cout << "    Position (" << fX << ", " << fY << ", " << fZ
       << ") cm" << endl;
  cout << "    Momentum (" << fPx << ", " << fPy << ", " << fPz
       << ") GeV" << endl;
  cout << "    Time " << fTime << " ns,  Length " << fLength
       << " cm,  Energy loss " << fELoss*1.0e06 << " keV" << endl;
}
// -------------------------------------------------------------------------

ClassImp(R3BGTPCPoint)
