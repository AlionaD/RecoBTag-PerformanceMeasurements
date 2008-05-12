#ifndef TtSemilepLRValPlots_H
#define TtSemilepLRValPlots_H


#include "FWCore/Framework/interface/EDAnalyzer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/ParameterSet/interface/InputTag.h"

#include "AnalysisDataFormats/TopObjects/interface/TtGenEvent.h" 
#include "AnalysisDataFormats/TopObjects/interface/TtSemiEvtSolution.h" 

#include "TopQuarkAnalysis/TopJetCombination/interface/TtSemiLRJetCombObservables.h"


#include "TopQuarkAnalysis/TopTools/interface/LRHelpFunctions.h"

// #include "TtSemilepLRValPlotsHisto.h"

#include "TFile.h"
#include <vector>
#include <map>
#include <string>
#include <utility> 


class TtSemilepLRValPlots : public edm::EDAnalyzer {

  public:

    /// Constructor
    TtSemilepLRValPlots(const edm::ParameterSet& pset);

    /// Destructor
    virtual ~TtSemilepLRValPlots();
    virtual void endJob();

    /// Perform the real analysis
    void analyze(const edm::Event & iEvent, const edm::EventSetup& iSetup);


  private: 


    // The file which will store the histos
    TFile *theFile;

    // Switch for debug output
    bool debug;

    std::string rootFileName, obsFileName;    
    bool csa,csaProcID;
    double weight;
    
    double goodSolutiontt0j,goodSolutiontt1j,goodSolutiontt2j, goodSolutiontt3j,goodSolutiontt4j,goodSolutiontt0jother,goodSolutiontt1jother,goodSolutiontt2jother, goodSolutiontt3jother,goodSolutiontt4jother,goodSolutionrest;  
    double goodSolutiontt0jbcut,goodSolutiontt1jbcut,goodSolutiontt2jbcut, goodSolutiontt3jbcut,goodSolutiontt4jbcut,goodSolutiontt0jotherbcut,goodSolutiontt1jotherbcut,goodSolutiontt2jotherbcut, goodSolutiontt3jotherbcut,goodSolutiontt4jotherbcut,goodSolutionrestbcut;
    edm::InputTag evtsols;
    LRHelpFunctions *myLRhelper;
    std::vector<int> obsNrs;
    int lrBins;
    double lrMin,lrMax;
    const char* lrFits;
    std::string bTagCutLabel;
    double bCut;

    //observable histogram variables
    int nrJetCombObs;

    TtSemiLRJetCombObservables * myLRJetCombObservables;

};


#endif