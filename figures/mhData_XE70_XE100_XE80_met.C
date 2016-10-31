void mhData_XE70_XE100_XE80_met()
{
//=========Macro generated from canvas: all_mhData_/all_mhData_
//=========  (Thu Aug 18 22:51:55 2016) by ROOT version6.04/12
   TCanvas *all_mhData_ = new TCanvas("all_mhData_", "all_mhData_",0,0,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   all_mhData_->SetHighLightColor(2);
   all_mhData_->Range(0,0,1,1);
   all_mhData_->SetFillColor(0);
   all_mhData_->SetBorderMode(0);
   all_mhData_->SetBorderSize(2);
   all_mhData_->SetLeftMargin(0);
   all_mhData_->SetRightMargin(0);
   all_mhData_->SetTopMargin(0);
   all_mhData_->SetBottomMargin(0);
   all_mhData_->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: main
   TPad *main = new TPad("main", "main",0,0,1,1);
   main->Draw();
   main->cd();
   main->Range(-111.3924,-0.3240506,584.8101,1.701266);
   main->SetFillColor(0);
   main->SetFillStyle(4000);
   main->SetBorderMode(0);
   main->SetBorderSize(0);
   main->SetTickx(1);
   main->SetTicky(1);
   main->SetLeftMargin(0.16);
   main->SetRightMargin(0.05);
   main->SetTopMargin(0.05);
   main->SetBottomMargin(0.16);
   main->SetFrameBorderMode(0);
   main->SetFrameBorderMode(0);
   
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_fx3001[16] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   260,
   310,
   370,
   450};
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_fy3001[16] = {
   0.01107429,
   0.01957184,
   0.05832366,
   0.1554733,
   0.3208541,
   0.5069068,
   0.6885315,
   0.8228032,
   0.8855263,
   0.9267782,
   0.9672131,
   0.9863636,
   0.9864865,
   0.9936306,
   0.9607843,
   0.9545455};
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_felx3001[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_fely3001[16] = {
   0.0009157464,
   0.0009134493,
   0.001688186,
   0.003233159,
   0.005483002,
   0.007856353,
   0.009582179,
   0.01044768,
   0.01188941,
   0.01252333,
   0.01130342,
   0.009607784,
   0.009522686,
   0.00941724,
   0.03424006,
   0.06113612};
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_fehx3001[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_fehy3001[16] = {
   0.0009685601,
   0.0009421833,
   0.001719317,
   0.00327015,
   0.005516166,
   0.007854082,
   0.009475741,
   0.01013502,
   0.01121298,
   0.01133166,
   0.009241681,
   0.006533689,
   0.006475241,
   0.004642288,
   0.02178258,
   0.0322379};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE70tcl_fx3001,effErrorGraph_hist_data_CutTriggerXE70tcl_fy3001,effErrorGraph_hist_data_CutTriggerXE70tcl_felx3001,effErrorGraph_hist_data_CutTriggerXE70tcl_fehx3001,effErrorGraph_hist_data_CutTriggerXE70tcl_fely3001,effErrorGraph_hist_data_CutTriggerXE70tcl_fehy3001);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE70tcl");
   grae->SetTitle("XE70");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001 = new TH1F("Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001","XE70",100,0,550);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetMinimum(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetMaximum(1.6);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetDirectory(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetLineColor(ci);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetXaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetXaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetXaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetXaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetYaxis()->SetTitle("Efficiency");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetYaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetYaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetYaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetYaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetZaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetZaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetZaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001);
   
   grae->Draw("apz");
   
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_fx3002[16] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   260,
   310,
   370,
   450};
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_fy3002[16] = {
   0.01107429,
   0.01957184,
   0.05832366,
   0.1554733,
   0.3208541,
   0.5069068,
   0.6885315,
   0.8228032,
   0.8855263,
   0.9267782,
   0.9672131,
   0.9863636,
   0.9864865,
   0.9936306,
   0.9607843,
   0.9545455};
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_felx3002[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_fely3002[16] = {
   0.0009157464,
   0.0009134493,
   0.001688186,
   0.003233159,
   0.005483002,
   0.007856353,
   0.009582179,
   0.01044768,
   0.01188941,
   0.01252333,
   0.01130342,
   0.009607784,
   0.009522686,
   0.00941724,
   0.03424006,
   0.06113612};
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_fehx3002[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE70tcl_fehy3002[16] = {
   0.0009685601,
   0.0009421833,
   0.001719317,
   0.00327015,
   0.005516166,
   0.007854082,
   0.009475741,
   0.01013502,
   0.01121298,
   0.01133166,
   0.009241681,
   0.006533689,
   0.006475241,
   0.004642288,
   0.02178258,
   0.0322379};
   grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE70tcl_fx3002,effErrorGraph_hist_data_CutTriggerXE70tcl_fy3002,effErrorGraph_hist_data_CutTriggerXE70tcl_felx3002,effErrorGraph_hist_data_CutTriggerXE70tcl_fehx3002,effErrorGraph_hist_data_CutTriggerXE70tcl_fely3002,effErrorGraph_hist_data_CutTriggerXE70tcl_fehy3002);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE70tcl");
   grae->SetTitle("XE70");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002 = new TH1F("Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002","XE70",100,0,550);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetMinimum(0);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetMaximum(1.6);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetDirectory(0);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetLineColor(ci);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002);
   
   grae->Draw("pz ");
   
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fx3003[16] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   260,
   310,
   370,
   450};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fy3003[16] = {
   0.003556705,
   0.004881763,
   0.007494986,
   0.01045604,
   0.02468109,
   0.06265417,
   0.1451545,
   0.3028322,
   0.5052632,
   0.6589958,
   0.8131148,
   0.9181818,
   0.972973,
   0.9808917,
   0.9607843,
   0.9545455};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_felx3003[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fely3003[16] = {
   0.0005100026,
   0.0004523721,
   0.0006100831,
   0.0008872073,
   0.001784912,
   0.003736972,
   0.007149257,
   0.01228657,
   0.01812831,
   0.02187453,
   0.02296548,
   0.01976085,
   0.01247272,
   0.01337144,
   0.03424006,
   0.06113612};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fehx3003[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fehy3003[16] = {
   0.0005637572,
   0.0004820141,
   0.0006448225,
   0.0009398272,
   0.00187295,
   0.003881005,
   0.007349639,
   0.01247749,
   0.01811909,
   0.02143207,
   0.02160116,
   0.01722715,
   0.009583646,
   0.009129454,
   0.02178258,
   0.0322379};
   grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE100_fx3003,effErrorGraph_hist_data_CutTriggerXE100_fy3003,effErrorGraph_hist_data_CutTriggerXE100_felx3003,effErrorGraph_hist_data_CutTriggerXE100_fehx3003,effErrorGraph_hist_data_CutTriggerXE100_fely3003,effErrorGraph_hist_data_CutTriggerXE100_fehy3003);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE100");
   grae->SetTitle("XE100");
   grae->SetFillColor(1);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003 = new TH1F("Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003","XE100",100,0,550);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->SetMinimum(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->SetMaximum(1.6);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->SetDirectory(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->SetLineColor(ci);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetXaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetXaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetXaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetXaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetYaxis()->SetTitle("Efficiency");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetYaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetYaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetYaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetYaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetZaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetZaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetZaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003);
   
   grae->Draw("pz ");
   
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_fx3004[16] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   260,
   310,
   370,
   450};
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_fy3004[16] = {
   0.005415892,
   0.007703332,
   0.02311834,
   0.0664361,
   0.1655574,
   0.323631,
   0.5230639,
   0.691358,
   0.8013158,
   0.8807531,
   0.9442623,
   0.9727273,
   0.9864865,
   0.9936306,
   0.9607843,
   0.9545455};
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_felx3004[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_fely3004[16] = {
   0.0006345663,
   0.0005710959,
   0.00107589,
   0.002211717,
   0.004348147,
   0.007322091,
   0.01028361,
   0.01254064,
   0.01473284,
   0.01535126,
   0.01414756,
   0.0125832,
   0.009522686,
   0.00941724,
   0.03424006,
   0.06113612};
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_fehx3004[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_fehy3004[16] = {
   0.0006880559,
   0.0006005559,
   0.0011095,
   0.002258277,
   0.004410051,
   0.007380142,
   0.01027059,
   0.01235535,
   0.01420454,
   0.01428991,
   0.01219952,
   0.009669653,
   0.006475241,
   0.004642288,
   0.02178258,
   0.0322379};
   grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE80tcl_fx3004,effErrorGraph_hist_data_CutTriggerXE80tcl_fy3004,effErrorGraph_hist_data_CutTriggerXE80tcl_felx3004,effErrorGraph_hist_data_CutTriggerXE80tcl_fehx3004,effErrorGraph_hist_data_CutTriggerXE80tcl_fely3004,effErrorGraph_hist_data_CutTriggerXE80tcl_fehy3004);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE80tcl");
   grae->SetTitle("XE80");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004 = new TH1F("Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004","XE80",100,0,550);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->SetMinimum(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->SetMaximum(1.6);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->SetDirectory(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->SetLineColor(ci);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetXaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetXaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetXaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetXaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetYaxis()->SetTitle("Efficiency");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetYaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetYaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetYaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetYaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetZaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetZaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetZaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3004);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.56,0.75,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("effErrorGraph_hist_data_CutTriggerXE70tcl","HLT_xe70_tc_lcw","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("effErrorGraph_hist_data_CutTriggerXE100","HLT_xe100","lp");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("effErrorGraph_hist_data_CutTriggerXE80tcl","HLT_xe80_tc_lcw","lp");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.2,0.86,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(72);
   tex->SetTextSize(0.0625);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.36,0.86,"Internal");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.0625);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.8,"#sqrt{s} = 13 TeV, 3.2 fb^{-1}, Data 2015");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.0425);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy = new TH1F("h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy","XE70",100,0,550);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->SetMinimum(0);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->SetMaximum(1.6);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->SetDirectory(0);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->SetStats(0);

   ci = TColor::GetColor("#000099");
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->SetLineColor(ci);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetXaxis()->SetLabelFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetXaxis()->SetLabelSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetXaxis()->SetTitleSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetXaxis()->SetTitleFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetYaxis()->SetTitle("Efficiency");
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetYaxis()->SetLabelFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetYaxis()->SetLabelSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetYaxis()->SetTitleSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetYaxis()->SetTitleFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetZaxis()->SetLabelFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetZaxis()->SetLabelSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetZaxis()->SetTitleSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->GetZaxis()->SetTitleFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->Draw("sameaxis");
   main->Modified();
   all_mhData_->cd();
   all_mhData_->Modified();
   all_mhData_->cd();
   all_mhData_->SetSelected(all_mhData_);
}
