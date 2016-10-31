void mh200_XE70_XE90_XE100_XE80_met()
{
//=========Macro generated from canvas: all_mh200_/all_mh200_
//=========  (Fri Aug 19 15:27:36 2016) by ROOT version6.04/12
   TCanvas *all_mh200_ = new TCanvas("all_mh200_", "all_mh200_",0,0,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   all_mh200_->SetHighLightColor(2);
   all_mh200_->Range(0,0,1,1);
   all_mh200_->SetFillColor(0);
   all_mh200_->SetBorderMode(0);
   all_mh200_->SetBorderSize(2);
   all_mh200_->SetTickx(1);
   all_mh200_->SetTicky(1);
   all_mh200_->SetLeftMargin(0);
   all_mh200_->SetRightMargin(0);
   all_mh200_->SetTopMargin(0);
   all_mh200_->SetBottomMargin(0);
   all_mh200_->SetFrameBorderMode(0);
  
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
   0.04062309,
   0.07451231,
   0.150817,
   0.3025359,
   0.5098923,
   0.7124356,
   0.8542192,
   0.9326227,
   0.9667146,
   0.9852865,
   0.9915789,
   0.994337,
   0.9980747,
   0.9974451,
   0.9988926,
   0.9981447};
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
   0.003360172,
   0.002682796,
   0.003054977,
   0.003646734,
   0.004042249,
   0.00395201,
   0.00350038,
   0.002915592,
   0.00246461,
   0.002022609,
   0.001835729,
   0.001802934,
   0.001011596,
   0.001341583,
   0.001658686,
   0.002773714};
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
   0.003547585,
   0.002743346,
   0.003089292,
   0.003663406,
   0.004041388,
   0.003930537,
   0.00345452,
   0.002839585,
   0.002352451,
   0.001855013,
   0.001604144,
   0.001487772,
   0.0007477723,
   0.0009920223,
   0.000810049,
   0.0013564};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE70tcl_fx3001,effErrorGraph_hist_data_CutTriggerXE70tcl_fy3001,effErrorGraph_hist_data_CutTriggerXE70tcl_felx3001,effErrorGraph_hist_data_CutTriggerXE70tcl_fehx3001,effErrorGraph_hist_data_CutTriggerXE70tcl_fely3001,effErrorGraph_hist_data_CutTriggerXE70tcl_fehy3001);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE70tcl");
   grae->SetTitle("XE70");
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001 = new TH1F("Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001","XE70",100,0,550);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetMinimum(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetMaximum(1.6);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetDirectory(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetStats(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetLineWidth(2);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetMarkerStyle(20);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl3001->SetMarkerSize(1.2);
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
   0.04062309,
   0.07451231,
   0.150817,
   0.3025359,
   0.5098923,
   0.7124356,
   0.8542192,
   0.9326227,
   0.9667146,
   0.9852865,
   0.9915789,
   0.994337,
   0.9980747,
   0.9974451,
   0.9988926,
   0.9981447};
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
   0.003360172,
   0.002682796,
   0.003054977,
   0.003646734,
   0.004042249,
   0.00395201,
   0.00350038,
   0.002915592,
   0.00246461,
   0.002022609,
   0.001835729,
   0.001802934,
   0.001011596,
   0.001341583,
   0.001658686,
   0.002773714};
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
   0.003547585,
   0.002743346,
   0.003089292,
   0.003663406,
   0.004041388,
   0.003930537,
   0.00345452,
   0.002839585,
   0.002352451,
   0.001855013,
   0.001604144,
   0.001487772,
   0.0007477723,
   0.0009920223,
   0.000810049,
   0.0013564};
   grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE70tcl_fx3002,effErrorGraph_hist_data_CutTriggerXE70tcl_fy3002,effErrorGraph_hist_data_CutTriggerXE70tcl_felx3002,effErrorGraph_hist_data_CutTriggerXE70tcl_fehx3002,effErrorGraph_hist_data_CutTriggerXE70tcl_fely3002,effErrorGraph_hist_data_CutTriggerXE70tcl_fehy3002);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE70tcl");
   grae->SetTitle("XE70");
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002 = new TH1F("Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002","XE70",100,0,550);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetMinimum(0);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetMaximum(1.6);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetDirectory(0);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetStats(0);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetLineWidth(2);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetMarkerStyle(20);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE70tcl30013002->SetMarkerSize(1.2);
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
   
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fx3003[16] = {
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
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fy3003[16] = {
   0.01282834,
   0.027076,
   0.06646548,
   0.1751723,
   0.3819785,
   0.6310209,
   0.8189137,
   0.9197263,
   0.9634761,
   0.9832215,
   0.9905263,
   0.994337,
   0.9976896,
   0.9969341,
   0.9988926,
   0.9981447};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_felx3003[16] = {
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
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fely3003[16] = {
   0.00187277,
   0.001643649,
   0.002117188,
   0.003010886,
   0.003923243,
   0.004208229,
   0.003815385,
   0.003155901,
   0.002574307,
   0.002151148,
   0.001937823,
   0.001802934,
   0.001091027,
   0.001446816,
   0.001658686,
   0.002773714};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fehx3003[16] = {
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
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fehy3003[16] = {
   0.00207202,
   0.001710978,
   0.002159792,
   0.003038306,
   0.003933522,
   0.004195012,
   0.003774094,
   0.003082164,
   0.002462931,
   0.001984321,
   0.001706899,
   0.001487772,
   0.0008287427,
   0.001099383,
   0.000810049,
   0.0013564};
   grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE90mht_fx3003,effErrorGraph_hist_data_CutTriggerXE90mht_fy3003,effErrorGraph_hist_data_CutTriggerXE90mht_felx3003,effErrorGraph_hist_data_CutTriggerXE90mht_fehx3003,effErrorGraph_hist_data_CutTriggerXE90mht_fely3003,effErrorGraph_hist_data_CutTriggerXE90mht_fehy3003);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE90mht");
   grae->SetTitle("XE90");
   grae->SetLineColor(3);
   grae->SetLineWidth(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003 = new TH1F("Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003","XE90",100,0,550);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->SetMinimum(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->SetMaximum(1.6);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->SetDirectory(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->SetStats(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->SetLineWidth(2);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->SetMarkerStyle(20);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->SetMarkerSize(1.2);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetXaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetXaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetXaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetXaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetYaxis()->SetTitle("Efficiency");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetYaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetYaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetYaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetYaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetZaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetZaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetZaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3003);
   
   grae->Draw("pz ");
   
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fx3004[16] = {
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
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fy3004[16] = {
   0.007330483,
   0.008527875,
   0.01486825,
   0.0226396,
   0.04492328,
   0.09406241,
   0.1906887,
   0.3597842,
   0.5824037,
   0.761745,
   0.8933333,
   0.9377065,
   0.9834424,
   0.9928462,
   0.9966777,
   0.9962894};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_felx3004[16] = {
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
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fely3004[16] = {
   0.001397079,
   0.0009161363,
   0.001015606,
   0.00116379,
   0.001655137,
   0.002521492,
   0.003851118,
   0.005496139,
   0.006627989,
   0.00689257,
   0.00587752,
   0.005392773,
   0.002635424,
   0.002089992,
   0.002371052,
   0.003423505};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fehx3004[16] = {
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
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fehy3004[16] = {
   0.00159914,
   0.0009861968,
   0.001063306,
   0.0012041,
   0.001694807,
   0.002562542,
   0.003891165,
   0.005520767,
   0.006608188,
   0.006802409,
   0.005693321,
   0.005116969,
   0.002386216,
   0.001750425,
   0.001600341,
   0.002103647};
   grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE100_fx3004,effErrorGraph_hist_data_CutTriggerXE100_fy3004,effErrorGraph_hist_data_CutTriggerXE100_felx3004,effErrorGraph_hist_data_CutTriggerXE100_fehx3004,effErrorGraph_hist_data_CutTriggerXE100_fely3004,effErrorGraph_hist_data_CutTriggerXE100_fehy3004);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE100");
   grae->SetTitle("XE100");
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004 = new TH1F("Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004","XE100",100,0,550);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->SetMinimum(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->SetMaximum(1.6);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->SetDirectory(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->SetStats(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->SetLineWidth(2);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->SetMarkerStyle(20);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->SetMarkerSize(1.2);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetXaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetXaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetXaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetXaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetYaxis()->SetTitle("Efficiency");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetYaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetYaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetYaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetYaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetZaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetZaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetZaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_effErrorGraph_hist_data_CutTriggerXE1003004);
   
   grae->Draw("pz ");
   
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_fx3005[16] = {
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
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_fy3005[16] = {
   0.01832621,
   0.03571048,
   0.073826,
   0.16556,
   0.3264773,
   0.5359739,
   0.728225,
   0.8641927,
   0.9354084,
   0.9669592,
   0.982807,
   0.9910335,
   0.9965345,
   0.9964231,
   0.9988926,
   0.9981447};
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_felx3005[16] = {
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
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_fely3005[16] = {
   0.002250628,
   0.001884467,
   0.002223922,
   0.002943413,
   0.003783807,
   0.004344276,
   0.004398567,
   0.003964217,
   0.003351723,
   0.002955634,
   0.002554243,
   0.002215648,
   0.001297406,
   0.001544013,
   0.001658686,
   0.002773714};
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_fehx3005[16] = {
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
   Double_t effErrorGraph_hist_data_CutTriggerXE80tcl_fehy3005[16] = {
   0.002447418,
   0.001950558,
   0.002265801,
   0.002971647,
   0.003798932,
   0.004340649,
   0.004369012,
   0.003900242,
   0.003247136,
   0.002794609,
   0.002327539,
   0.001904075,
   0.001037949,
   0.001198201,
   0.000810049,
   0.0013564};
   grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE80tcl_fx3005,effErrorGraph_hist_data_CutTriggerXE80tcl_fy3005,effErrorGraph_hist_data_CutTriggerXE80tcl_felx3005,effErrorGraph_hist_data_CutTriggerXE80tcl_fehx3005,effErrorGraph_hist_data_CutTriggerXE80tcl_fely3005,effErrorGraph_hist_data_CutTriggerXE80tcl_fehy3005);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE80tcl");
   grae->SetTitle("XE80");
   grae->SetLineColor(2);
   grae->SetLineWidth(3);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005 = new TH1F("Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005","XE80",100,0,550);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->SetMinimum(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->SetMaximum(1.6);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->SetDirectory(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->SetStats(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->SetLineWidth(2);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->SetMarkerStyle(20);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->SetMarkerSize(1.2);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetXaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetXaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetXaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetXaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetYaxis()->SetTitle("Efficiency");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetYaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetYaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetYaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetYaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetZaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetZaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetZaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_effErrorGraph_hist_data_CutTriggerXE80tcl3005);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.56,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.0425);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("effErrorGraph_hist_data_CutTriggerXE70tcl","HLT_xe70_tc_lcw","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("effErrorGraph_hist_data_CutTriggerXE80tcl","HLT_xe80_tc_lcw","lp");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("effErrorGraph_hist_data_CutTriggerXE90mht","HLT_xe90_mht","lp");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("effErrorGraph_hist_data_CutTriggerXE100","HLT_xe100","lp");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(4);
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
      tex = new TLatex(0.36,0.86,"Simulation");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.0625);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.8,"#sqrt{s} = 13 TeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.0425);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.74,"Signal, m_{H^{+}} = 200 GeV");
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
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->SetLineWidth(2);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->SetMarkerStyle(20);
   h_effErrorGraph_hist_data_CutTriggerXE70tcl_copy->SetMarkerSize(1.2);
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
   all_mh200_->cd();
   all_mh200_->Modified();
   all_mh200_->cd();
   all_mh200_->SetSelected(all_mh200_);
}
