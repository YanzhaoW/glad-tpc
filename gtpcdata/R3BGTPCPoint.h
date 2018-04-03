// -------------------------------------------------------------------------
// -----                      R3BGTPCPoint header file                 -----
// ----- Created 25/01/18  by H. Alvarez-Pol (hector.alvarez@usc.es)   -----
// -------------------------------------------------------------------------

/**  R3BGTPCPoint.h
 * MC Points generated by the transport of
 * tracks through activethe glad-tpc detector.
 **/

#ifndef R3BGTPCPOINT_H
#define R3BGTPCPOINT_H

#include "TVector3.h"
#include "TLorentzVector.h"

#include "FairMCPoint.h"

class R3BGTPCPoint : public FairMCPoint {
  
 public:
  
  /** Default constructor **/
  R3BGTPCPoint();
  
  /** Constructor with arguments
   *@param trackID            Index of MCTrack
   *@param detID              Detector ID
   *@param pos                Coordinates at entrance to active volume [cm]
   *@param mom                Momentum of track at entrance [GeV]
   *@param tof                Time since event start [ns]
   *@param length             Track length since creation [cm]
   *@param eLoss              Energy deposit [GeV]
   *@param eventId            MC event id
   *@param parentTrackID      Parent track ID ???how to get it???
   *@param primaryParticleID  Primary Particle ID ???how to get it???
   *@param trackStatus        Status of the track ???how to get it???
   *@param PDGCode            PDG of the particle transported
   *@param moduleID           Module ID ???how to get it???
   *@param detCopyID          Detector Copy ID ???how to get it???
   *@param particleName       Name of the particle specified by pdg
   *@param volName            Volume name for a given volume identifier id
   *@param processName        Process that has produced the secondary particles in the current step
   *@param charge             Charge of the track currently transported
   *@param mass               Mass of the track currently transported
   *@param kineticEnergy      ???
   *@param trackStep          Length in centimeters of the current step (in cm) ???
   *@param isAccepted         ???
   **/
  R3BGTPCPoint(Int_t trackID, Int_t detID, TVector3 pos,
	       TVector3 mom, Double_t tof, Double_t length, 
	       Double_t eLoss, const UInt_t EventId,
	       Int_t parentTrackID, Int_t primaryParticleID, 
	       Int_t trackStatus, Int_t PDGCode, Int_t moduleID, 
	       Int_t detCopyID, TString particleName, TString volName, 
	       TString processName, Double_t charge, Double_t mass, 
	       Double_t kineticEnergy, Double_t trackStep, 
	       Bool_t isAccepted);
  
  /** Copy constructor **/
  R3BGTPCPoint(const R3BGTPCPoint& point) { *this = point; }
  
  /** Destructor **/
  virtual ~R3BGTPCPoint();
  
  /** Accessors **/
  Int_t GetParentTrackID() const { return fParentTrackID; }
  Int_t GetPrimaryParticleID() const { return fPrimaryParticleID; }
  Int_t GetTrackStatus() const { return fTrackStatus; }
  Int_t GetPDGCode() const { return fPDGCode; }
  Int_t GetModuleID() const { return fModuleID; }
  Int_t GetDetCopyID() const { return fDetCopyID; }
  TString  GetParticleName() const { return fParticleName; }
  TString  GetVolName() const { return fVolName; }    
  TString  GetProcessName() const { return fProcessName; }      
  Double_t GetCharge() const { return fCharge; }           
  Double_t GetMass() const { return fMass; }             
  Double_t GetKineticEnergy() const { return fKineticEnergy; } 
  Double_t GetTrackStep() const { return fTrackStep; }    
  Bool_t IsAccepted() const { return fIsAccepted; }      
  
  /** Modifiers **/
  void SetParentTrackID(Int_t code) { fParentTrackID = code; }          
  void SetPrimaryParticleID(Int_t code) { fPrimaryParticleID = code; }          
  void SetTrackStatus(Int_t code) { fTrackStatus = code; }          
  void SetPDGCode(Int_t code) { fPDGCode = code; }          
  void SetModuleID(Int_t id)   { fModuleID = id; }  
  void SetDetCopyID(Int_t id) { fDetCopyID = id; }
  void SetParticleName(TString name)  { fParticleName = name; }
  void SetVolName(TString name)  { fVolName = name; }    
  void SetProcessName(TString name)  { fProcessName = name; }      
  void SetCharge(Double_t val)  { fCharge = val; }           
  void SetMass(Double_t val)  { fMass = val; }             
  void SetKineticEnergy(Double_t val)  { fKineticEnergy = val; } 
  void SetTrackStep(Double_t val)  { fTrackStep = val; }    
  void SetIsAccepted(Bool_t bo)  { fIsAccepted = bo; }    
  
  /** Output to screen **/
  virtual void Print(const Option_t* opt = "") const;
  
 protected:
  
  Int_t fParentTrackID;         ///< Parent track ID 
  Int_t fPrimaryParticleID;     ///< Primary Particle ID 
  Int_t fTrackStatus;           ///< Status of the track 
  Int_t fPDGCode;               ///< PDG of the particle transported
  Int_t fModuleID;              ///< Module ID 
  Int_t fDetCopyID;             ///< Detector Copy ID 
  TString fParticleName;        ///< Name of the particle specified by pdg
  TString fVolName;             ///< Volume name for a given volume identifier id
  TString fProcessName;         ///< Process that has produced the secondary particles in the current step
  Double_t fCharge;             ///< Charge of the track currently transported
  Double_t fMass;               ///< Mass of the track currently transported
  Double_t fKineticEnergy;      ///< ???
  Double_t fTrackStep;          ///< Length in centimeters of the current step (in cm)???
  Bool_t fIsAccepted;           ///< ???
  
  ClassDef(R3BGTPCPoint,1)
 };

#endif
