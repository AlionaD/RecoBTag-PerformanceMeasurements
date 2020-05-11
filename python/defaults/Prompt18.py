common = {
	'eras' : ['Run2_2018','run2_nanoAOD_102Xv1'],
	'miniAOD' : True,
	'runDeepFlavourTagVariables' : True,
}

mc = {
	'inputFiles' :['/store/mc/RunIIAutumn18MiniAOD/BulkGravTohhTohWWhbb_narrow_M-2300_TuneCP2_13TeV-madgraph_pythia8/MINIAODSIM/102X_upgrade2018_realistic_v15-v1/260000/24516D8A-B053-1A42-A10F-07EA8D96FE6C.root'] #'file:/afs/cern.ch/work/a/adodonov/private/testfile.root']#['/store/mc/RunIIFall17MiniAOD/TTTo2L2Nu_TuneCP5_PSweights_13TeV-powheg-pythia8/MINIAODSIM/94X_mc2017_realistic_v10-v1/60000/002E7FEA-16E0-E711-922D-0242AC130002.root
,
	'JPCalibration' : 'JPcalib_MC102X_2018_v1',
  'mcGlobalTag' : '102X_upgrade2018_realistic_v19',
	}

data = {
	'inputFiles' : ['/store/data/Run2018B/JetHT/MINIAOD/17Sep2018-v1/60000/FE3C69F0-A0BC-8941-92AF-B0DA1A6270BF.root'] #/store/data/Run2018A/JetHT/MINIAOD/17Sep2018-v1/00000/00A64001-F644-8740-AC48-14CD4E623E40.root']
,	
	'JPCalibration' : 'JPcalib_Data102X_2018_v1',
	'dataGlobalTag' : '102X_dataRun2_Prompt_v11',
}
